// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRangeViewHost :60
// {
uInterfaceType* IRangeViewHost_typeof();

struct IRangeViewHost
{
    void(*fp_OnProgressChanged)(uObject*, double*);
    void(*fp_get_RelativeUserStep)(uObject*, double*);
    static void OnProgressChanged(const uInterface& __this, double newProgress) { __this.VTable<IRangeViewHost>()->fp_OnProgressChanged(__this, &newProgress); }
    static double RelativeUserStep(const uInterface& __this) { double __retval; return __this.VTable<IRangeViewHost>()->fp_get_RelativeUserStep(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Controls::Native
