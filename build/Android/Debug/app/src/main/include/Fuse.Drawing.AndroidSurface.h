// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.4.2/Android/Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.Surface.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct AndroidSurface;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal abstract extern class AndroidSurface :49
// {
struct AndroidSurface_type : ::g::Fuse::Drawing::Surface_type
{
    void(*fp_PrepareImageFillImpl)(::g::Fuse::Drawing::AndroidSurface*, ::g::Fuse::Drawing::ImageFill*, ::g::Java::Object**);
    void(*fp_VerifyBegun)(::g::Fuse::Drawing::AndroidSurface*);
};

AndroidSurface_type* AndroidSurface_typeof();
void AndroidSurface__ctor_1_fn(AndroidSurface* __this);
void AndroidSurface__AddSegments_fn(AndroidSurface* __this, ::g::Java::Object* path, uObject* segments, ::g::Uno::Float2* prevPoint, ::g::Uno::Float2* __retval);
void AndroidSurface__Begin_fn(AndroidSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint);
void AndroidSurface__ConcatTransform_fn(::g::Java::Object* cp, ::g::Java::Object* m);
void AndroidSurface__CreateFillPaint_fn(::g::Java::Object** __retval);
void AndroidSurface__CreateLinearGradient_fn(uArray* colors, uArray* stops, ::g::Java::Object** __retval);
void AndroidSurface__CreatePath_fn(AndroidSurface* __this, uObject* segments, int* fillRule, ::g::Fuse::Drawing::SurfacePath** __retval);
void AndroidSurface__CreateStrokedPaint_fn(float* width, int* fjoin, int* fcap, float* miterLimit, ::g::Java::Object** __retval);
void AndroidSurface__Dispose_fn(AndroidSurface* __this);
void AndroidSurface__DisposePath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path);
void AndroidSurface__DrawPath_fn(AndroidSurface* __this, ::g::Java::Object* path, ::g::Fuse::Drawing::Brush* fill, int* fillRule, ::g::Java::Object* paint);
void AndroidSurface__FillPath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Brush* fill);
void AndroidSurface__FillPathImage_fn(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, ::g::Java::Object* imageAsObject, float* originX, float* originY, float* tileSizeX, float* tileSizeY, float* width, float* height, bool* eoFill, ::g::Java::Object* paintAsObject);
void AndroidSurface__FillPathLinearGradient_fn(::g::Java::Object* cp, ::g::Java::Object* path, ::g::Java::Object* gradientStore, float* startX, float* startY, float* endX, float* endY, bool* eoFill, ::g::Java::Object* pretendPaint);
void AndroidSurface__FillPathSolidColor_fn(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, int* color, bool* eoFill, ::g::Java::Object* pretendPaint);
void AndroidSurface__NewContext_fn(::g::Java::Object** __retval);
void AndroidSurface__PathClose_fn(::g::Java::Object* pathAsObject);
void AndroidSurface__PathCreateMutable_fn(::g::Java::Object** __retval);
void AndroidSurface__PathCurveTo_fn(::g::Java::Object* pathAsObject, float* x, float* y, float* ax, float* ay, float* bx, float* by);
void AndroidSurface__PathLineTo_fn(::g::Java::Object* pathAsObject, float* x, float* y);
void AndroidSurface__PathMoveTo_fn(::g::Java::Object* pathAsObject, float* x, float* y);
void AndroidSurface__PixelFromPoint_fn(AndroidSurface* __this, ::g::Uno::Float2* point, ::g::Uno::Float2* __retval);
void AndroidSurface__PopTransform_fn(AndroidSurface* __this);
void AndroidSurface__Prepare_fn(AndroidSurface* __this, ::g::Fuse::Drawing::Brush* brush);
void AndroidSurface__PrepareImageFill_fn(AndroidSurface* __this, ::g::Fuse::Drawing::ImageFill* fill);
void AndroidSurface__PrepareLinearGradient_fn(AndroidSurface* __this, ::g::Fuse::Drawing::LinearGradient* lg);
void AndroidSurface__PushTransform_fn(AndroidSurface* __this, ::g::Uno::Float4x4* t);
void AndroidSurface__recycleBitmap_fn(::g::Java::Object* bit);
void AndroidSurface__RestoreContextState_fn(::g::Java::Object* cp);
void AndroidSurface__SaveContextState_fn(::g::Java::Object* cp, int* __retval);
void AndroidSurface__StrokePath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Stroke* stroke);
void AndroidSurface__ToMatrix_fn(AndroidSurface* __this, uArray* matrix, ::g::Java::Object** __retval);
void AndroidSurface__ToMatrix1_fn(AndroidSurface* __this, ::g::Uno::Float4x4* transform, float* pixelsPerPoint, ::g::Java::Object** __retval);
void AndroidSurface__Unprepare_fn(AndroidSurface* __this, ::g::Fuse::Drawing::Brush* brush);
void AndroidSurface__VerifyCreated_fn(AndroidSurface* __this);

struct AndroidSurface : ::g::Fuse::Drawing::Surface
{
    uStrong< ::g::Java::Object*> SurfaceContext;
    float _pixelsPerPoint;
    uStrong< ::g::Uno::Collections::Dictionary*> _imageBrushes;
    uStrong< ::g::Uno::Collections::List*> _temp;
    uStrong< ::g::Uno::Collections::Dictionary*> _gradientBrushes;

    void ctor_1();
    ::g::Uno::Float2 AddSegments(::g::Java::Object* path, uObject* segments, ::g::Uno::Float2 prevPoint);
    void DrawPath(::g::Java::Object* path, ::g::Fuse::Drawing::Brush* fill, int fillRule, ::g::Java::Object* paint);
    ::g::Uno::Float2 PixelFromPoint(::g::Uno::Float2 point);
    void PrepareImageFill(::g::Fuse::Drawing::ImageFill* fill);
    ::g::Java::Object* PrepareImageFillImpl(::g::Fuse::Drawing::ImageFill* img) { ::g::Java::Object* __retval; return (((AndroidSurface_type*)__type)->fp_PrepareImageFillImpl)(this, img, &__retval), __retval; }
    void PrepareLinearGradient(::g::Fuse::Drawing::LinearGradient* lg);
    ::g::Java::Object* ToMatrix(uArray* matrix);
    ::g::Java::Object* ToMatrix1(::g::Uno::Float4x4 transform, float pixelsPerPoint);
    void VerifyBegun() { (((AndroidSurface_type*)__type)->fp_VerifyBegun)(this); }
    void VerifyCreated();
    static void ConcatTransform(::g::Java::Object* cp, ::g::Java::Object* m);
    static ::g::Java::Object* CreateFillPaint();
    static ::g::Java::Object* CreateLinearGradient(uArray* colors, uArray* stops);
    static ::g::Java::Object* CreateStrokedPaint(float width, int fjoin, int fcap, float miterLimit);
    static void FillPathImage(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, ::g::Java::Object* imageAsObject, float originX, float originY, float tileSizeX, float tileSizeY, float width, float height, bool eoFill, ::g::Java::Object* paintAsObject);
    static void FillPathLinearGradient(::g::Java::Object* cp, ::g::Java::Object* path, ::g::Java::Object* gradientStore, float startX, float startY, float endX, float endY, bool eoFill, ::g::Java::Object* pretendPaint);
    static void FillPathSolidColor(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, int color, bool eoFill, ::g::Java::Object* pretendPaint);
    static ::g::Java::Object* NewContext();
    static void PathClose(::g::Java::Object* pathAsObject);
    static ::g::Java::Object* PathCreateMutable();
    static void PathCurveTo(::g::Java::Object* pathAsObject, float x, float y, float ax, float ay, float bx, float by);
    static void PathLineTo(::g::Java::Object* pathAsObject, float x, float y);
    static void PathMoveTo(::g::Java::Object* pathAsObject, float x, float y);
    static void recycleBitmap(::g::Java::Object* bit);
    static void RestoreContextState(::g::Java::Object* cp);
    static int SaveContextState(::g::Java::Object* cp);
};
// }

}}} // ::g::Fuse::Drawing
