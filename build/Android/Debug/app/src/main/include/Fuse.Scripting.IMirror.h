// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract interface IMirror :10
// {
uInterfaceType* IMirror_typeof();

struct IMirror
{
    void(*fp_Reflect)(uObject*, uObject*, uObject**);
    static uObject* Reflect(const uInterface& __this, uObject* obj) { uObject* __retval; return __this.VTable<IMirror>()->fp_Reflect(__this, obj, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
