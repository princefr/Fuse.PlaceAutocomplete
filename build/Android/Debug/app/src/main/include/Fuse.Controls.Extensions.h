// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.4.2/TreeRenderer.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{struct Extensions;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static extern class Extensions :236
// {
uClassType* Extensions_typeof();
void Extensions__GetColor_fn(::g::Fuse::Drawing::Brush* brush, int* __retval);

struct Extensions : uObject
{
    static int GetColor(::g::Fuse::Drawing::Brush* brush);
};
// }

}}} // ::g::Fuse::Controls
