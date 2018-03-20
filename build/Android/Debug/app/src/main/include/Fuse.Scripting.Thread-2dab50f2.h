// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptReadonlyProperty;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker__ReadonlyPropertyClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ThreadWorker.ReadonlyPropertyClosure :96
// {
uType* ThreadWorker__ReadonlyPropertyClosure_typeof();
void ThreadWorker__ReadonlyPropertyClosure__ctor__fn(ThreadWorker__ReadonlyPropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker);
void ThreadWorker__ReadonlyPropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__ReadonlyPropertyClosure** __retval);

struct ThreadWorker__ReadonlyPropertyClosure : uObject
{
    void ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker);
    static ThreadWorker__ReadonlyPropertyClosure* New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker);
};
// }

}}} // ::g::Fuse::Scripting
