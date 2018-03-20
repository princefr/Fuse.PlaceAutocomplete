// This file was generated based on /usr/local/share/uno/Packages/Fuse.Android/1.4.2/AppRoot.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Android{struct AppRoot;}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Android{

// internal static extern class AppRoot :11
// {
uClassType* AppRoot_typeof();
void AppRoot__ClearRoot_fn(::g::Fuse::Controls::Native::ViewHandle* handle);
void AppRoot__ClearRoot1_fn(::g::Java::Object* handle);
void AppRoot__CreateRootView_fn(::g::Java::Object** __retval);
void AppRoot__OnTouchEvent___fn(::g::Java::Object* motionEvent);
void AppRoot__SetAppRoot_fn(::g::Java::Object* rootView);
void AppRoot__SetRootView_fn(::g::Fuse::Controls::Native::ViewHandle* handle);
void AppRoot__SetRootView1_fn(::g::Java::Object* handle, ::g::Java::Object* rootHandle);
void AppRoot__get_ViewHandle_fn(::g::Fuse::Controls::Native::ViewHandle** __retval);

struct AppRoot : uObject
{
    static uSStrong< ::g::Java::Object*> _rootContainer_;
    static uSStrong< ::g::Java::Object*>& _rootContainer() { return AppRoot_typeof()->Init(), _rootContainer_; }
    static uSStrong< ::g::Fuse::Controls::Native::ViewHandle*> _viewHandle_;
    static uSStrong< ::g::Fuse::Controls::Native::ViewHandle*>& _viewHandle() { return AppRoot_typeof()->Init(), _viewHandle_; }

    static void ClearRoot(::g::Fuse::Controls::Native::ViewHandle* handle);
    static void ClearRoot1(::g::Java::Object* handle);
    static ::g::Java::Object* CreateRootView();
    static void OnTouchEvent__(::g::Java::Object* motionEvent);
    static void SetAppRoot(::g::Java::Object* rootView);
    static void SetRootView(::g::Fuse::Controls::Native::ViewHandle* handle);
    static void SetRootView1(::g::Java::Object* handle, ::g::Java::Object* rootHandle);
    static ::g::Fuse::Controls::Native::ViewHandle* ViewHandle();
};
// }

}}} // ::g::Fuse::Android
