// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observ-14e14110.h>
namespace g{namespace Fuse{namespace Scripting{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__InsertAll;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.InsertAll :617
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof();
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items);
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items, Observable__InsertAll** __retval);
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub);
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this);

struct Observable__InsertAll : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;
    uStrong< ::g::Fuse::Scripting::ArrayMirror*> _items;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items);
    static Observable__InsertAll* New1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items);
};
// }

}}} // ::g::Fuse::Scripting
