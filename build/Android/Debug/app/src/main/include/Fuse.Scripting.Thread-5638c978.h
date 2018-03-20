// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker__MethodClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ThreadWorker.MethodClosure :159
// {
uType* ThreadWorker__MethodClosure_typeof();
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker);
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval);
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval);
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval);

struct ThreadWorker__MethodClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::ScriptMethod*> _m;
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> _worker;
    static uSStrong<uArray*> _emptyArgs_;
    static uSStrong<uArray*>& _emptyArgs() { return _emptyArgs_; }

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker);
    uObject* Callback(uArray* args);
    static uArray* CopyArgs(::g::Fuse::Scripting::Array* args);
    static ThreadWorker__MethodClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker);
};
// }

}}} // ::g::Fuse::Scripting
