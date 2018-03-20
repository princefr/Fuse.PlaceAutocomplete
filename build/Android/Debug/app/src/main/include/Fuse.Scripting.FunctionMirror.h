// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/FunctionMirror.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Scripting.Diagno-2903b551.h>
#include <Fuse.Scripting.IRaw.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct FunctionMirror;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class FunctionMirror :10
// {
struct FunctionMirror_type : uType
{
    ::g::Fuse::Reactive::IEventHandler interface0;
    ::g::Fuse::Scripting::IRaw interface1;
};

FunctionMirror_type* FunctionMirror_typeof();
void FunctionMirror__ctor_1_fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func);
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e);
void FunctionMirror__New2_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval);
void FunctionMirror__get_ReflectedRaw_fn(FunctionMirror* __this, uObject** __retval);

struct FunctionMirror : ::g::Fuse::Scripting::DiagnosticSubject
{
    uStrong< ::g::Fuse::Scripting::Function*> _func;

    void ctor_1(::g::Fuse::Scripting::Function* func);
    void Dispatch(uObject* e);
    uObject* ReflectedRaw();
    static FunctionMirror* New2(::g::Fuse::Scripting::Function* func);
};
// }

}}} // ::g::Fuse::Scripting
