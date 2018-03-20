// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Scripting.Diagno-2903b551.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class Observable.Subscription :51
// {
struct Observable__Subscription_type : uType
{
    ::g::Fuse::Reactive::ISubscription interface0;
    ::g::Uno::IDisposable interface1;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Observable* om, uObject* obs);
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__New2_fn(::g::Fuse::Scripting::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval);
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value);
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue);
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval);

struct Observable__Subscription : ::g::Fuse::Scripting::DiagnosticSubject
{
    static int _counter_;
    static int& _counter() { return _counter_; }
    int _origin;
    uStrong< ::g::Fuse::Scripting::Observable*> _om;
    uStrong<uObject*> _obs;
    bool _Removed;

    void ctor_1(::g::Fuse::Scripting::Observable* om, uObject* obs);
    void ClearExclusive();
    void Dispose();
    uObject* Observer();
    bool Removed();
    void Removed(bool value);
    void ReplaceAllExclusive(uObject* newValues);
    void SetExclusive(uObject* newValue);
    bool ShouldSend(int origin);
    static Observable__Subscription* New2(::g::Fuse::Scripting::Observable* om, uObject* obs);
};
// }

}}} // ::g::Fuse::Scripting
