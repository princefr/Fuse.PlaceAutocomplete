// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/TextureView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-20f6897.h>
#include <Fuse.Controls.Native.-fb992a16.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewHost.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TextureView;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class TextureView :7
// {
::g::Fuse::Controls::Native::Android::GraphicsViewBase_type* TextureView_typeof();
void TextureView__ctor_8_fn(TextureView* __this);
void TextureView__Create_fn(::g::Java::Object** __retval);
void TextureView__InstallSurfaceListener_fn(TextureView* __this, ::g::Java::Object* handle);
void TextureView__New5_fn(TextureView** __retval);
void TextureView__OnSurfaceTextureAvailable_fn(TextureView* __this, ::g::Java::Object* surface);
void TextureView__OnSurfaceTextureDestroyed_fn(TextureView* __this);

struct TextureView : ::g::Fuse::Controls::Native::Android::GraphicsViewBase
{
    void ctor_8();
    void InstallSurfaceListener(::g::Java::Object* handle);
    void OnSurfaceTextureAvailable(::g::Java::Object* surface);
    void OnSurfaceTextureDestroyed();
    static ::g::Java::Object* Create();
    static TextureView* New5();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
