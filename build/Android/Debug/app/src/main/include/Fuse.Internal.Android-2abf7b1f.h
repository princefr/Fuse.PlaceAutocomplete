// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Internal/AndroidSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Alias;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Alias :45
// {
uStructType* AndroidSystemFont__Alias_typeof();
void AndroidSystemFont__Alias__ctor__fn(AndroidSystemFont__Alias* __this, uString* to, int* weight);
void AndroidSystemFont__Alias__New1_fn(uString* to, int* weight, AndroidSystemFont__Alias* __retval);

struct AndroidSystemFont__Alias
{
    uStrong<uString*> To;
    int Weight;

    void ctor_(uString* to, int weight);
};

AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int weight);
// }

}}} // ::g::Fuse::Internal
