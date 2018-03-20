// This file was generated based on javascript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.PlaceAutocomple.-59877e67.h>
#include <Fuse.PlaceAutocomple.Launch.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[2];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace PlaceAutocomple{

// public sealed class PlaceAutocompleModule :22
// {
static void PlaceAutocompleModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("PlaceAutocompleModule");
    ::STRINGS[1] = uString::Const("Launch");
    ::TYPES[0] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&PlaceAutocompleModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* PlaceAutocompleModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PlaceAutocompleModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.PlaceAutocomple.PlaceAutocompleModule", options);
    type->fp_build_ = PlaceAutocompleModule_build;
    type->fp_ctor_ = (void*)PlaceAutocompleModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public PlaceAutocompleModule() :25
void PlaceAutocompleModule__ctor_2_fn(PlaceAutocompleModule* __this)
{
    __this->ctor_2();
}

// private Uno.Threading.Future<string> Launch(object[] args) :32
void PlaceAutocompleModule__Launch_fn(PlaceAutocompleModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Launch(args);
}

// public PlaceAutocompleModule New() :25
void PlaceAutocompleModule__New2_fn(PlaceAutocompleModule** __retval)
{
    *__retval = PlaceAutocompleModule::New2();
}

uSStrong<PlaceAutocompleModule*> PlaceAutocompleModule::_instance_;

// public PlaceAutocompleModule() [instance] :25
void PlaceAutocompleModule::ctor_2()
{
    ctor_1();

    if (PlaceAutocompleModule::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(PlaceAutocompleModule::_instance_ = this, ::STRINGS[0/*"PlaceAutoco...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[0/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[1/*"Launch"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.FutureFactory<string>*/], (void*)PlaceAutocompleModule__Launch_fn, this), NULL));
}

// private Uno.Threading.Future<string> Launch(object[] args) [instance] :32
::g::Uno::Threading::Future1* PlaceAutocompleModule::Launch(uArray* args)
{
    return ::g::Fuse::PlaceAutocomple::Launch::New5();
}

// public PlaceAutocompleModule New() [static] :25
PlaceAutocompleModule* PlaceAutocompleModule::New2()
{
    PlaceAutocompleModule* obj1 = (PlaceAutocompleModule*)uNew(PlaceAutocompleModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::PlaceAutocomple
