// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObjectMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IObject.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ValueMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObjectMirror;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class ObjectMirror :6
// {
struct ObjectMirror_type : ::g::Fuse::Scripting::ValueMirror_type
{
    ::g::Fuse::IObject interface1;
};

ObjectMirror_type* ObjectMirror_typeof();
void ObjectMirror__ctor_2_fn(ObjectMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval);
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval);
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval);
void ObjectMirror__New1_fn(uObject* mirror, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval);
void ObjectMirror__Set_fn(ObjectMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this);

struct ObjectMirror : ::g::Fuse::Scripting::ValueMirror
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;

    void ctor_2(uObject* mirror, ::g::Fuse::Scripting::Object* obj);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    uArray* Keys();
    void Set(uObject* mirror, ::g::Fuse::Scripting::Object* obj);
    static ObjectMirror* New1(uObject* mirror, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Scripting
