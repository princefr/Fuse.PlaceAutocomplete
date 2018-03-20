// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription__ReplaceAllExclusiveOperation;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class Observable.Subscription.ReplaceAllExclusiveOperation :129
// {
uType* Observable__Subscription__ReplaceAllExclusiveOperation_typeof();
void Observable__Subscription__ReplaceAllExclusiveOperation__ctor__fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int* origin);
void Observable__Subscription__ReplaceAllExclusiveOperation__New1_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int* origin, Observable__Subscription__ReplaceAllExclusiveOperation** __retval);
void Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context);

struct Observable__Subscription__ReplaceAllExclusiveOperation : uObject
{
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> Worker;
    uStrong< ::g::Fuse::Scripting::Object*> Object;
    uStrong<uArray*> NewValues;
    int Origin;

    void ctor_(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int origin);
    void Perform(::g::Fuse::Scripting::Context* context);
    static Observable__Subscription__ReplaceAllExclusiveOperation* New1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int origin);
};
// }

}}} // ::g::Fuse::Scripting
