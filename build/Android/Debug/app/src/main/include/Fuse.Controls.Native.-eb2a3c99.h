// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/CanvasViewGroup.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Drawing.INativeS-e8aff21d.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct CanvasViewGroup;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct NativeSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class CanvasViewGroup :9
// {
struct CanvasViewGroup_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Drawing::INativeSurfaceOwner interface1;
};

CanvasViewGroup_type* CanvasViewGroup_typeof();
void CanvasViewGroup__ctor_4_fn(CanvasViewGroup* __this, uObject* surfaceDrawable, float* pixelsPerPoint);
void CanvasViewGroup__Dispose_fn(CanvasViewGroup* __this);
void CanvasViewGroup__FuseDrawingINativeSurfaceOwnerGetSurface_fn(CanvasViewGroup* __this, ::g::Fuse::Drawing::Surface** __retval);
void CanvasViewGroup__InstallDrawlistener_fn(CanvasViewGroup* __this, ::g::Java::Object* handle, uDelegate* callback);
void CanvasViewGroup__Instantiate_fn(::g::Java::Object** __retval);
void CanvasViewGroup__New5_fn(uObject* surfaceDrawable, float* pixelsPerPoint, CanvasViewGroup** __retval);
void CanvasViewGroup__OnDraw_fn(CanvasViewGroup* __this, ::g::Java::Object* canvas);

struct CanvasViewGroup : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong<uObject*> _surfaceDrawable;
    float _pixelsPerPoint;
    uStrong< ::g::Fuse::Drawing::NativeSurface*> _nativeSurface;

    void ctor_4(uObject* surfaceDrawable, float pixelsPerPoint);
    void InstallDrawlistener(::g::Java::Object* handle, uDelegate* callback);
    void OnDraw(::g::Java::Object* canvas);
    static ::g::Java::Object* Instantiate();
    static CanvasViewGroup* New5(uObject* surfaceDrawable, float pixelsPerPoint);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
