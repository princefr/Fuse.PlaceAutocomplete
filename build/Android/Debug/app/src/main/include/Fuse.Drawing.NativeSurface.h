// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.4.2/Android/NativeSurface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.AndroidSurface.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Drawing{struct NativeSurface;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class NativeSurface :41
// {
::g::Fuse::Drawing::AndroidSurface_type* NativeSurface_typeof();
void NativeSurface__ctor_2_fn(NativeSurface* __this);
void NativeSurface__Begin_fn(NativeSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint);
void NativeSurface__Begin1_fn(NativeSurface* __this, ::g::Java::Object* canvas, float* pixelsPerPoint);
void NativeSurface__DummyBitmap_fn(::g::Java::Object** __retval);
void NativeSurface__End_fn(NativeSurface* __this);
void NativeSurface__New1_fn(NativeSurface** __retval);
void NativeSurface__PrepareImageFillImpl_fn(NativeSurface* __this, ::g::Fuse::Drawing::ImageFill* img, ::g::Java::Object** __retval);
void NativeSurface__SetCanvas_fn(::g::Java::Object* context, ::g::Java::Object* canvas);
void NativeSurface__VerifyBegun_fn(NativeSurface* __this);

struct NativeSurface : ::g::Fuse::Drawing::AndroidSurface
{
    uStrong< ::g::Java::Object*> _canvas;

    void ctor_2();
    void Begin1(::g::Java::Object* canvas, float pixelsPerPoint);
    static ::g::Java::Object* DummyBitmap();
    static NativeSurface* New1();
    static void SetCanvas(::g::Java::Object* context, ::g::Java::Object* canvas);
};
// }

}}} // ::g::Fuse::Drawing
