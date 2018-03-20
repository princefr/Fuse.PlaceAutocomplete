// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/TextEdit.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusChangedListener;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class FocusChangedListener :552
// {
struct FocusChangedListener_type : uType
{
    ::g::Uno::IDisposable interface0;
};

FocusChangedListener_type* FocusChangedListener_typeof();
void FocusChangedListener__ctor__fn(FocusChangedListener* __this, ::g::Java::Object* view, uDelegate* callback);
void FocusChangedListener__AddHandler_fn(::g::Java::Object* view, uDelegate* callback, uObject** __retval);
void FocusChangedListener__ClearListener_fn(::g::Java::Object* viewHandle);
void FocusChangedListener__Create_fn(FocusChangedListener* __this, ::g::Java::Object** __retval);
void FocusChangedListener__Dispose_fn(FocusChangedListener* __this);
void FocusChangedListener__New1_fn(::g::Java::Object* view, uDelegate* callback, FocusChangedListener** __retval);
void FocusChangedListener__OnFocusChange_fn(FocusChangedListener* __this, bool* hasFocus);
void FocusChangedListener__SetListener_fn(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle);

struct FocusChangedListener : uObject
{
    uStrong< ::g::Java::Object*> _listener;
    uStrong< ::g::Java::Object*> _view;
    uStrong<uDelegate*> _callback;

    void ctor_(::g::Java::Object* view, uDelegate* callback);
    ::g::Java::Object* Create();
    void Dispose();
    void OnFocusChange(bool hasFocus);
    static uObject* AddHandler(::g::Java::Object* view, uDelegate* callback);
    static void ClearListener(::g::Java::Object* viewHandle);
    static FocusChangedListener* New1(::g::Java::Object* view, uDelegate* callback);
    static void SetListener(::g::Java::Object* viewHandle, ::g::Java::Object* listenerHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
