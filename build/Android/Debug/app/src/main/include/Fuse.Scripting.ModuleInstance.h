// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ModuleInstance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Diagno-2903b551.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleInstance;}}}
namespace g{namespace Fuse{namespace Scripting{struct ModuleResult;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class ModuleInstance :7
// {
uType* ModuleInstance_typeof();
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
void ModuleInstance__Dispose_fn(ModuleInstance* __this);
void ModuleInstance__Evaluate_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context);
void ModuleInstance__EvaluateExports_fn(ModuleInstance* __this, uObject** __retval);
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this);
void ModuleInstance__New2_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval);
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this);

struct ModuleInstance : ::g::Fuse::Scripting::DiagnosticSubject
{
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> _worker;
    uStrong< ::g::Fuse::Reactive::JavaScript*> _js;
    uStrong< ::g::Uno::Collections::Dictionary*> _deps;
    uStrong<uObject*> _dc;
    uStrong< ::g::Fuse::Scripting::ModuleResult*> _moduleResult;
    static uSStrong<uObject*> _resetHookMutex_;
    static uSStrong<uObject*>& _resetHookMutex() { return _resetHookMutex_; }
    uStrong< ::g::Fuse::Scripting::DiagnosticSubject*> _diagnostic1;

    void ctor_1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
    void Dispose();
    void Evaluate(::g::Fuse::Scripting::Context* context);
    uObject* EvaluateExports();
    void EvaluateModule();
    void SetDataContext();
    static ModuleInstance* New2(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
};
// }

}}} // ::g::Fuse::Scripting
