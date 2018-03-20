// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ValueMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.Subscr-9da816f1.h>
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract class ValueMirror :18
// {
struct ValueMirror_type : uType
{
    ::g::Fuse::Scripting::IRaw interface0;
    void(*fp_Unsubscribe)(::g::Fuse::Scripting::ValueMirror*);
};

ValueMirror_type* ValueMirror_typeof();
void ValueMirror__ctor_1_fn(ValueMirror* __this, uObject* raw);
void ValueMirror__get_ReflectedRaw_fn(ValueMirror* __this, uObject** __retval);
void ValueMirror__Unsubscribe1_fn(uObject* obj);

struct ValueMirror : ::g::Fuse::Scripting::SubscriptionSubject
{
    uStrong<uObject*> _raw;

    void ctor_1(uObject* raw);
    uObject* ReflectedRaw();
    void Unsubscribe() { (((ValueMirror_type*)__type)->fp_Unsubscribe)(this); }
    static void Unsubscribe1(uObject* obj);
};
// }

}}} // ::g::Fuse::Scripting
