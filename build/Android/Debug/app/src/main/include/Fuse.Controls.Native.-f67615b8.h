// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-3a814c3c.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextEdit;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class TextEdit :7
// {
::g::Fuse::Controls::Native::Android::TextInput_type* TextEdit_typeof();
void TextEdit__ctor_12_fn(TextEdit* __this, uObject* host, bool* isMultiline);
void TextEdit__MakeItPlain_fn(::g::Java::Object* handle);
void TextEdit__New8_fn(uObject* host, bool* isMultiline, TextEdit** __retval);

struct TextEdit : ::g::Fuse::Controls::Native::Android::TextInput
{
    void ctor_12(uObject* host, bool isMultiline);
    static void MakeItPlain(::g::Java::Object* handle);
    static TextEdit* New8(uObject* host, bool isMultiline);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
