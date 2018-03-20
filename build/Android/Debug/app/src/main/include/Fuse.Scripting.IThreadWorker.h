// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Context.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof();

struct IThreadWorker
{
    void(*fp_get_Dispatcher)(uObject*, uObject**);
    void(*fp_Invoke)(uObject*, uDelegate*);
    void(*fp_Unwrap)(uObject*, uObject*, uObject**);
    void(*fp_Wrap)(uObject*, uObject*, uObject**);
    static uObject* Dispatcher(const uInterface& __this) { uObject* __retval; return __this.VTable<IThreadWorker>()->fp_get_Dispatcher(__this, &__retval), __retval; }
    static void Invoke(const uInterface& __this, uDelegate* action) { __this.VTable<IThreadWorker>()->fp_Invoke(__this, action); }
    static uObject* Unwrap(const uInterface& __this, uObject* obj) { uObject* __retval; return __this.VTable<IThreadWorker>()->fp_Unwrap(__this, obj, &__retval), __retval; }
    static uObject* Wrap(const uInterface& __this, uObject* obj) { uObject* __retval; return __this.VTable<IThreadWorker>()->fp_Wrap(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
