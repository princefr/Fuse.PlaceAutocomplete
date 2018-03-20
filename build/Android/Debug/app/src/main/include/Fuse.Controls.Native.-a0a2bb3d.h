// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/Circle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-11768b55.h>
#include <Fuse.Controls.Native.-952ea184.h>
#include <Fuse.Controls.Native.-b2e724e6.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Circle;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Circle :10
// {
struct Circle_type : ::g::Fuse::Controls::Native::Android::Shape_type
{
    ::g::Fuse::Controls::Native::ICircleView interface3;
};

Circle_type* Circle_typeof();
void Circle__ctor_8_fn(Circle* __this);
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value);
void Circle__New5_fn(Circle** __retval);
void Circle__OnSizeChanged_fn(Circle* __this);
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle);
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint);

struct Circle : ::g::Fuse::Controls::Native::Android::Shape
{
    float _startAngle;
    float _endAngle;
    bool _useAngle;

    void ctor_8();
    void UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle);
    static Circle* New5();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
