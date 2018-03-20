// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ValueMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.IArray.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.ValueMirror.h>
namespace g{namespace Fuse{namespace Scripting{struct ListMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract class ListMirror :38
// {
struct ListMirror_type : ::g::Fuse::Scripting::ValueMirror_type
{
    ::g::Fuse::IArray interface1;
    void(*fp_get_Item)(::g::Fuse::Scripting::ListMirror*, int*, uObject**);
    void(*fp_get_Length)(::g::Fuse::Scripting::ListMirror*, int*);
};

ListMirror_type* ListMirror_typeof();
void ListMirror__ctor_2_fn(ListMirror* __this, uObject* raw);

struct ListMirror : ::g::Fuse::Scripting::ValueMirror
{
    void ctor_2(uObject* raw);
    uObject* Item(int index) { uObject* __retval; return (((ListMirror_type*)__type)->fp_get_Item)(this, &index, &__retval), __retval; }
    int Length() { int __retval; return (((ListMirror_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
