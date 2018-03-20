// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.4.2/Visual.FastProperties1.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty1Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty1Link :46
// {
uType* FastProperty1Link_typeof();
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p);

struct FastProperty1Link : uObject
{
    int Property;
    uStrong<FastProperty1Link*> Next;

    void ctor_(int p);
};
// }

}} // ::g::Fuse
