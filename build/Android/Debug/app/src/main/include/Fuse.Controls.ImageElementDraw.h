// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.2/Image.Visual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Controls{struct ImageElementDraw;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ImageElementDraw :160
// {
uType* ImageElementDraw_typeof();
void ImageElementDraw__ctor__fn(ImageElementDraw* __this);
void ImageElementDraw__Draw_fn(ImageElementDraw* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Float4x4* imageTransform, ::g::Uno::Graphics::Texture2D* tex, int* resampleMode, ::g::Uno::Float4* Color);
void ImageElementDraw__GetSamplerState_fn(ImageElementDraw* __this, int* resampleMode, ::g::Uno::Graphics::SamplerState* __retval);
void ImageElementDraw__init_DrawCalls_fn(ImageElementDraw* __this);
void ImageElementDraw__New1_fn(ImageElementDraw** __retval);

struct ImageElementDraw : uObject
{
    static uSStrong<ImageElementDraw*> Impl_;
    static uSStrong<ImageElementDraw*>& Impl() { return Impl_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_4022489a_7_2_1;
    ::g::Uno::Float4x4 Draw_LocalTransform_4022489a_4_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_4022489a_4_9_3;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_4022489a;

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Float4x4 imageTransform, ::g::Uno::Graphics::Texture2D* tex, int resampleMode, ::g::Uno::Float4 Color);
    ::g::Uno::Graphics::SamplerState GetSamplerState(int resampleMode);
    void init_DrawCalls();
    static ImageElementDraw* New1();
};
// }

}}} // ::g::Fuse::Controls
