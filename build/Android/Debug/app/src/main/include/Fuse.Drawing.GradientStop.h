// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.4.2/Brushes/LinearGradient.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class GradientStop :11
// {
uType* GradientStop_typeof();
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval);
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value);
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval);
void GradientStop__set_Offset_fn(GradientStop* __this, float* value);

struct GradientStop : ::g::Uno::UX::PropertyObject
{
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return _offsetName_; }
    float _offset;
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return _colorName_; }
    ::g::Uno::Float4 _color;

    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float Offset();
    void Offset(float value);
};
// }

}}} // ::g::Fuse::Drawing
