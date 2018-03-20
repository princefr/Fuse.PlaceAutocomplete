// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/V8/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Context;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Marshaller__CallbackWrapper;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// private sealed class Marshaller.CallbackWrapper :227
// {
uType* Marshaller__CallbackWrapper_typeof();
void Marshaller__CallbackWrapper__ctor__fn(Marshaller__CallbackWrapper* __this, ::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
void Marshaller__CallbackWrapper__Call_fn(Marshaller__CallbackWrapper* __this, uArray* args, ::JSValue** error, ::JSValue** __retval);
void Marshaller__CallbackWrapper__New1_fn(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback, Marshaller__CallbackWrapper** __retval);

struct Marshaller__CallbackWrapper : uObject
{
    uStrong< ::g::Fuse::Scripting::V8::Context*> _context;
    uStrong<uDelegate*> _callback;

    void ctor_(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
    ::JSValue* Call(uArray* args, ::JSValue** error);
    static Marshaller__CallbackWrapper* New1(::g::Fuse::Scripting::V8::Context* context, uDelegate* callback);
};
// }

}}}} // ::g::Fuse::Scripting::V8
