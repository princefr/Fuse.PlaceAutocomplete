// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/Android/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Platform{struct SystemUI;}}}
namespace g{namespace Fuse{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Platform{

// public static extern class SystemUI :18
// {
uClassType* SystemUI_typeof();
void SystemUI___GetRootDisplaySize_fn(::g::Uno::Float2* __retval);
void SystemUI__Attach_fn(::g::Java::Object* _layout);
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value);
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value);
void SystemUI__CalcRealSizes_fn();
void SystemUI__CompensateRootLayoutForSystemUI_fn();
void SystemUI__cppOnBottomFrameChanged_fn(int* height);
void SystemUI__cppOnConfigChanged_fn();
void SystemUI__cppOnTopFrameChanged_fn(int* height);
void SystemUI__CreateLayouts_fn();
void SystemUI__get_Density_fn(float* __retval);
void SystemUI__set_Density_fn(float* value);
void SystemUI__Detach_fn();
void SystemUI__EnterFullscreen_fn();
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval);
void SystemUI__set_Frame_fn(::g::Uno::Rect* value);
void SystemUI__add_FrameChanged_fn(uDelegate* value);
void SystemUI__remove_FrameChanged_fn(uDelegate* value);
void SystemUI__GetDensity_fn(float* __retval);
void SystemUI__GetDisplayMetrics_fn(::g::Java::Object** __retval);
void SystemUI__GetRealDisplayHeight_fn(int* __retval);
void SystemUI__GetRealDisplayWidth_fn(int* __retval);
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__GetStatusBarHeight_fn(float* __retval);
void SystemUI__GetSuperLayoutHeight_fn(int* __retval);
void SystemUI__HideActionBar_fn();
void SystemUI__HideStatusBar_fn();
void SystemUI__HookOntoRawActivityEvents_fn();
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval);
void SystemUI__set_IsTopFrameVisible_fn(bool* value);
void SystemUI__MakePostV11LayoutChangeListener_fn(::g::Java::Object** __retval);
void SystemUI__OnConfigChanged_fn();
void SystemUI__OnCreate_fn();
void SystemUI__OnDestroy_fn();
void SystemUI__OnFrameChanged_fn();
void SystemUI__onHideKeyboard_fn(int* keyboardHeight, bool* force);
void SystemUI__OnPause_fn();
void SystemUI__OnResume_fn();
void SystemUI__onShowKeyboard_fn(int* keyboardHeight, bool* force);
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
void SystemUI__ResendFrameSizes_fn();
void SystemUI__ResetGeometry_fn();
void SystemUI__get_RootView_fn(::g::Java::Object** __retval);
void SystemUI__set_RootView_fn(::g::Java::Object* value);
void SystemUI__SetAsRootView_fn(::g::Java::Object* view);
void SystemUI__SetFrame_fn(::g::Java::Object* view, int* originX, int* originY, int* height);
void SystemUI__ShowStatusBar_fn();
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval);
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value);
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value);
void SystemUI__unoOnGlobalLayout_fn();
void SystemUI__UpdateStatusBar_fn();

struct SystemUI : uObject
{
    static uSStrong< ::g::Java::Object*> _keyboardListener_;
    static uSStrong< ::g::Java::Object*>& _keyboardListener() { return _keyboardListener_; }
    static uSStrong< ::g::Java::Object*> SuperLayout_;
    static uSStrong< ::g::Java::Object*>& SuperLayout() { return SuperLayout_; }
    static uSStrong< ::g::Java::Object*> RootLayout_;
    static uSStrong< ::g::Java::Object*>& RootLayout() { return RootLayout_; }
    static uSStrong< ::g::Java::Object*> layoutAttachedTo_;
    static uSStrong< ::g::Java::Object*>& layoutAttachedTo() { return layoutAttachedTo_; }
    static int realWidth_;
    static int& realWidth() { return realWidth_; }
    static int realHeight_;
    static int& realHeight() { return realHeight_; }
    static bool firstSizing_;
    static bool& firstSizing() { return firstSizing_; }
    static bool keyboardVisible_;
    static bool& keyboardVisible() { return keyboardVisible_; }
    static int lastKeyboardHeight_;
    static int& lastKeyboardHeight() { return lastKeyboardHeight_; }
    static bool hasCachedStatusBarSize_;
    static bool& hasCachedStatusBarSize() { return hasCachedStatusBarSize_; }
    static int cachedOpenSize_;
    static int& cachedOpenSize() { return cachedOpenSize_; }
    static int _systemUIState_;
    static int& _systemUIState() { return _systemUIState_; }
    static int _topFrameSize_;
    static int& _topFrameSize() { return _topFrameSize_; }
    static int _bottomFrameSize_;
    static int& _bottomFrameSize() { return _bottomFrameSize_; }
    static ::g::Uno::Rect _frame_;
    static ::g::Uno::Rect& _frame() { return _frame_; }
    static ::g::Uno::Rect _BottomFrame_;
    static ::g::Uno::Rect& _BottomFrame() { return _BottomFrame_; }
    static float _Density_;
    static float& _Density() { return _Density_; }
    static uSStrong<uDelegate*> BottomFrameWillResize1_;
    static uSStrong<uDelegate*>& BottomFrameWillResize1() { return BottomFrameWillResize1_; }
    static uSStrong<uDelegate*> FrameChanged1_;
    static uSStrong<uDelegate*>& FrameChanged1() { return FrameChanged1_; }
    static uSStrong<uDelegate*> TopFrameWillResize1_;
    static uSStrong<uDelegate*>& TopFrameWillResize1() { return TopFrameWillResize1_; }

    static ::g::Uno::Float2 _GetRootDisplaySize();
    static void Attach(::g::Java::Object* _layout);
    static void CalcRealSizes();
    static void CompensateRootLayoutForSystemUI();
    static void cppOnBottomFrameChanged(int height);
    static void cppOnConfigChanged();
    static void cppOnTopFrameChanged(int height);
    static void CreateLayouts();
    static void Detach();
    static void EnterFullscreen();
    static float GetDensity();
    static ::g::Java::Object* GetDisplayMetrics();
    static int GetRealDisplayHeight();
    static int GetRealDisplayWidth();
    static ::g::Uno::Rect GetStatusBarFrame();
    static float GetStatusBarHeight();
    static int GetSuperLayoutHeight();
    static void HideActionBar();
    static void HideStatusBar();
    static void HookOntoRawActivityEvents();
    static ::g::Java::Object* MakePostV11LayoutChangeListener();
    static void OnConfigChanged();
    static void OnCreate();
    static void OnDestroy();
    static void OnFrameChanged();
    static void onHideKeyboard(int keyboardHeight, bool force);
    static void OnPause();
    static void OnResume();
    static void onShowKeyboard(int keyboardHeight, bool force);
    static void OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args);
    static void ResendFrameSizes();
    static void ResetGeometry();
    static void SetAsRootView(::g::Java::Object* view);
    static void SetFrame(::g::Java::Object* view, int originX, int originY, int height);
    static void ShowStatusBar();
    static void unoOnGlobalLayout();
    static void UpdateStatusBar();
    static ::g::Uno::Rect BottomFrame();
    static void BottomFrame(::g::Uno::Rect value);
    static float Density();
    static void Density(float value);
    static ::g::Uno::Rect Frame();
    static void Frame(::g::Uno::Rect value);
    static bool IsTopFrameVisible();
    static void IsTopFrameVisible(bool value);
    static ::g::Java::Object* RootView();
    static void RootView(::g::Java::Object* value);
    static ::g::Uno::Rect TopFrame();
    static void add_BottomFrameWillResize(uDelegate* value);
    static void remove_BottomFrameWillResize(uDelegate* value);
    static void add_FrameChanged(uDelegate* value);
    static void remove_FrameChanged(uDelegate* value);
    static void add_TopFrameWillResize(uDelegate* value);
    static void remove_TopFrameWillResize(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
