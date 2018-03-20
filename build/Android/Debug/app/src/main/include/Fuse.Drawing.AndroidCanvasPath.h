// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.4.2/Android/Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.SurfacePath.h>
namespace g{namespace Fuse{namespace Drawing{struct AndroidCanvasPath;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class AndroidCanvasPath :14
// {
uType* AndroidCanvasPath_typeof();
void AndroidCanvasPath__ctor_1_fn(AndroidCanvasPath* __this);
void AndroidCanvasPath__New1_fn(AndroidCanvasPath** __retval);

struct AndroidCanvasPath : ::g::Fuse::Drawing::SurfacePath
{
    uStrong< ::g::Java::Object*> Path;
    int FillRule;

    void ctor_1();
    static AndroidCanvasPath* New1();
};
// }

}}} // ::g::Fuse::Drawing
