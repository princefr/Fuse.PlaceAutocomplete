// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Observ-14e14110.h>
namespace g{namespace Fuse{namespace Scripting{struct Observable;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__InsertAt;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.InsertAt :589
// {
::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAt_typeof();
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* value);
void Observable__InsertAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval);
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub);
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this);

struct Observable__InsertAt : ::g::Fuse::Scripting::Observable__Operation
{
    int _index;
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value);
    static Observable__InsertAt* New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value);
};
// }

}}} // ::g::Fuse::Scripting
