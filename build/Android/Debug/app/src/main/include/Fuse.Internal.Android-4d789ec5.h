// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.4.2/Internal/AndroidSystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__FontDescriptor;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.FontDescriptor :29
// {
uStructType* AndroidSystemFont__FontDescriptor_typeof();
void AndroidSystemFont__FontDescriptor__ctor__fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int* index, int* style, int* weight);
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int* index, int* style, int* weight, AndroidSystemFont__FontDescriptor* __retval);

struct AndroidSystemFont__FontDescriptor
{
    uStrong<uString*> FilePath;
    int Index;
    int Style;
    int Weight;

    void ctor_(uString* filePath, int index, int style, int weight);
};

AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int index, int style, int weight);
// }

}}} // ::g::Fuse::Internal
