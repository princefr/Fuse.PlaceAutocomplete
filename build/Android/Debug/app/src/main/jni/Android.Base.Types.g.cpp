// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Types.Arrays.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.Base.Types.ByteBuffer.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-90b493fe.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Android{
namespace Base{
namespace Types{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Types.uno
// ------------------------------------------------------------------------------

// public static extern class Arrays :129
// {
static void Arrays_build(uType* type)
{
}

uClassType* Arrays_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Arrays", options);
    type->fp_build_ = Arrays_build;
    return type;
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) :173
void Arrays__JavaToUnoByteArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval)
{
    *__retval = Arrays::JavaToUnoByteArray1(*arr_, *len_);
}

// public static extern byte[] JavaToUnoByteArray(Android.Base.Primitives.ujobject arr, long len) [static] :173
uArray* Arrays::JavaToUnoByteArray1(jobject arr_, int64_t len_)
{
    if (!arr_) return NULL;
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    jbyteArray jarr = (jbyteArray)arr_;
    long len = len_;
    uArray* arr = uArray::New(::g::Uno::Byte_typeof()->Array(), len);
    jni->GetByteArrayRegion(jarr, 0, len, (jbyte*)arr->_ptr);
    return arr;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Types.uno
// ------------------------------------------------------------------------------

// public static extern class Bridge :10
// {
static void Bridge_build(uType* type)
{
    ::STRINGS[0] = uString::Const("\n"
        "Tried to find uno class for java type ");
    ::STRINGS[1] = uString::Const("\n"
        "");
    type->SetDependencies(
        ::g::Android::Base::JNI_typeof(),
        ::g::Android::Base::Types::String_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Bridge::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&Bridge::_helperCls_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&Bridge::_registerTypeMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&Bridge::_registerFallbackMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&Bridge::_javaToUnoMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&Bridge::_unoToJavaMid_, uFieldFlagsStatic);
}

uClassType* Bridge_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.Bridge", options);
    type->fp_build_ = Bridge_build;
    return type;
}

// public static extern void Init() :20
void Bridge__Init_fn()
{
    Bridge::Init();
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) :26
void Bridge__JavaToUnoType_fn(jobject* javaObj, uType* fallbackType, bool* typeHasFallbackClass, uType** __retval)
{
    *__retval = Bridge::JavaToUnoType(*javaObj, fallbackType, *typeHasFallbackClass);
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) :22
void Bridge__RegisterUnoType_fn(const char** typeName_, int* nameLen_, uType* typePtr_)
{
    Bridge::RegisterUnoType(*typeName_, *nameLen_, typePtr_);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) :62
void Bridge__SetWrapperType_fn(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject* obj_, uType* typePtr_, bool* typeHasFallbackClass_, bool* resolveType_)
{
    Bridge::SetWrapperType(wrapper_, *obj_, typePtr_, *typeHasFallbackClass_, *resolveType_);
}

bool Bridge::_inited_;
jclass Bridge::_helperCls_;
jmethodID Bridge::_registerTypeMid_;
jmethodID Bridge::_registerFallbackMid_;
jmethodID Bridge::_javaToUnoMid_;
jmethodID Bridge::_unoToJavaMid_;

// public static extern void Init() [static] :20
void Bridge::Init()
{
    if (Bridge::_inited_) { return; }
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    Bridge::_helperCls_ = reinterpret_cast<jclass>(jni->NewGlobalRef(::g::Android::Base::JNI::LoadClass1(::g::Android::Base::JNI::GetEnvPtr(), "com.Bindings.UnoHelper", false)));
    if (!Bridge::_helperCls_) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache class for UnoHelper",35)));
    }
    
    Bridge::_registerTypeMid_ = jni->GetStaticMethodID(Bridge::_helperCls_, "RegisterUnoType", "(Ljava/lang/String;J)V");
    Bridge::_registerFallbackMid_ = jni->GetStaticMethodID(Bridge::_helperCls_, "RegisterUnoFallback", "(Ljava/lang/String;J)V");
    Bridge::_javaToUnoMid_ = jni->GetStaticMethodID(Bridge::_helperCls_, "JavaToUnoType", "(Ljava/lang/Object;JZ)J");
    Bridge::_unoToJavaMid_ = jni->GetStaticMethodID(Bridge::_helperCls_, "UnoToJavaType", "(J)Ljava/lang/Class;");
    
    if ((!Bridge::_registerTypeMid_) || (!Bridge::_registerFallbackMid_) || (!Bridge::_javaToUnoMid_) || (!Bridge::_unoToJavaMid_)) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Could not cache methods for UnoHelper", 37)));
    }
    Bridge::_inited_ = true;
}

// public static Uno.Type JavaToUnoType(Android.Base.Primitives.ujobject javaObj, Uno.Type fallbackType, bool typeHasFallbackClass) [static] :26
uType* Bridge::JavaToUnoType(jobject javaObj, uType* fallbackType, bool typeHasFallbackClass)
{
    if (!Bridge::_inited_)
        Bridge::Init();

    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    uType* result = (uType*)jni->CallStaticLongMethod(Bridge::_helperCls_, Bridge::_javaToUnoMid_, javaObj, (jlong)fallbackType, (jboolean)typeHasFallbackClass);
    ::g::Uno::Exception* excep = ::g::Android::Base::JNI::TryGetException(jni, NULL);

    if (excep != NULL)
    {
        jmethodID grabClass = jni->GetMethodID(jni->FindClass("java/lang/Object"), "getClass", "()Ljava/lang/Class;");
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject cls = jni->CallObjectMethod(javaObj, grabClass);
        jobject estring = (jobject)jni->CallObjectMethod(cls, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);
        excep = ::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uPtr(excep)->Message(), ::STRINGS[0/*"\nTried to ...*/]), x), ::STRINGS[1/*"\n"*/]));
        U_THROW(excep);
    }

    return result;
}

// public static extern void RegisterUnoType(Android.Base.Primitives.ConstCharPtr typeName, int nameLen, Uno.Type typePtr) [static] :22
void Bridge::RegisterUnoType(const char* typeName_, int nameLen_, uType* typePtr_)
{
    if (!Bridge::_inited_) { Bridge::Init(); }
    JNIEnv* jni = ::g::Android::Base::JNI::GetEnvPtr();
    
    char *buf = (char*)malloc(nameLen_ + 1);
    strcpy(buf, typeName_);
    jstring javaTypeName = jni->NewStringUTF(buf);
    
    jni->CallStaticVoidMethod(Bridge::_helperCls_, Bridge::_registerTypeMid_, javaTypeName, ((jlong)typePtr_));
    ::g::Android::Base::JNI::CheckException1(jni);
    jni->DeleteLocalRef(javaTypeName);
    free(buf);
}

// public static extern void SetWrapperType(Android.Base.Wrappers.JWrapper wrapper, Android.Base.Primitives.ujobject obj, Uno.Type typePtr, bool typeHasFallbackClass, bool resolveType) [static] :62
void Bridge::SetWrapperType(::g::Android::Base::Wrappers::JWrapper* wrapper_, jobject obj_, uType* typePtr_, bool typeHasFallbackClass_, bool resolveType_)
{
    if (!wrapper_) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Trying to set type of null object",33)));
    } else if ((!obj_) && resolveType_) {
        U_THROW(::g::Uno::Exception::New2(uString::Utf8("Have requested to infer type from jobject but jobject is null",61)));
    } else {
        if (typePtr_) {
            wrapper_->__type = typePtr_;
        }
        if (obj_ && resolveType_) {
            wrapper_->__type = ((uType*)Bridge::JavaToUnoType(obj_, wrapper_->__type, typeHasFallbackClass_));
        }
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Types.uno
// ------------------------------------------------------------------------------

// public static extern class ByteBuffer :66
// {
static void ByteBuffer_build(uType* type)
{
}

uClassType* ByteBuffer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.ByteBuffer", options);
    type->fp_build_ = ByteBuffer_build;
    return type;
}

// public static extern Android.Base.Primitives.ujobject NewDirectByteBuffer(byte[] data) :69
void ByteBuffer__NewDirectByteBuffer_fn(uArray* data_, jobject* __retval)
{
    *__retval = ByteBuffer::NewDirectByteBuffer(data_);
}

// public static extern bool ValidDirectByteBuffer(Android.Base.Primitives.ujobject directByteBuffer) :78
void ByteBuffer__ValidDirectByteBuffer_fn(jobject* directByteBuffer_, bool* __retval)
{
    *__retval = ByteBuffer::ValidDirectByteBuffer(*directByteBuffer_);
}

// public static extern Android.Base.Primitives.ujobject NewDirectByteBuffer(byte[] data) [static] :69
jobject ByteBuffer::NewDirectByteBuffer(uArray* data_)
{
    if (!data_) return NULL;
    return ::g::Android::Base::JNI::GetEnvPtr()->NewDirectByteBuffer(data_->Ptr(), (jlong)data_->Length());
}

// public static extern bool ValidDirectByteBuffer(Android.Base.Primitives.ujobject directByteBuffer) [static] :78
bool ByteBuffer::ValidDirectByteBuffer(jobject directByteBuffer_)
{
    return (::g::Android::Base::JNI::GetEnvPtr()->GetDirectBufferAddress(directByteBuffer_) != NULL);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Types.uno
// ------------------------------------------------------------------------------

// public static extern class String :96
// {
static void String_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    type->SetDependencies(
        ::g::Android::Base::JNI_typeof(),
        ::g::Android::Base::Primitives::ujobject_typeof());
}

uClassType* String_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.Types.String", options);
    type->fp_build_ = String_build;
    return type;
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) :123
void String__JavaToUno_fn(JNIEnv** jni_, jobject* jstr_, uString** __retval)
{
    *__retval = String::JavaToUno(*jni_, *jstr_);
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) :106
void String__JavaToUno1_fn(jobject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno1(*jstr);
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) :98
void String__JavaToUno2_fn(uObject* jstr, uString** __retval)
{
    *__retval = String::JavaToUno2(jstr);
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) :125
void String__UnoToJava_fn(JNIEnv** jni_, uString* str_, jobject* __retval)
{
    *__retval = String::UnoToJava(*jni_, str_);
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) :114
void String__UnoToJava1_fn(uString* str, jobject* __retval)
{
    *__retval = String::UnoToJava1(str);
}

// public static extern string JavaToUno(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject jstr) [static] :123
uString* String::JavaToUno(JNIEnv* jni_, jobject jstr_)
{
    if (!jstr_) { return NULL; }
    jobject str = jni_->NewLocalRef(jstr_);
    const jchar* raw =  jni_->GetStringChars((jstring)str, NULL);
    int len = jni_->GetStringLength((jstring)str);
    int size = len * sizeof(jchar);
    uString* result = uString::New(len);
    memcpy(result->_ptr, (void*)raw, size);
    jni_->ReleaseStringChars((jstring)str, raw);
    jni_->DeleteLocalRef(str);
    return result;
}

// public static string JavaToUno(Android.Base.Primitives.ujobject jstr) [static] :106
uString* String::JavaToUno1(jobject jstr)
{
    if (::g::Android::Base::Primitives::ujobject::op_Inequality(jstr, ::g::Android::Base::Primitives::ujobject::Null()))
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), jstr);
    else
        return NULL;
}

// public static string JavaToUno(Android.Base.Wrappers.IJWrapper jstr) [static] :98
uString* String::JavaToUno2(uObject* jstr)
{
    if (jstr != NULL)
        return String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(jstr), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/])));
    else
        return NULL;
}

// public static extern Android.Base.Primitives.ujobject UnoToJava(Android.Base.Primitives.JNIEnvPtr jni, string str) [static] :125
jobject String::UnoToJava(JNIEnv* jni_, uString* str_)
{
    return (jobject)(jni_->NewString(str_->_ptr, str_->_length));
}

// public static Android.Base.Primitives.ujobject UnoToJava(string str) [static] :114
jobject String::UnoToJava1(uString* str)
{
    if (::g::Uno::String::op_Inequality(str, NULL))
        return String::UnoToJava(::g::Android::Base::JNI::GetEnvPtr(), str);
    else
        return ::g::Android::Base::Primitives::ujobject::Null();
}
// }

}}}} // ::g::Android::Base::Types
