// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Backends/CPlusPlus/Uno/Memory.cpp.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno/_internal.h>
#include <Uno/Support.h>
#include <uBase/Atomic.h>
#include <uBase/HashMap.h>
#include <uBase/String.h>
#include <uBase/StringBuilder.h>
#include <uBase/Thread.h>
#include <uBase/Traits.h>
#include <uBase/Unicode.h>
#include <Uno.Type.h>
#include <Uno.String.h>

static void* _MainThread;
static uBase::ThreadLocal* _ThreadLocal;
static uBase::Mutex* _WeakMutex;

#ifdef DEBUG_DUMPS
static uBase::HashMap<uObject*, bool>* _HeapObjects;
#endif

static bool uTryClearWeak(uObject*);

//#if #(REFLECTION:Defined)
//void uInitReflection();
//void uFreeReflection();
//void uRegisterIntrinsics();
//#endif
void uInitObjectModel();
void uFreeObjectModel();
void uInitSupport();
void uFreeSupport();

static uThreadData* uGetThreadData()
{
    void* value = uBase::GetThreadLocal(_ThreadLocal);

    if (!value)
    {
        value = new uThreadData();
        uBase::SetThreadLocal(_ThreadLocal, value);
    }

    return (uThreadData*)value;
}

static void uFreeThreadData(void* value)
{
    delete (uThreadData*)value;
}

uRuntime::uRuntime()
{
    if (_MainThread)
        uFatal(NULL, "There is only room for one Uno Runtime object in this process.");

    _MainThread = uBase::GetThread();
    _ThreadLocal = uBase::CreateThreadLocal(uFreeThreadData);
    _WeakMutex = uBase::CreateMutex();

#ifdef DEBUG_DUMPS
    _HeapObjects = new uBase::HashMap<uObject*, bool>();
#endif

    uAutoReleasePool pool;
//#if #(REFLECTION:Defined)
//    uInitReflection();
//#endif
    uInitSupport();
    uInitObjectModel();
//#if #(REFLECTION:Defined)
//    uRegisterIntrinsics();
//#endif
}

uRuntime::~uRuntime()
{
    uFreeSupport();
    uFreeObjectModel();
//#if #(REFLECTION:Defined)
//    uFreeReflection();
//#endif

#ifdef DEBUG_DUMPS
    delete _HeapObjects;
#endif

    uBase::DeleteThreadLocal(_ThreadLocal);
    uBase::DeleteMutex(_WeakMutex);
}

uType* uSwapThreadType(uType* type)
{
    uThreadData* thread = uGetThreadData();
    uType* result = thread->CurrentType;
    thread->CurrentType = type;
    return result;
}

uStackFrame::uStackFrame(const char* type, const char* function)
    : _thread(uGetThreadData())
{
    uCallStackFrame* frame = ++_thread->CallStackPtr;
    U_ASSERT(frame < _thread->CallStackEnd &&
             !frame->Type && !frame->Function);
    frame->Type = type;
    frame->Function = function;
}

uStackFrame::~uStackFrame()
{
#ifdef DEBUG_UNSAFE
    uCallStackFrame* frame =
#endif
    _thread->CallStackPtr--;
#ifdef DEBUG_UNSAFE
    frame->Type = NULL;
    frame->Function = NULL;
#endif
}

uString* uGetStackTrace()
{
    uBase::StringBuilder sb;
    uThreadData* thread = uGetThreadData();

    for (uCallStackFrame* frame = thread->CallStackPtr;
         frame >= thread->CallStack;
         frame--)
    {
        if (sb.GetLength() > 0)
            sb += '\n';

        sb += "   at ";
        sb += frame->Type;
        sb += '.';
        sb += frame->Function;
    }

    return uStringFromXliString(sb.ToString());
}

#ifdef DEBUG_ARC
static uBase::String uGetCaller()
{
    uThreadData* thread = uGetThreadData();

    if (thread->CallStackPtr < thread->CallStack)
        return "";

    uBase::StringBuilder sb;
    uCallStackFrame* frame = thread->CallStackPtr;
    sb += " -- at ";
    sb += frame->Type;
    sb += '.';
    sb += frame->Function;
    return sb.ToString();
}
#endif

static void uPushAutoReleasePool(uThreadData* thread)
{
    uAutoReleaseFrame* frame = ++thread->AutoReleasePtr;
    U_ASSERT(frame < thread->AutoReleaseEnd);
    frame->StartIndex = thread->AutoReleaseList.Length();

#ifdef DEBUG_ARC
    frame->AllocCount = 0;
    frame->AllocSize = 0;
    frame->FreeCount = 0;
    frame->FreeSize = 0;
#endif
}

static void uPopAutoReleasePool(uThreadData* thread)
{
    uAutoReleaseFrame* frame = thread->AutoReleasePtr;
    U_ASSERT(thread->AutoReleasePtr >= thread->AutoReleaseStack);

    for (size_t i = frame->StartIndex; i < thread->AutoReleaseList.Length(); i++)
    {
        uObject* object = thread->AutoReleaseList[i];
#ifdef DEBUG_ARC
        frame->AllocCount++;
        frame->AllocSize += object->__size;
#endif
        uRelease(object);
    }

#if DEBUG_ARC >= 1
    U_LOG("--- Alloc'd %d objects (%d bytes), Free'd %d objects (%d bytes) ---",
          frame->AllocCount, frame->AllocSize, frame->FreeCount, frame->FreeSize);
#endif
    thread->AutoReleaseList.Resize(frame->StartIndex);
    thread->AutoReleasePtr--;
}

uAutoReleasePool::uAutoReleasePool()
    : _thread(uGetThreadData())
{
    uPushAutoReleasePool(_thread);
}

uAutoReleasePool::~uAutoReleasePool()
{
    U_ASSERT(_thread == uGetThreadData());
    uPopAutoReleasePool(_thread);
}

uForeignPool::uForeignPool()
    : _thread(uGetThreadData())
    , _threadHasPool(_thread->AutoReleasePtr >= _thread->AutoReleaseStack)
{
    if (!_threadHasPool)
        uPushAutoReleasePool(_thread);
}

uForeignPool::~uForeignPool()
{
    U_ASSERT(_thread == uGetThreadData());
    if (!_threadHasPool)
        uPopAutoReleasePool(_thread);
}

void uStoreStrong(uObject** address, uObject* object)
{
    uAutoRelease(*address);
    uRetain(*address = object);
}

void uAutoRelease(uObject* object)
{
    if (object)
    {
        uThreadData* thread = uGetThreadData();
        thread->AutoReleaseList.Add(object);
        U_ASSERT(thread->AutoReleasePtr >= thread->AutoReleaseStack);
#ifdef DEBUG_ARC
        int releaseCount = 0;
        for (size_t i = 0; i < thread->AutoReleaseList.Length(); i++)
            if (thread->AutoReleaseList[i] == object)
                releaseCount++;

        int retainCount = object->__retains - releaseCount;
        if (retainCount < 0)
        {
            U_LOG("*** BAD AUTORELEASE: %s #%d (%d bytes, %d retains) ***%s",
                  object->__type->FullName, object->__id, object->__size, retainCount, uGetCaller().Ptr());
            U_FATAL();
        }
#endif
#if DEBUG_ARC >= 4
        U_LOG("autorelease %s #%d (%d bytes, %d retains)%s",
              object->__type->FullName, object->__id, object->__size, object->__retains, uGetCaller().Ptr());
#endif
    }
}

void uRetainStruct(uType* type, void* address)
{
#if DEBUG_ARC >= 4
    U_LOG("retain %s [struct] (%d bytes)%s", type->FullName, type->ValueSize, uGetCaller().Ptr());
#endif
    for (size_t i = 0; i < type->Refs.StrongCount; i++)
        uRetain(*(uObject**)((uint8_t*)address + type->Refs.Strong[i]));
}

void uReleaseStruct(uType* type, void* address)
{
#if DEBUG_ARC >= 4
    U_LOG("release %s [struct] (%d bytes)%s", type->FullName, type->ValueSize, uGetCaller().Ptr());
#endif
    for (size_t i = 0; i < type->Refs.StrongCount; i++)
    {
        uObject*& ptr = *(uObject**)((uint8_t*)address + type->Refs.Strong[i]);
        uRelease(ptr);
        ptr = NULL;
    }

    for (size_t i = 0; i < type->Refs.WeakCount; i++)
        uStoreWeak((uWeakObject**)((uint8_t*)address + type->Refs.Weak[i]), NULL);
}

void uAutoReleaseStruct(uType* type, void* address)
{
#if DEBUG_ARC >= 4
    U_LOG("autorelease %s [struct] (%d bytes)%s", type->FullName, type->ValueSize, uGetCaller().Ptr());
#endif
    for (size_t i = 0; i < type->Refs.StrongCount; i++)
        uAutoRelease(*(uObject**)((uint8_t*)address + type->Refs.Strong[i]));
}

void uRetain(uObject* object)
{
    if (object)
    {
        uBase::AtomicIncrement(&object->__retains);
#if DEBUG_ARC >= 3
        U_LOG("retain %s #%d (%d bytes, %d retains)%s",
              object->__type->FullName, object->__id, object->__size, object->__retains, uGetCaller().Ptr());
#endif
    }
}

void uRelease(uObject* object)
{
    if (object)
    {
        if (uBase::AtomicDecrement(&object->__retains) == 0)
        {
            if (!uTryClearWeak(object))
                return;
#ifdef DEBUG_ARC
            uThreadData* thread = uGetThreadData();

            if (thread->AutoReleasePtr >= thread->AutoReleaseStack)
            {
                uAutoReleaseFrame* frame = thread->AutoReleasePtr;
                if (frame->AllocCount > 0)
                {
                    frame->FreeCount++;
                    frame->FreeSize += object->__size;
                }
            }
#endif
            uType* type = object->__type;

            switch (type->Type)
            {
            case uTypeTypeClass:
            {
                uType* baseType = type;
                do
                {
                    if (baseType->fp_Finalize)
                    {
                        try { (*baseType->fp_Finalize)(object); }
                        catch (...) { uLog(uLogLevelError, "Runtime Error: Unhandled exception in finalizer for %s", baseType->FullName); }
                    }
                } while ((baseType = baseType->Base));
                uReleaseStruct(type, object);
                break;
            }

            case uTypeTypeStruct:
                // This must be a boxed value, so append size of object header
                if (type->Flags & uTypeFlagsRetainStruct)
                    uReleaseStruct(type, (uint8_t*)object + sizeof(uObject));
                break;

            case uTypeTypeDelegate:
                uRelease(((uDelegate*)object)->_object);
                uRelease(((uDelegate*)object)->_prev);
                break;

            case uTypeTypeArray:
            {
                uArray* array = (uArray*)object;
                uArrayType* arrayType = (uArrayType*)type;
                uType* elmType = arrayType->ElementType;

                switch (elmType->Type)
                {
                case uTypeTypeClass:
                case uTypeTypeInterface:
                case uTypeTypeDelegate:
                case uTypeTypeArray:
                    for (uObject** objAddr = (uObject**)array->_ptr;
                         array->_length--;
                         objAddr++)
                        uRelease(*objAddr);
                    break;

                case uTypeTypeStruct:
                    if (elmType->Flags & uTypeFlagsRetainStruct)
                        for (uint8_t* address = (uint8_t*)array->_ptr;
                             array->_length--;
                             address += elmType->ValueSize)
                            uReleaseStruct(elmType, address);
                    break;

                default:
                    break;
                }
                break;
            }
            default:
                break;
            }

            if (object->__lockptr)
                uBase::DeleteMutex(object->__lockptr);
            if (object->__condptr)
                uBase::DeleteCond(object->__condptr);

#if DEBUG_ARC >= 2
            U_LOG("free %s #%d (%d bytes)%s",
                  object->__type->FullName, object->__id, object->__size, uGetCaller().Ptr());
#endif
#ifdef DEBUG_DUMPS
            uEnterCritical();
            _HeapObjects->Remove(object);
            uExitCritical();
#endif
            U_ASSERT(object->__type != ::g::Uno::Type_typeof());
            free(object);
            return;
        }

        if (object->__retains < 0)
        {
#if DEBUG_ARC >= 4
            U_LOG("*** BAD OBJECT: %s #%d (%d retains) ***%s",
                  object->__type->FullName, object->__id, object->__retains, uGetCaller().Ptr());
#else
            U_LOG("*** BAD OBJECT: 0x%llx ***", (uintptr_t)object);
#endif
            U_FATAL();
        }
        else
        {
#if DEBUG_ARC >= 3
            U_LOG("release %s #%d (%d bytes, %d retains)%s",
                  object->__type->FullName, object->__id, object->__size, object->__retains, uGetCaller().Ptr());
#endif
        }
    }
}

static void uAlignField(size_t& offset, size_t align)
{
    U_ASSERT(align);
    size_t rem = offset % align;

    if (rem > 0)
        offset += align - rem;
}

void uBuildMemory(uType* type)
{
    U_ASSERT(type);
    if (!type->IsClosed())
        return;

    size_t strongCount = 0,
           weakCount = 0,
           objOffset = U_IS_OBJECT(type)
               ? sizeof(uObject)
               : 0,
           typeOffset = 0,
           align = 0;

    if (type->Base)
        type->Base->Build();

    for (size_t i = 0; i < type->FieldCount; i++)
    {
        uFieldInfo& f = type->Fields[i];
        U_ASSERT(f.Type);

        if (f.Type != type && !U_IS_OBJECT(f.Type))
            f.Type->Build();

        if ((f.Flags & uFieldFlagsStatic) == 0)
        {
            if (f.Type->Alignment > align)
                align = f.Type->Alignment;

            if ((f.Flags & uFieldFlagsConstrained) == 0)
                objOffset = f.Offset + f.Type->ValueSize;

            if (U_IS_VALUE(f.Type))
            {
                strongCount += f.Type->Refs.StrongCount;
                weakCount += f.Type->Refs.WeakCount;
            }
            else if ((f.Flags & uFieldFlagsWeak) != 0)
                weakCount++;
            else
                strongCount++;
        }
        else if (type->GenericCount)
        {
            uAlignField(typeOffset, f.Type->Alignment);
            f.Offset = typeOffset;
            typeOffset += f.Type->ValueSize;
        }
    }

    size_t size = typeOffset + (strongCount + weakCount) * sizeof(size_t);
    uint8_t* ptr = (uint8_t*)malloc(size); // Leak
    memset(ptr, 0, size);

    type->Refs.Strong = (size_t*)ptr;
    ptr += strongCount * sizeof(size_t);

    type->Refs.Weak = (size_t*)ptr;
    ptr += weakCount * sizeof(size_t);

    for (size_t i = 0; i < type->FieldCount; i++)
    {
        uFieldInfo& f = type->Fields[i];

        if ((f.Flags & uFieldFlagsStatic) == 0)
        {
            if ((f.Flags & uFieldFlagsConstrained) != 0)
            {
                uAlignField(objOffset, f.Type->Alignment);
                f.Flags &= ~uFieldFlagsConstrained;
                f.Offset = objOffset;
                objOffset += f.Type->ValueSize;
            }

            if (U_IS_VALUE(f.Type))
            {
                f.Flags &= ~uFieldFlagsWeak;

                for (size_t j = 0; j < f.Type->Refs.StrongCount; j++)
                    type->Refs.Strong[type->Refs.StrongCount++] = f.Type->Refs.Strong[j] + f.Offset;
                for (size_t j = 0; j < f.Type->Refs.WeakCount; j++)
                    type->Refs.Weak[type->Refs.WeakCount++] = f.Type->Refs.Weak[j] + f.Offset;
            }
            else if ((f.Flags & uFieldFlagsWeak) != 0)
                type->Refs.Weak[type->Refs.WeakCount++] = f.Offset;
            else
                type->Refs.Strong[type->Refs.StrongCount++] = f.Offset;
        }
        else
        {
            if ((f.Flags & uFieldFlagsConstrained) != 0)
                f.Flags &= ~uFieldFlagsConstrained;
            if (type->GenericCount)
                f.Offset += (uintptr_t)ptr;
        }
    }

    if (U_IS_VALUE(type))
    {
        if (align != 0)
        {
            U_ASSERT(type->Alignment == 0 || type->Alignment == align);
            type->Alignment = align;
        }

        if (objOffset != 0)
        {
            uAlignField(objOffset, type->Alignment);
            U_ASSERT(type->ValueSize == objOffset || type->ValueSize == 0);
            type->ValueSize = objOffset;
        }

        type->ObjectSize = sizeof(uObject) + type->ValueSize;
    }
    else
    {
        if (type->Base && type->Base->ObjectSize > objOffset)
            objOffset = type->Base->ObjectSize;

        if (objOffset > type->ObjectSize)
            type->ObjectSize = objOffset;
    }

#ifdef DEBUG_UNSAFE
    uint8_t* layout = (uint8_t*)U_ALLOCA(type->ObjectSize);
    memset(layout, 0, type->ObjectSize);

    for (size_t i = 0; i < type->FieldCount; i++)
    {
        uFieldInfo& f = type->Fields[i];
        if ((f.Flags & uFieldFlagsStatic) == 0)
        {
            for (size_t j = 0; j < f.Type->ValueSize; j++)
            {
                U_ASSERT(f.Offset + j < type->ObjectSize);
                layout[f.Offset + j]++;
            }
        }
    }

    // Verify that no fields are overlapping
    for (size_t i = 0; i < type->ObjectSize; i++)
        U_ASSERT(layout[i] < 2);
#endif
}

void uWeakStateIntercept::SetCallback(uWeakObject* weak, uWeakStateIntercept::Callback cb)
{
    if (!weak || !cb || weak->ZombieState != uWeakObject::Healthy)
        U_FATAL();

    weak->ZombieState = uWeakObject::Infected;
    weak->ZombieStateIntercept = cb;
}

template<class RT, class T0>
static RT uCallWithWeakRefLock(RT(*func)(T0), T0 t0)
{
    uBase::MutexLock lock(_WeakMutex);
    return func(t0);
}

static bool uTryClearWeak_inner(uObject* object)
{
    if (object->__retains != 0)
        return false;

    if (object->__weakptr->ZombieState == uWeakObject::Infected)
    {
        object->__weakptr->ZombieState = uWeakObject::Zombie;
        if (!object->__weakptr->ZombieStateIntercept(uWeakStateIntercept::OnRelease, object))
            return false;
    }

    object->__weakptr->ZombieState = uWeakObject::Dead;
    object->__weakptr->Object = NULL;
    return true;
}

static bool uTryClearWeak(uObject* object)
{
    if (!object->__weakptr)
        return true;

    if (!uCallWithWeakRefLock(&uTryClearWeak_inner, object))
        return false;

    if (object->__weakptr)
    {
        if (uBase::AtomicDecrement(&object->__weakptr->RefCount) == 0)
            free(object->__weakptr);

        object->__weakptr = NULL;
    }

    return true;
}

static void uNewWeak(uObject* object)
{
    if (object->__weakptr)
        return;

    uWeakObject* weak = (uWeakObject*)calloc(1, sizeof(uWeakObject));
    weak->Object = object;
    weak->RefCount = 1;
    weak->ZombieState = uWeakObject::Healthy;
    weak->ZombieStateIntercept = 0;
    object->__weakptr = weak;
}

void uStoreWeak(uWeakObject** address, uObject* object)
{
    if (*address && uBase::AtomicDecrement(&(*address)->RefCount) == 0)
        free(*address);

    if (!object)
    {
        *address = NULL;
        return;
    }

    if (!object->__weakptr)
        uCallWithWeakRefLock(&uNewWeak, object);

    uBase::AtomicIncrement(&object->__weakptr->RefCount);
    *address = object->__weakptr;
}

static uObject* uLoadWeak_inner(uWeakObject* weak)
{
    if (weak->ZombieState == uWeakObject::Zombie)
    {
        if (!weak->ZombieStateIntercept(uWeakStateIntercept::OnLoad, weak->Object))
        {
            weak->ZombieState = uWeakObject::Dead;
            weak->Object = NULL;
            return NULL;
        }

        weak->ZombieState = uWeakObject::Infected;
    }

    uRetain(weak->Object);
    return weak->Object;
}

uObject* uLoadWeak(uWeakObject* weak)
{
    if (!weak)
        return NULL;

    uObject* object = uCallWithWeakRefLock(&uLoadWeak_inner, weak);
    uAutoRelease(object);
    return object;
}

static uObject* uInitObject(uType* type, void* ptr, size_t size)
{
    U_ASSERT(type &&
        type->ObjectSize && type->ValueSize &&
        type->IsClosed() && !U_IS_ABSTRACT(type));

    if (type->State < uTypeStateInitializing &&
        strcmp(type->FullName, "Uno.String") != 0 &&
        strcmp(type->FullName, "Uno.Type") != 0)
        type->Init();

    uObject* object = (uObject*)ptr;
    object->__type = type;
    object->__retains = 1;

#ifdef DEBUG_ARC
    object->__size = size;
    object->__id = type->Definition->ObjectCount++;
#endif

#if DEBUG_ARC >= 2
    U_LOG("alloc %s #%d (%d bytes)%s", type->FullName, object->__id, size, uGetCaller().Ptr());
#endif

#ifdef DEBUG_DUMPS
    uEnterCritical();
    (*_HeapObjects)[object] = true;
    uExitCritical();
#endif
    uAutoRelease(object);
    return object;
}

uObject* uNew(uType* type)
{
    U_ASSERT(type);
    size_t size = type->ObjectSize;
    U_ASSERT(size);
    return uInitObject(type, calloc(1, size), size);
}

uObject* uNew(uType* type, size_t size)
{
    U_ASSERT(type && size);
    return uInitObject(type, calloc(1, size), size);
}

uString* uString::New(int length)
{
    if (!length && ::g::Uno::String::Empty_)
        return ::g::Uno::String::Empty_;

    size_t size = sizeof(uString) + sizeof(uChar) * length + sizeof(uChar);
    uString* string = (uString*)uInitObject(::g::Uno::String_typeof(), calloc(1, size), size);
    string->_ptr = (uChar*)((uint8_t*)string + sizeof(uString));
    string->_length = length;
    return string;
}

#ifdef DEBUG_DUMPS

static void uDumpObject(FILE* fp, uObject* object, const char* label)
{
    fprintf(fp, "\tobject_at_%p [label=\"%s refcount: %d\"]\n",
            object, label, object->__retains);
}

static void uDumpGlobalRef(FILE* fp, uObject** object, const char* label)
{
    fprintf(fp, "\tglobal_ref_at_%p [label=\"%s\" color=\"blue\"]\n",
            object, label);
    if (*object)
        fprintf(fp, "\tglobal_ref_at_%p -> object_at_%p\n", object, *object);
}

static void uDumpStrongRef(FILE* fp, uObject* object, const char *label, uObject* target)
{
    if (target)
        fprintf(fp, "\tobject_at_%p -> object_at_%p [label=\"%s\"]\n", object, target, label);
}

static void uDumpAllStrongRefs(FILE* fp, uObject* object, void* base, uType* type, const char *labelPrefix = "")
{
    do
    {
        const uReflection& reflection = type->Reflection;
        for (size_t i = 0; i < reflection.FieldCount; i++)
        {
            uField* field = reflection.Fields[i];
            const uFieldInfo& fieldInfo = field->Info();

            if ((fieldInfo.Flags & (uFieldFlagsWeak | uFieldFlagsStatic)) != 0)
                continue;

            if (U_IS_OBJECT(fieldInfo.Type))
            {
                uObject* target = *(uObject**)((char *)base + fieldInfo.Offset);
                if (target)
                {
                    const char *fieldName = uAllocCStr(field->Name);
                    char *label = new char[strlen(labelPrefix) + strlen(fieldName) + 1];
                    sprintf(label, "%s%s", labelPrefix, fieldName);
                    uFreeCStr(fieldName);

                    uDumpStrongRef(fp, object, label, target);

                    delete[] label;
                }
            }
            else if (U_IS_VALUE(fieldInfo.Type))
            {
                const char *fieldName = uAllocCStr(field->Name);
                char *newLabelPrefix = new char[strlen(labelPrefix) + strlen(fieldName) + 2];
                sprintf(newLabelPrefix, "%s%s.", labelPrefix, fieldName);
                uFreeCStr(fieldName);

                void* target = (void*)((uint8_t*)base + fieldInfo.Offset);
                uDumpAllStrongRefs(fp, object, target, fieldInfo.Type, newLabelPrefix);

                delete[] newLabelPrefix;
            }
        }

        type = type->Base;
    } while (type);
}

static void uDumpObjectAndStrongRefs(FILE* fp, uObject* object)
{
    uType* type = object->GetType();

    // type-info is not "real" types that we care about in this respect
    if (type == ::g::Uno::Type_typeof())
        return;

    uDumpObject(fp, object, type->FullName);

    switch (type->Type)
    {
    case uTypeTypeClass:
        uDumpAllStrongRefs(fp, object, object, type);
        break;

    case uTypeTypeEnum:
        break;

    case uTypeTypeStruct:
    {
        uint8_t* address = (uint8_t*)object + sizeof(uObject);
        uDumpAllStrongRefs(fp, object, address, type);
        break;
    }
    case uTypeTypeDelegate:
    {
        uDelegate* delegate = (uDelegate*)object;
        uDumpStrongRef(fp, object, "_object", delegate->_object);
        uDumpStrongRef(fp, object, "_prev", delegate->_prev);
        break;
    }
    case uTypeTypeArray:
    {
        uArray* array = (uArray*)object;
        uArrayType* arrayType = (uArrayType*)type;
        uType* elmType = arrayType->ElementType;

        switch (elmType->Type)
        {
        case uTypeTypeClass:
        case uTypeTypeInterface:
        case uTypeTypeDelegate:
        case uTypeTypeArray:
            for (int i = 0; i < array->Length(); ++i)
            {
                uObject* target = ((uObject**)array->Ptr())[i];
                char label[20];
                sprintf(label, "[%d]", i);
                uDumpStrongRef(fp, object, label, target);
            }
            break;

        case uTypeTypeEnum:
            break;

        case uTypeTypeStruct:
            for (int i = 0; i < array->Length(); ++i)
            {
                uint8_t* address = (uint8_t*)array->Ptr() + i * elmType->ValueSize;
                char labelPrefix[20];
                sprintf(labelPrefix, "[%d].", i);
                uDumpAllStrongRefs(fp, object, address, elmType, labelPrefix);
            }
            break;

        default:
            U_FATAL();
        }
        break;
    }

    default:
        U_FATAL();
    }
}

static void uDumpStaticStrongRefs(FILE* fp, uType* type)
{
    if (type == ::g::Uno::Type_typeof())
        return;

    const uReflection& reflection = type->Reflection;
    const size_t fullNameLength = strlen(type->FullName);
    for (size_t i = 0; i < reflection.FieldCount; i++)
    {
        uField* field = reflection.Fields[i];
        const uFieldInfo& fieldInfo = field->Info();
        if (U_IS_OBJECT(fieldInfo.Type) && ((fieldInfo.Flags & uFieldFlagsWeak) == 0) &&
            ((fieldInfo.Flags & uFieldFlagsStatic) != 0))
        {
            uObject* target = field->GetValue(NULL);
            if (target)
            {
                const char *fieldName = uAllocCStr(field->Name);
                char *label = new char[fullNameLength + strlen(fieldName) + 2];
                sprintf(label, "%s.%s", type->FullName, fieldName);
                uDumpGlobalRef(fp, (uObject**)fieldInfo.Address, label);
                uFreeCStr(fieldName);
                delete[] label;
            }
        }
    }
}

void uDumpAllStrongRefs(const char* path)
{
    FILE* fp = fopen(path, "w");
    if (!fp)
        return;

    fprintf(fp, "digraph object_dump {\n");
    uEnterCritical();

    for (int i = _HeapObjects->Begin();
         i != _HeapObjects->End();
         i = _HeapObjects->Next(i))
        uDumpObjectAndStrongRefs(fp, _HeapObjects->GetKey(i));

    uArray* allTypes = uReflection::GetTypes();
    for (int i = 0; i < allTypes->_length; ++i)
        uDumpStaticStrongRefs(fp, allTypes->Unsafe<uType*>(i));

    uExitCritical();
    fprintf(fp, "}\n");
    fclose(fp);
}

#endif // DEBUG_DUMPS
