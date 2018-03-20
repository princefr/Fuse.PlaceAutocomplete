// This file was generated based on javascript.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace PlaceAutocomple{struct PlaceAutocompleModule;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace PlaceAutocomple{

// public sealed class PlaceAutocompleModule :22
// {
::g::Fuse::Scripting::NativeModule_type* PlaceAutocompleModule_typeof();
void PlaceAutocompleModule__ctor_2_fn(PlaceAutocompleModule* __this);
void PlaceAutocompleModule__Launch_fn(PlaceAutocompleModule* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void PlaceAutocompleModule__New2_fn(PlaceAutocompleModule** __retval);

struct PlaceAutocompleModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<PlaceAutocompleModule*> _instance_;
    static uSStrong<PlaceAutocompleModule*>& _instance() { return _instance_; }

    void ctor_2();
    ::g::Uno::Threading::Future1* Launch(uArray* args);
    static PlaceAutocompleModule* New2();
};
// }

}}} // ::g::Fuse::PlaceAutocomple
