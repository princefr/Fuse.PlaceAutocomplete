// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Caching/Cache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-476e2792.h>
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct CacheHelper;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class CacheHelper :212
// {
uType* CacheHelper_typeof();
void CacheHelper__ctor__fn(CacheHelper* __this);
void CacheHelper__Blit_fn(CacheHelper* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float* opacity);
void CacheHelper__init_DrawCalls_fn(CacheHelper* __this);
void CacheHelper__New1_fn(CacheHelper** __retval);

struct CacheHelper : uObject
{
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Blit_Coord_be52273c_1_1_1;
    uStrong<uArray*> Blit_Vertices_be52273c_1_0_7;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_be52273c;

    void ctor_();
    void Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Cache* cache, float opacity);
    void init_DrawCalls();
    static CacheHelper* New1();
};
// }

}}} // ::g::Fuse::Elements
