// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.Observ-ed058f02.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Scripting{struct LazyObservableProperty;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class LazyObservableProperty :7
// {
::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof();
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval);
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval);

struct LazyObservableProperty : ::g::Fuse::Scripting::ObservableProperty
{
    void ctor_1(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    uObject* Get(uArray* args);
    static LazyObservableProperty* New2(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Scripting
