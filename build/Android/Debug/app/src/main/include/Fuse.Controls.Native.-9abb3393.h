// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/TextView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextView;}}}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public extern class TextView :8
// {
struct TextView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::ITextView interface2;
};

TextView_type* TextView_typeof();
void TextView__ctor_9_fn(TextView* __this);
void TextView__ctor_10_fn(TextView* __this, ::g::Java::Object* handle);
void TextView__Create_fn(::g::Java::Object** __retval);
void TextView__set_Font_fn(TextView* __this, ::g::Fuse::Font* value);
void TextView__set_FontSize_fn(TextView* __this, float* value);
void TextView__set_LineSpacing_fn(TextView* __this, float* value);
void TextView__set_MaxLength_fn(TextView* __this, int* value);
void TextView__New5_fn(TextView** __retval);
void TextView__SetFont_fn(::g::Java::Object* handle, ::g::Java::Object* fontHandle);
void TextView__SetFontSize_fn(::g::Java::Object* handle, float* size);
void TextView__SetLineSpacing_fn(::g::Java::Object* handle, float* spacing);
void TextView__SetMaxLength_fn(::g::Java::Object* handle, int* maxLength);
void TextView__SetText_fn(::g::Java::Object* handle, uString* text);
void TextView__SetTextAlignment_fn(::g::Java::Object* handle, int* alignment);
void TextView__SetTextColor_fn(::g::Java::Object* handle, int* color);
void TextView__SetTextWrapping_fn(::g::Java::Object* handle, bool* wrap);
void TextView__set_TextAlignment_fn(TextView* __this, int* value);
void TextView__set_TextColor_fn(TextView* __this, ::g::Uno::Float4* value);
void TextView__set_TextTruncation_fn(TextView* __this, int* value);
void TextView__set_TextWrapping_fn(TextView* __this, int* value);
void TextView__set_Value_fn(TextView* __this, uString* value);

struct TextView : ::g::Fuse::Controls::Native::Android::LeafView
{
    void ctor_9();
    void ctor_10(::g::Java::Object* handle);
    void Font(::g::Fuse::Font* value);
    void FontSize(float value);
    void LineSpacing(float value);
    void MaxLength(int value);
    void TextAlignment(int value);
    void TextColor(::g::Uno::Float4 value);
    void TextTruncation(int value);
    void TextWrapping(int value);
    void Value(uString* value);
    static ::g::Java::Object* Create();
    static TextView* New5();
    static void SetFont(::g::Java::Object* handle, ::g::Java::Object* fontHandle);
    static void SetFontSize(::g::Java::Object* handle, float size);
    static void SetLineSpacing(::g::Java::Object* handle, float spacing);
    static void SetMaxLength(::g::Java::Object* handle, int maxLength);
    static void SetText(::g::Java::Object* handle, uString* text);
    static void SetTextAlignment(::g::Java::Object* handle, int alignment);
    static void SetTextColor(::g::Java::Object* handle, int color);
    static void SetTextWrapping(::g::Java::Object* handle, bool wrap);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
