// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct DiagnosticSubject;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription__SetExclusiveOperation;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.Subscription.SetExclusiveOperation :79
// {
uType* Observable__Subscription__SetExclusiveOperation_typeof();
void Observable__Subscription__SetExclusiveOperation__ctor__fn(Observable__Subscription__SetExclusiveOperation* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject);
void Observable__Subscription__SetExclusiveOperation__New1_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject, Observable__Subscription__SetExclusiveOperation** __retval);
void Observable__Subscription__SetExclusiveOperation__Perform_fn(Observable__Subscription__SetExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context);

struct Observable__Subscription__SetExclusiveOperation : uObject
{
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> Worker;
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong<uObject*> NewValue;
    int Origin;
    uStrong< ::g::Fuse::Scripting::DiagnosticSubject*> DiagnosticSubject;

    void ctor_(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject);
    void Perform(::g::Fuse::Scripting::Context* context);
    static Observable__Subscription__SetExclusiveOperation* New1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject);
};
// }

}}} // ::g::Fuse::Scripting
