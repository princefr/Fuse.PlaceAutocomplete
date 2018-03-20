// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/GraphicsView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-4da376b6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewHost.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct GraphicsViewBase;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class GraphicsViewBase :10
// {
struct GraphicsViewBase_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IGraphicsView interface2;
    ::g::Fuse::Controls::Native::IViewHost interface3;
};

GraphicsViewBase_type* GraphicsViewBase_typeof();
void GraphicsViewBase__ctor_7_fn(GraphicsViewBase* __this, ::g::Java::Object* handle);
void GraphicsViewBase__BeginDraw_fn(GraphicsViewBase* __this, ::g::Uno::Int2* size, bool* __retval);
void GraphicsViewBase__DestroySurface_fn(GraphicsViewBase* __this);
void GraphicsViewBase__EndDraw_fn(GraphicsViewBase* __this);
void GraphicsViewBase__FuseControlsNativeIViewHostInsert_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child);
void GraphicsViewBase__FuseControlsNativeIViewHostRemove_fn(GraphicsViewBase* __this, ::g::Fuse::Controls::Native::ViewHandle* child);
void GraphicsViewBase__get_GraphicsViewHandle_fn(GraphicsViewBase* __this, ::g::Java::Object** __retval);
void GraphicsViewBase__SetSurface_fn(GraphicsViewBase* __this, ::g::Java::Object* surfaceHandle);

struct GraphicsViewBase : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _graphicsViewHandle;
    uStrong< ::g::Java::Object*> _surfaceHandle;
    void* _eglSurface;
    void* _nativeWindow;

    void ctor_7(::g::Java::Object* handle);
    bool BeginDraw(::g::Uno::Int2 size);
    void DestroySurface();
    void EndDraw();
    ::g::Java::Object* GraphicsViewHandle();
    void SetSurface(::g::Java::Object* surfaceHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
