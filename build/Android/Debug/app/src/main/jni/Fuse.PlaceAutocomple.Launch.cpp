// This file was generated based on AndroidImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.PlaceAutocomple.Launch.h>
#include <jni.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Exception.h>
#include <Uno/JNIHelper.h>

namespace g{
namespace Fuse{
namespace PlaceAutocomple{

// internal sealed extern class Launch :23
// {
static void Launch_build(uType* type)
{
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* Launch_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Launch);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.PlaceAutocomple.Launch", options);
    type->fp_build_ = Launch_build;
    type->fp_ctor_ = (void*)Launch__New5_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public Launch() :27
void Launch__ctor_7_fn(Launch* __this)
{
    __this->ctor_7();
}

// public void Init() :34
void Launch__Init_fn(Launch* __this)
{
    __this->Init();
}

// public Launch New() :27
void Launch__New5_fn(Launch** __retval)
{
    *__retval = Launch::New5();
}

// private void Reject(string reason) :81
void Launch__Reject1_fn(Launch* __this, uString* reason)
{
    __this->Reject1(reason);
}

// private void Resolve(string message) :76
void Launch__Resolve1_fn(Launch* __this, uString* message)
{
    __this->Resolve1(message);
}

// public Launch() [instance] :27
void Launch::ctor_7()
{
    ctor_3();
    Init();
}

// public void Init() [instance] :34
void Launch::Init()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Init383", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void Reject(string reason) [instance] :81
void Launch::Reject1(uString* reason)
{
    Reject(::g::Uno::Exception::New2(reason));
}

// private void Resolve(string message) [instance] :76
void Launch::Resolve1(uString* message)
{
    ::g::Uno::Threading::Promise__Resolve_fn(this, message);
}

// public Launch New() [static] :27
Launch* Launch::New5()
{
    Launch* obj1 = (Launch*)uNew(Launch_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}} // ::g::Fuse::PlaceAutocomple
