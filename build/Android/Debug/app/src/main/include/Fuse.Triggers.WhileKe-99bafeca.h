// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.4.2/KeyboardVisible.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileKeyboardVisible :10
// {
::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();
void WhileKeyboardVisible__GetHeight_fn(WhileKeyboardVisible* __this, ::g::Uno::Rect* r, float* __retval);
void WhileKeyboardVisible__OnBottomBarResize_fn(WhileKeyboardVisible* __this, uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
void WhileKeyboardVisible__OnRooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__OnUnrooted_fn(WhileKeyboardVisible* __this);
void WhileKeyboardVisible__get_Threshold_fn(WhileKeyboardVisible* __this, float* __retval);

struct WhileKeyboardVisible : ::g::Fuse::Triggers::Trigger
{
    float _baseHeight;
    float _threshold;
    static float _deltaY_;
    static float& _deltaY() { return _deltaY_; }
    static uSStrong<uObject*> Keyboard_;
    static uSStrong<uObject*>& Keyboard() { return Keyboard_; }

    float GetHeight(::g::Uno::Rect r);
    void OnBottomBarResize(uObject* sender, ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
    float Threshold();
};
// }

}}} // ::g::Fuse::Triggers
