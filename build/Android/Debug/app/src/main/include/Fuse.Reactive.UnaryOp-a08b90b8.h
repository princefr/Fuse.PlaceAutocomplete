// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.2/UnaryOperator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct UnaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct UnaryOperator__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// protected sealed class UnaryOperator.Subscription :31
// {
::g::Fuse::Reactive::InnerListener_type* UnaryOperator__Subscription_typeof();
void UnaryOperator__Subscription__ctor_1_fn(UnaryOperator__Subscription* __this, ::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener);
void UnaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener, UnaryOperator__Subscription** __retval);
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this);
void UnaryOperator__Subscription__Init_fn(UnaryOperator__Subscription* __this, uObject* context);
void UnaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener, UnaryOperator__Subscription** __retval);
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value);
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value);

struct UnaryOperator__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong< ::g::Fuse::Reactive::UnaryOperator*> _uo;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _operandSub;

    void ctor_1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener);
    void Init(uObject* context);
    void OnNewOperand(uObject* value);
    static UnaryOperator__Subscription* Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener);
    static UnaryOperator__Subscription* New1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
