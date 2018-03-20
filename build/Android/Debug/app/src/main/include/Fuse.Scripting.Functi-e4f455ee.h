// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/FunctionMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct FunctionMirror;}}}
namespace g{namespace Fuse{namespace Scripting{struct FunctionMirror__CallClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class FunctionMirror.CallClosure :22
// {
uType* FunctionMirror__CallClosure_typeof();
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::FunctionMirror* f, uObject* e);
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::Context* context);
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Scripting::FunctionMirror* f, uObject* e, FunctionMirror__CallClosure** __retval);

struct FunctionMirror__CallClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::FunctionMirror*> _f;
    uStrong<uObject*> _e;

    void ctor_(::g::Fuse::Scripting::FunctionMirror* f, uObject* e);
    void Call(::g::Fuse::Scripting::Context* context);
    static FunctionMirror__CallClosure* New1(::g::Fuse::Scripting::FunctionMirror* f, uObject* e);
};
// }

}}} // ::g::Fuse::Scripting
