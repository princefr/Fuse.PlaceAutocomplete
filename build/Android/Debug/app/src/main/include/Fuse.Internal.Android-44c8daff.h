// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Internal/AndroidSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.Android-4d789ec5.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Family;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Family :13
// {
uStructType* AndroidSystemFont__Family_typeof();
void AndroidSystemFont__Family__ctor__fn(AndroidSystemFont__Family* __this, uString* name, uString* language, uString* variant);
void AndroidSystemFont__Family__New1_fn(uString* name, uString* language, uString* variant, AndroidSystemFont__Family* __retval);

struct AndroidSystemFont__Family
{
    uStrong<uString*> Name;
    uStrong<uString*> Language;
    uStrong<uString*> Variant;
    uStrong< ::g::Uno::Collections::List*> Fonts;

    void ctor_(uString* name, uString* language, uString* variant);
};

AndroidSystemFont__Family AndroidSystemFont__Family__New1(uString* name, uString* language, uString* variant);
// }

}}} // ::g::Fuse::Internal
