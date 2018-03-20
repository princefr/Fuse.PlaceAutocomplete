// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.2/TextControls/MobileTextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-92d9dd5d.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextEditRenderer__Renderer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class TextEditRenderer.Renderer :226
// {
struct TextEditRenderer__Renderer_type : uType
{
    ::g::Fuse::Controls::Native::IViewHandleRenderer interface0;
    ::g::Uno::IDisposable interface1;
};

TextEditRenderer__Renderer_type* TextEditRenderer__Renderer_typeof();
void TextEditRenderer__Renderer__ctor__fn(TextEditRenderer__Renderer* __this, ::g::Fuse::Controls::TextEdit* textEdit, bool* isMultiline);
void TextEditRenderer__Renderer__FuseControlsNativeIViewHandleRendererDraw_fn(TextEditRenderer__Renderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void TextEditRenderer__Renderer__FuseControlsNativeIViewHandleRendererInvalidate_fn(TextEditRenderer__Renderer* __this);
void TextEditRenderer__Renderer__New1_fn(::g::Fuse::Controls::TextEdit* textEdit, bool* isMultiline, TextEditRenderer__Renderer** __retval);
void TextEditRenderer__Renderer__UnoIDisposableDispose_fn(TextEditRenderer__Renderer* __this);

struct TextEditRenderer__Renderer : uObject
{
    uStrong<uObject*> _renderer;
    bool _isMultiline;
    uStrong< ::g::Fuse::Controls::TextEdit*> _textEdit;
    int _prevTextAlignment;
    bool _firstFrame;

    void ctor_(::g::Fuse::Controls::TextEdit* textEdit, bool isMultiline);
    static TextEditRenderer__Renderer* New1(::g::Fuse::Controls::TextEdit* textEdit, bool isMultiline);
};
// }

}}} // ::g::Fuse::Controls
