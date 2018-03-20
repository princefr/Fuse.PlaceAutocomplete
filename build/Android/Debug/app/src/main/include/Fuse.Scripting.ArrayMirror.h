// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ArrayMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ListMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class ArrayMirror :6
// {
::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof();
void ArrayMirror__ctor_4_fn(ArrayMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval);
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval);
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval);
void ArrayMirror__New2_fn(uObject* mirror, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval);
void ArrayMirror__Set_fn(ArrayMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this);

struct ArrayMirror : ::g::Fuse::Scripting::ListMirror
{
    uStrong< ::g::Uno::Collections::List*> _items;

    void ctor_4(uObject* mirror, ::g::Fuse::Scripting::Array* arr);
    uArray* ItemsReadonly();
    void Set(uObject* mirror, ::g::Fuse::Scripting::Array* arr);
    static ArrayMirror* New2(uObject* mirror, ::g::Fuse::Scripting::Array* arr);
};
// }

}}} // ::g::Fuse::Scripting
