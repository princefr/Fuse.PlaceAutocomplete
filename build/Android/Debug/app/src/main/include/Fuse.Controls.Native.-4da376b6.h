// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/View.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class View :8
// {
struct View_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Controls::Native::IView interface1;
};

View_type* View_typeof();
void View__ctor_4_fn(View* __this, ::g::Java::Object* handle);
void View__ctor_5_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView);
void View__ctor_6_fn(View* __this, ::g::Java::Object* handle, bool* isLeafView, bool* handlesInput);
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval);

struct View : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_4(::g::Java::Object* handle);
    void ctor_5(::g::Java::Object* handle, bool isLeafView);
    void ctor_6(::g::Java::Object* handle, bool isLeafView, bool handlesInput);
    ::g::Java::Object* Handle();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
