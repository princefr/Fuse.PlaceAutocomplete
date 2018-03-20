// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.ActivityResultCallback.h>
#include <Android.ActivityUtils.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[3];

namespace g{
namespace Android{

// /Users/princejackes/Library/Application Support/Fusetools/Packages/Android.ActivityUtils/1.4.2/ActivityUtils.uno
// ----------------------------------------------------------------------------------------------------------------

// public extern delegate void ActivityResultCallback(int resultCode, Java.Object intent, object info) :9
uDelegateType* ActivityResultCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Android.ActivityResultCallback", 3, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Int_typeof(),
        ::g::Java::Object_typeof(),
        uObject_typeof());
    return type;
}

// /Users/princejackes/Library/Application Support/Fusetools/Packages/Android.ActivityUtils/1.4.2/ActivityUtils.uno
// ----------------------------------------------------------------------------------------------------------------

// public static extern class ActivityUtils :13
// {
// static ActivityUtils() :21
static void ActivityUtils__cctor__fn(uType* __type)
{
    if (ActivityUtils::_intentListener_ == NULL)
    {
        ActivityUtils::_pendingResults_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<int, Android.ActivityResultCallback>*/]));
        ActivityUtils::_pendingInfos_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<int, object>*/]));
        ActivityUtils::_intentListener_ = ActivityUtils::Init();
    }
}

static void ActivityUtils_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Android::ActivityResultCallback_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Java::Object_typeof(), NULL);
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&ActivityUtils::_intentListener_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<int, Android.ActivityResultCallback>*/], (uintptr_t)&ActivityUtils::_pendingResults_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Collections.Dictionary<int, object>*/], (uintptr_t)&ActivityUtils::_pendingInfos_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Action<int, int, Java.Object>*/], (uintptr_t)&ActivityUtils::Results1_, uFieldFlagsStatic);
}

uClassType* ActivityUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.ActivityUtils", options);
    type->fp_build_ = ActivityUtils_build;
    type->fp_cctor_ = ActivityUtils__cctor__fn;
    return type;
}

// private static Java.Object Init() :32
void ActivityUtils__Init_fn(::g::Java::Object** __retval)
{
    *__retval = ActivityUtils::Init();
}

// private static bool OnReceived(int requestCode, int resultCode, Java.Object data) :76
void ActivityUtils__OnReceived_fn(int* requestCode, int* resultCode, ::g::Java::Object* data, bool* __retval)
{
    *__retval = ActivityUtils::OnReceived(*requestCode, *resultCode, data);
}

// public static generated void add_Results(Uno.Action<int, int, Java.Object> value) :19
void ActivityUtils__add_Results_fn(uDelegate* value)
{
    ActivityUtils::add_Results(value);
}

// public static generated void remove_Results(Uno.Action<int, int, Java.Object> value) :19
void ActivityUtils__remove_Results_fn(uDelegate* value)
{
    ActivityUtils::remove_Results(value);
}

uSStrong< ::g::Java::Object*> ActivityUtils::_intentListener_;
uSStrong< ::g::Uno::Collections::Dictionary*> ActivityUtils::_pendingResults_;
uSStrong< ::g::Uno::Collections::Dictionary*> ActivityUtils::_pendingInfos_;
uSStrong<uDelegate*> ActivityUtils::Results1_;

// private static Java.Object Init() [static] :32
::g::Java::Object* ActivityUtils::Init()
{
    ActivityUtils_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Init64", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static bool OnReceived(int requestCode, int resultCode, Java.Object data) [static] :76
bool ActivityUtils::OnReceived(int requestCode, int resultCode, ::g::Java::Object* data)
{
    ActivityUtils_typeof()->Init();
    bool ret1;
    uDelegate* ret2;
    bool ret3;
    uObject* ret4;
    bool ret5;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ActivityUtils::_pendingResults_), uCRef<int>(requestCode), &ret1), ret1))
    {
        uDelegate* callback = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ActivityUtils::_pendingResults_), uCRef<int>(requestCode), &ret2), ret2);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ActivityUtils::_pendingResults_), uCRef<int>(requestCode), &ret3);
        uObject* info = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ActivityUtils::_pendingInfos_), uCRef<int>(requestCode), &ret4), ret4);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ActivityUtils::_pendingInfos_), uCRef<int>(requestCode), &ret5);
        uPtr(callback)->Invoke(3, uCRef<int>(resultCode), data, info);
    }

    uDelegate* handler = ActivityUtils::Results1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(3, uCRef<int>(requestCode), uCRef<int>(resultCode), data);

    return false;
}

// public static generated void add_Results(Uno.Action<int, int, Java.Object> value) [static] :19
void ActivityUtils::add_Results(uDelegate* value)
{
    ActivityUtils_typeof()->Init();
    ActivityUtils::Results1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActivityUtils::Results1_, value), ::TYPES[2/*Uno.Action<int, int, Java.Object>*/]);
}

// public static generated void remove_Results(Uno.Action<int, int, Java.Object> value) [static] :19
void ActivityUtils::remove_Results(uDelegate* value)
{
    ActivityUtils_typeof()->Init();
    ActivityUtils::Results1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActivityUtils::Results1_, value), ::TYPES[2/*Uno.Action<int, int, Java.Object>*/]);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Bootstrapper.uno
// -------------------------------------------------------------------------------------

// internal static extern class Bootstrapper :9
// {
static void Bootstrapper_build(uType* type)
{
}

uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Bootstrapper", options);
    type->fp_build_ = Bootstrapper_build;
    return type;
}

// public static void _RegisterTypes() :11
void Bootstrapper___RegisterTypes_fn()
{
    Bootstrapper::_RegisterTypes();
}

// public static void _RegisterTypes() [static] :11
void Bootstrapper::_RegisterTypes()
{
    ::BootstrapperImpl();
}
// }

}} // ::g::Android
