// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker__PropertyClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ThreadWorker.PropertyClosure :118
// {
uType* ThreadWorker__PropertyClosure_typeof();
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker);
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval);
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval);

struct ThreadWorker__PropertyClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> _worker;
    uStrong< ::g::Fuse::Scripting::ScriptProperty*> _p;

    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker);
    uObject* GetObservable(uArray* args);
    static ThreadWorker__PropertyClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker);
};
// }

}}} // ::g::Fuse::Scripting
