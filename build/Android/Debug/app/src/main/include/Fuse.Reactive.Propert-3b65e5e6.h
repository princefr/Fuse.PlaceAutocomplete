// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.2/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IWriteable.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct Property;}}}
namespace g{namespace Fuse{namespace Reactive{struct Property__Subscription;}}}
namespace g{namespace Uno{namespace UX{struct PropertyAccessor;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Property.Subscription :25
// {
struct Property__Subscription_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
    ::g::Fuse::Reactive::IWriteable interface1;
    ::g::Uno::IDisposable interface2;
};

Property__Subscription_type* Property__Subscription_typeof();
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener);
void Property__Subscription__Dispose_fn(Property__Subscription* __this);
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval);
void Property__Subscription__PushValue_fn(Property__Subscription* __this);
void Property__Subscription__TrySetExclusive_fn(Property__Subscription* __this, uObject* value, bool* __retval);
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct Property__Subscription : uObject
{
    uStrong< ::g::Fuse::Reactive::Property*> _prop;
    uStrong< ::g::Uno::UX::PropertyObject*> _object;
    uStrong< ::g::Uno::UX::PropertyAccessor*> _accessor;
    uStrong<uObject*> _listener;

    void ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener);
    void Dispose();
    void PushValue();
    bool TrySetExclusive(uObject* value);
    static Property__Subscription* New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
