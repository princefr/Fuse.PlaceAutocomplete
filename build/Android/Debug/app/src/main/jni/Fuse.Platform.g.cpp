// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.SystemU-2024c55a.h>
#include <Fuse.Platform.SystemU-a6dfc5d1.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIID.h>
#include <Fuse.Platform.SysUIState.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-bf686309.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Rect.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Platform{

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/AppAlerts.uno
// ---------------------------------------------------------------

// internal static class AppEvents :13
// {
// static AppEvents() :17
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) :15
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) :15
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a) :22
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static] :22
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static] :15
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/Lifecycle.uno
// ---------------------------------------------------------------

// public enum ApplicationState :5
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/Lifecycle.uno
// ---------------------------------------------------------------

// public static class Lifecycle :22
// {
// static Lifecycle() :34
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringBackground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Terminating1_, uFieldFlagsStatic);
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) :31
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) :28
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :29
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) :30
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) :72
void Lifecycle__OnEnteringBackground_fn(int* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) :51
void Lifecycle__OnEnteringForeground_fn(int* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) :58
void Lifecycle__OnEnteringInteractive_fn(int* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) :65
void Lifecycle__OnExitedInteractive_fn(int* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) :44
void Lifecycle__OnStarted_fn(int* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) :79
void Lifecycle__OnTerminating_fn(int* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) :27
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State() :25
void Lifecycle__get_State_fn(int* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) :32
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) [static] :72
void Lifecycle::OnEnteringBackground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) [static] :51
void Lifecycle::OnEnteringForeground(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) [static] :58
void Lifecycle::OnEnteringInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) [static] :65
void Lifecycle::OnExitedInteractive(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) [static] :44
void Lifecycle::OnStarted(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) [static] :79
void Lifecycle::OnTerminating(int newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static] :25
int Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform::CoreApp::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :31
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :28
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :29
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :30
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::add_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :27
void Lifecycle::remove_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::add_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static] :32
void Lifecycle::remove_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/Android/SystemUI.uno
// ----------------------------------------------------------------------

// public static extern class SystemUI :18
// {
// static generated SystemUI() :18
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::firstSizing_ = true;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Fuse::Platform::SystemUIWillResizeEventArgs_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::_keyboardListener_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::SuperLayout_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::RootLayout_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::layoutAttachedTo_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::realWidth_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::realHeight_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::firstSizing_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::keyboardVisible_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::lastKeyboardHeight_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::hasCachedStatusBarSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::cachedOpenSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_systemUIState_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_topFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_bottomFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_frame_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_BottomFrame_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&SystemUI::_Density_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&SystemUI::BottomFrameWillResize1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler*/], (uintptr_t)&SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/], (uintptr_t)&SystemUI::TopFrameWillResize1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 20;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static float2 _GetRootDisplaySize() :629
void SystemUI___GetRootDisplaySize_fn(::g::Uno::Float2* __retval)
{
    *__retval = SystemUI::_GetRootDisplaySize();
}

// public static void Attach(Java.Object _layout) :490
void SystemUI__Attach_fn(::g::Java::Object* _layout)
{
    SystemUI::Attach(_layout);
}

// public static generated Uno.Rect get_BottomFrame() :24
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// private static generated void set_BottomFrame(Uno.Rect value) :24
void SystemUI__set_BottomFrame_fn(::g::Uno::Rect* value)
{
    SystemUI::BottomFrame(*value);
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :21
void SystemUI__add_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_BottomFrameWillResize(value);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :21
void SystemUI__remove_BottomFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_BottomFrameWillResize(value);
}

// public static void CalcRealSizes() :320
void SystemUI__CalcRealSizes_fn()
{
    SystemUI::CalcRealSizes();
}

// public static void CompensateRootLayoutForSystemUI() :462
void SystemUI__CompensateRootLayoutForSystemUI_fn()
{
    SystemUI::CompensateRootLayoutForSystemUI();
}

// private static void cppOnBottomFrameChanged(int height) :563
void SystemUI__cppOnBottomFrameChanged_fn(int* height)
{
    SystemUI::cppOnBottomFrameChanged(*height);
}

// private static void cppOnConfigChanged() :413
void SystemUI__cppOnConfigChanged_fn()
{
    SystemUI::cppOnConfigChanged();
}

// private static void cppOnTopFrameChanged(int height) :594
void SystemUI__cppOnTopFrameChanged_fn(int* height)
{
    SystemUI::cppOnTopFrameChanged(*height);
}

// public static void CreateLayouts() :131
void SystemUI__CreateLayouts_fn()
{
    SystemUI::CreateLayouts();
}

// public static generated float get_Density() :44
void SystemUI__get_Density_fn(float* __retval)
{
    *__retval = SystemUI::Density();
}

// private static generated void set_Density(float value) :44
void SystemUI__set_Density_fn(float* value)
{
    SystemUI::Density(*value);
}

// public static void Detach() :499
void SystemUI__Detach_fn()
{
    SystemUI::Detach();
}

// private static void EnterFullscreen() :269
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// public static Uno.Rect get_Frame() :48
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static void set_Frame(Uno.Rect value) :49
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) :59
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) :59
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static float GetDensity() :432
void SystemUI__GetDensity_fn(float* __retval)
{
    *__retval = SystemUI::GetDensity();
}

// public static Java.Object GetDisplayMetrics() :357
void SystemUI__GetDisplayMetrics_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::GetDisplayMetrics();
}

// public static int GetRealDisplayHeight() :375
void SystemUI__GetRealDisplayHeight_fn(int* __retval)
{
    *__retval = SystemUI::GetRealDisplayHeight();
}

// public static int GetRealDisplayWidth() :369
void SystemUI__GetRealDisplayWidth_fn(int* __retval)
{
    *__retval = SystemUI::GetRealDisplayWidth();
}

// private static extern Uno.Rect GetStatusBarFrame() :294
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// private static float GetStatusBarHeight() :181
void SystemUI__GetStatusBarHeight_fn(float* __retval)
{
    *__retval = SystemUI::GetStatusBarHeight();
}

// private static int GetSuperLayoutHeight() :549
void SystemUI__GetSuperLayoutHeight_fn(int* __retval)
{
    *__retval = SystemUI::GetSuperLayoutHeight();
}

// private static void HideActionBar() :169
void SystemUI__HideActionBar_fn()
{
    SystemUI::HideActionBar();
}

// public static void HideStatusBar() :229
void SystemUI__HideStatusBar_fn()
{
    SystemUI::HideStatusBar();
}

// private static void HookOntoRawActivityEvents() :70
void SystemUI__HookOntoRawActivityEvents_fn()
{
    SystemUI::HookOntoRawActivityEvents();
}

// public static bool get_IsTopFrameVisible() :150
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :153
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// private static Java.Object MakePostV11LayoutChangeListener() :440
void SystemUI__MakePostV11LayoutChangeListener_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::MakePostV11LayoutChangeListener();
}

// private static void OnConfigChanged() :105
void SystemUI__OnConfigChanged_fn()
{
    SystemUI::OnConfigChanged();
}

// public static void OnCreate() :111
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// private static void OnDestroy() :99
void SystemUI__OnDestroy_fn()
{
    SystemUI::OnDestroy();
}

// private static void OnFrameChanged() :60
void SystemUI__OnFrameChanged_fn()
{
    SystemUI::OnFrameChanged();
}

// private static void onHideKeyboard(int keyboardHeight, bool force) :538
void SystemUI__onHideKeyboard_fn(int* keyboardHeight, bool* force)
{
    SystemUI::onHideKeyboard(*keyboardHeight, *force);
}

// private static void OnPause() :87
void SystemUI__OnPause_fn()
{
    SystemUI::OnPause();
}

// private static void OnResume() :93
void SystemUI__OnResume_fn()
{
    SystemUI::OnResume();
}

// private static void onShowKeyboard(int keyboardHeight, bool force) :528
void SystemUI__onShowKeyboard_fn(int* keyboardHeight, bool* force)
{
    SystemUI::onShowKeyboard(*keyboardHeight, *force);
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) :301
void SystemUI__OnWillResize_fn(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    SystemUI::OnWillResize(args);
}

// public static void ResendFrameSizes() :554
void SystemUI__ResendFrameSizes_fn()
{
    SystemUI::ResendFrameSizes();
}

// private static void ResetGeometry() :420
void SystemUI__ResetGeometry_fn()
{
    SystemUI::ResetGeometry();
}

// public static Java.Object get_RootView() :387
void SystemUI__get_RootView_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(Java.Object value) :388
void SystemUI__set_RootView_fn(::g::Java::Object* value)
{
    SystemUI::RootView(value);
}

// private static void SetAsRootView(Java.Object view) :392
void SystemUI__SetAsRootView_fn(::g::Java::Object* view)
{
    SystemUI::SetAsRootView(view);
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height) :472
void SystemUI__SetFrame_fn(::g::Java::Object* view, int* originX, int* originY, int* height)
{
    SystemUI::SetFrame(view, *originX, *originY, *height);
}

// public static void ShowStatusBar() :206
void SystemUI__ShowStatusBar_fn()
{
    SystemUI::ShowStatusBar();
}

// public static Uno.Rect get_TopFrame() :23
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :20
void SystemUI__add_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::add_TopFrameWillResize(value);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) :20
void SystemUI__remove_TopFrameWillResize_fn(uDelegate* value)
{
    SystemUI::remove_TopFrameWillResize(value);
}

// private static void unoOnGlobalLayout() :512
void SystemUI__unoOnGlobalLayout_fn()
{
    SystemUI::unoOnGlobalLayout();
}

// public static void UpdateStatusBar() :249
void SystemUI__UpdateStatusBar_fn()
{
    SystemUI::UpdateStatusBar();
}

uSStrong< ::g::Java::Object*> SystemUI::_keyboardListener_;
uSStrong< ::g::Java::Object*> SystemUI::SuperLayout_;
uSStrong< ::g::Java::Object*> SystemUI::RootLayout_;
uSStrong< ::g::Java::Object*> SystemUI::layoutAttachedTo_;
int SystemUI::realWidth_;
int SystemUI::realHeight_;
bool SystemUI::firstSizing_;
bool SystemUI::keyboardVisible_;
int SystemUI::lastKeyboardHeight_;
bool SystemUI::hasCachedStatusBarSize_;
int SystemUI::cachedOpenSize_;
int SystemUI::_systemUIState_;
int SystemUI::_topFrameSize_;
int SystemUI::_bottomFrameSize_;
::g::Uno::Rect SystemUI::_frame_;
::g::Uno::Rect SystemUI::_BottomFrame_;
float SystemUI::_Density_;
uSStrong<uDelegate*> SystemUI::BottomFrameWillResize1_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::TopFrameWillResize1_;

// private static float2 _GetRootDisplaySize() [static] :629
::g::Uno::Float2 SystemUI::_GetRootDisplaySize()
{
    float w = (float)SystemUI::GetRealDisplayWidth();
    float h = (float)SystemUI::GetRealDisplayHeight();
    return ::g::Uno::Float2__New2(w, h);
}

// public static void Attach(Java.Object _layout) [static] :490
void SystemUI::Attach(::g::Java::Object* _layout)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Attach69", "(Ljava/lang/Object;)V");
        ::g::Java::Object* __u_layout=_layout;
        jobject ___layout = (__u_layout==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_layout, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___layout);
        
        if (___layout!=NULL) { U_JNIVAR->DeleteLocalRef(___layout); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CalcRealSizes() [static] :320
void SystemUI::CalcRealSizes()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CalcRealSizes72", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CompensateRootLayoutForSystemUI() [static] :462
void SystemUI::CompensateRootLayoutForSystemUI()
{
    SystemUI::CalcRealSizes();

    if (SystemUI::RootLayout_ != NULL)
    {
        int compensation = -((int)SystemUI::GetStatusBarHeight());
        SystemUI::SetFrame(SystemUI::RootLayout_, 0, compensation, SystemUI::GetRealDisplayHeight());
    }
}

// private static void cppOnBottomFrameChanged(int height) [static] :563
void SystemUI::cppOnBottomFrameChanged(int height)
{
    int resizeReason = 1;
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)SystemUI::_bottomFrameSize_);
    ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, (float)SystemUI::_bottomFrameSize_);
    ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)height);
    ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, (float)height);
    ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
    ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

    if ((SystemUI::_bottomFrameSize_ == 0) && (height > 0))
        resizeReason = 0;
    else if ((SystemUI::_bottomFrameSize_ > 0) && (height == 0))
        resizeReason = 2;
    else if (((SystemUI::_bottomFrameSize_ > 0) && (height > 0)) && (height != SystemUI::_bottomFrameSize_))
        resizeReason = 1;

    SystemUI::_bottomFrameSize_ = height;
    ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(1, resizeReason, endFrame, startFrame, 1.0, 0);
    SystemUI::OnWillResize(args);
}

// private static void cppOnConfigChanged() [static] :413
void SystemUI::cppOnConfigChanged()
{
    GLHelper::SwapBackToBackgroundSurface();
    SystemUI::ResetGeometry();
}

// private static void cppOnTopFrameChanged(int height) [static] :594
void SystemUI::cppOnTopFrameChanged(int height)
{
    if (SystemUI::_topFrameSize_ != height)
    {
        int resizeReason = 1;
        ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
        ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)SystemUI::_topFrameSize_);
        ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, (float)SystemUI::_topFrameSize_);
        ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)height);
        ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, (float)height);
        ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
        ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

        if ((SystemUI::_topFrameSize_ == 0) && (height > 0))
            resizeReason = 0;
        else if ((SystemUI::_topFrameSize_ > 0) && (height == 0))
            resizeReason = 2;
        else if (((SystemUI::_topFrameSize_ > 0) && (height > 0)) && (height != SystemUI::_topFrameSize_))
            resizeReason = 1;

        SystemUI::_topFrameSize_ = height;
        ::g::Fuse::Platform::SystemUIWillResizeEventArgs* args = ::g::Fuse::Platform::SystemUIWillResizeEventArgs::New2(0, resizeReason, endFrame, startFrame, 1.0, 0);
        SystemUI::OnWillResize(args);
    }
}

// public static void CreateLayouts() [static] :131
void SystemUI::CreateLayouts()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateLayouts76", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Detach() [static] :499
void SystemUI::Detach()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Detach82", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnterFullscreen() [static] :269
void SystemUI::EnterFullscreen()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EnterFullscreen83", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static float GetDensity() [static] :432
float SystemUI::GetDensity()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDensity88", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetDisplayMetrics() [static] :357
::g::Java::Object* SystemUI::GetDisplayMetrics()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDisplayMetrics89", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetRealDisplayHeight() [static] :375
int SystemUI::GetRealDisplayHeight()
{
    SystemUI::CalcRealSizes();
    return SystemUI::realHeight_;
}

// public static int GetRealDisplayWidth() [static] :369
int SystemUI::GetRealDisplayWidth()
{
    SystemUI::CalcRealSizes();
    return SystemUI::realWidth_;
}

// private static extern Uno.Rect GetStatusBarFrame() [static] :294
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    ::g::Uno::Float2 dispSize = SystemUI::_GetRootDisplaySize();
    float height = SystemUI::GetStatusBarHeight();
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(dispSize.X, height));
}

// private static float GetStatusBarHeight() [static] :181
float SystemUI::GetStatusBarHeight()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetStatusBarHeight90", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetSuperLayoutHeight() [static] :549
int SystemUI::GetSuperLayoutHeight()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSuperLayoutHeight93", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void HideActionBar() [static] :169
void SystemUI::HideActionBar()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideActionBar86", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void HideStatusBar() [static] :229
void SystemUI::HideStatusBar()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideStatusBar85", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void HookOntoRawActivityEvents() [static] :70
void SystemUI::HookOntoRawActivityEvents()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HookOntoRawActivityEvents94", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object MakePostV11LayoutChangeListener() [static] :440
::g::Java::Object* SystemUI::MakePostV11LayoutChangeListener()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakePostV11LayoutChangeListener78", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void OnConfigChanged() [static] :105
void SystemUI::OnConfigChanged()
{
    SystemUI::CompensateRootLayoutForSystemUI();
}

// public static void OnCreate() [static] :111
void SystemUI::OnCreate()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnCreate102", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnDestroy() [static] :99
void SystemUI::OnDestroy()
{
    SystemUI::Detach();
    SystemUI::_bottomFrameSize_ = 0;
}

// private static void OnFrameChanged() [static] :60
void SystemUI::OnFrameChanged()
{
    uDelegate* handler = SystemUI::FrameChanged1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// private static void onHideKeyboard(int keyboardHeight, bool force) [static] :538
void SystemUI::onHideKeyboard(int keyboardHeight, bool force)
{
    if (SystemUI::keyboardVisible_ || force)
    {
        SystemUI::keyboardVisible_ = false;
        SystemUI::lastKeyboardHeight_ = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnPause() [static] :87
void SystemUI::OnPause()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnPause95", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnResume() [static] :93
void SystemUI::OnResume()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnResume96", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void onShowKeyboard(int keyboardHeight, bool force) [static] :528
void SystemUI::onShowKeyboard(int keyboardHeight, bool force)
{
    SystemUI::keyboardVisible_ = true;

    if ((SystemUI::lastKeyboardHeight_ != keyboardHeight) || force)
    {
        SystemUI::lastKeyboardHeight_ = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnWillResize(Fuse.Platform.SystemUIWillResizeEventArgs args) [static] :301
void SystemUI::OnWillResize(::g::Fuse::Platform::SystemUIWillResizeEventArgs* args)
{
    if (uPtr(args)->ID() == 0)
    {
        uDelegate* handler = SystemUI::TopFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler, NULL))
            uPtr(handler)->Invoke(2, NULL, args);
    }
    else
    {
        SystemUI::BottomFrame(uPtr(args)->EndFrame());
        uDelegate* handler1 = SystemUI::BottomFrameWillResize1_;

        if (::g::Uno::Delegate::op_Inequality(handler1, NULL))
            uPtr(handler1)->Invoke(2, NULL, args);
    }
}

// public static void ResendFrameSizes() [static] :554
void SystemUI::ResendFrameSizes()
{
    int heightDiff = SystemUI::GetRealDisplayHeight() - SystemUI::GetSuperLayoutHeight();
    heightDiff = heightDiff - (int)SystemUI::GetStatusBarHeight();
    SystemUI::lastKeyboardHeight_ = heightDiff;
    SystemUI::cppOnBottomFrameChanged(heightDiff);
}

// private static void ResetGeometry() [static] :420
void SystemUI::ResetGeometry()
{
    GLHelper::SwapBackToBackgroundSurface();
    float density = SystemUI::GetDensity();
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New2(0.0f, 0.0f);
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Rect frame = ::g::Uno::Rect__New2(pos, size);
    SystemUI::Frame(frame);
    SystemUI::Density(density);
}

// private static void SetAsRootView(Java.Object view) [static] :392
void SystemUI::SetAsRootView(::g::Java::Object* view)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAsRootView105", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view);
        
        if (_view!=NULL) { U_JNIVAR->DeleteLocalRef(_view); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height) [static] :472
void SystemUI::SetFrame(::g::Java::Object* view, int originX, int originY, int height)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFrame79", "(Ljava/lang/Object;III)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uoriginX=originX;
        jint _originX = (jint)_uoriginX;
        int _uoriginY=originY;
        jint _originY = (jint)_uoriginY;
        int _uheight=height;
        jint _height = (jint)_uheight;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view,_originX,_originY,_height);
        
        if (_view!=NULL) { U_JNIVAR->DeleteLocalRef(_view); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ShowStatusBar() [static] :206
void SystemUI::ShowStatusBar()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowStatusBar106", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void unoOnGlobalLayout() [static] :512
void SystemUI::unoOnGlobalLayout()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "unoOnGlobalLayout103", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void UpdateStatusBar() [static] :249
void SystemUI::UpdateStatusBar()
{
    switch (SystemUI::_systemUIState_)
    {
        case 0:
        {
            SystemUI::ShowStatusBar();
            break;
        }
        case 1:
        {
            SystemUI::HideStatusBar();
            break;
        }
        case 2:
        {
            SystemUI::EnterFullscreen();
            break;
        }
    }
}

// public static generated Uno.Rect get_BottomFrame() [static] :24
::g::Uno::Rect SystemUI::BottomFrame()
{
    return SystemUI::_BottomFrame_;
}

// private static generated void set_BottomFrame(Uno.Rect value) [static] :24
void SystemUI::BottomFrame(::g::Uno::Rect value)
{
    SystemUI::_BottomFrame_ = value;
}

// public static generated float get_Density() [static] :44
float SystemUI::Density()
{
    return SystemUI::_Density_;
}

// private static generated void set_Density(float value) [static] :44
void SystemUI::Density(float value)
{
    SystemUI::_Density_ = value;
}

// public static Uno.Rect get_Frame() [static] :48
::g::Uno::Rect SystemUI::Frame()
{
    return SystemUI::_frame_;
}

// private static void set_Frame(Uno.Rect value) [static] :49
void SystemUI::Frame(::g::Uno::Rect value)
{
    if (::g::Uno::Rect__Equals2(SystemUI::_frame_, value))
        return;

    SystemUI::_frame_ = value;
    SystemUI::OnFrameChanged();
}

// public static bool get_IsTopFrameVisible() [static] :150
bool SystemUI::IsTopFrameVisible()
{
    return (double)SystemUI::GetStatusBarHeight() > 0.0;
}

// public static void set_IsTopFrameVisible(bool value) [static] :153
void SystemUI::IsTopFrameVisible(bool value)
{
    if (value)
        SystemUI::ShowStatusBar();
    else
        SystemUI::HideStatusBar();
}

// public static Java.Object get_RootView() [static] :387
::g::Java::Object* SystemUI::RootView()
{
    return SystemUI::RootLayout_;
}

// public static void set_RootView(Java.Object value) [static] :388
void SystemUI::RootView(::g::Java::Object* value)
{
    SystemUI::SetAsRootView(value);
}

// public static Uno.Rect get_TopFrame() [static] :23
::g::Uno::Rect SystemUI::TopFrame()
{
    return SystemUI::GetStatusBarFrame();
}

// public static generated void add_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :21
void SystemUI::add_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::BottomFrameWillResize1_, value), ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_BottomFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :21
void SystemUI::remove_BottomFrameWillResize(uDelegate* value)
{
    SystemUI::BottomFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::BottomFrameWillResize1_, value), ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static] :59
void SystemUI::add_FrameChanged(uDelegate* value)
{
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1_, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static] :59
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1_, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void add_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :20
void SystemUI::add_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TopFrameWillResize1_, value), ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}

// public static generated void remove_TopFrameWillResize(Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs> value) [static] :20
void SystemUI::remove_TopFrameWillResize(uDelegate* value)
{
    SystemUI::TopFrameWillResize1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TopFrameWillResize1_, value), ::TYPES[4/*Uno.EventHandler<Fuse.Platform.SystemUIWillResizeEventArgs>*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/SystemUI.uno
// --------------------------------------------------------------

// public enum SystemUIID :8
uEnumType* SystemUIID_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIID", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "TopFrame", 0LL,
        "BottomFrame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/SystemUI.uno
// --------------------------------------------------------------

// public enum SystemUIResizeReason :14
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/SystemUI.uno
// --------------------------------------------------------------

// public sealed class SystemUIWillResizeEventArgs :28
// {
static void SystemUIWillResizeEventArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(SystemUIWillResizeEventArgs, _AnimationCurve), 0,
        ::g::Uno::Double_typeof(), offsetof(SystemUIWillResizeEventArgs, _AnimationDuration), 0,
        ::g::Uno::Rect_typeof(), offsetof(SystemUIWillResizeEventArgs, _EndFrame), 0,
        ::g::Fuse::Platform::SystemUIID_typeof(), offsetof(SystemUIWillResizeEventArgs, _ID), 0,
        ::g::Uno::Bool_typeof(), offsetof(SystemUIWillResizeEventArgs, _IsAnimated), 0,
        ::g::Fuse::Platform::SystemUIResizeReason_typeof(), offsetof(SystemUIWillResizeEventArgs, _ResizeReason), 0,
        ::g::Uno::Rect_typeof(), offsetof(SystemUIWillResizeEventArgs, _StartFrame), 0);
}

uType* SystemUIWillResizeEventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SystemUIWillResizeEventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Platform.SystemUIWillResizeEventArgs", options);
    type->fp_build_ = SystemUIWillResizeEventArgs_build;
    return type;
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :39
void SystemUIWillResizeEventArgs__ctor_1_fn(SystemUIWillResizeEventArgs* __this, int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve)
{
    __this->ctor_1(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated int get_AnimationCurve() :36
void SystemUIWillResizeEventArgs__get_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->AnimationCurve();
}

// private generated void set_AnimationCurve(int value) :36
void SystemUIWillResizeEventArgs__set_AnimationCurve_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->AnimationCurve(*value);
}

// public generated double get_AnimationDuration() :35
void SystemUIWillResizeEventArgs__get_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* __retval)
{
    *__retval = __this->AnimationDuration();
}

// private generated void set_AnimationDuration(double value) :35
void SystemUIWillResizeEventArgs__set_AnimationDuration_fn(SystemUIWillResizeEventArgs* __this, double* value)
{
    __this->AnimationDuration(*value);
}

// public generated Uno.Rect get_EndFrame() :33
void SystemUIWillResizeEventArgs__get_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->EndFrame();
}

// private generated void set_EndFrame(Uno.Rect value) :33
void SystemUIWillResizeEventArgs__set_EndFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->EndFrame(*value);
}

// public generated Fuse.Platform.SystemUIID get_ID() :30
void SystemUIWillResizeEventArgs__get_ID_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ID();
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) :30
void SystemUIWillResizeEventArgs__set_ID_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ID(*value);
}

// public generated bool get_IsAnimated() :34
void SystemUIWillResizeEventArgs__get_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAnimated();
}

// private generated void set_IsAnimated(bool value) :34
void SystemUIWillResizeEventArgs__set_IsAnimated_fn(SystemUIWillResizeEventArgs* __this, bool* value)
{
    __this->IsAnimated(*value);
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) :39
void SystemUIWillResizeEventArgs__New2_fn(int* id, int* resizeReason, ::g::Uno::Rect* endFrame, ::g::Uno::Rect* startFrame, double* animationDuration, int* animationCurve, SystemUIWillResizeEventArgs** __retval)
{
    *__retval = SystemUIWillResizeEventArgs::New2(*id, *resizeReason, *endFrame, *startFrame, *animationDuration, *animationCurve);
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() :31
void SystemUIWillResizeEventArgs__get_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* __retval)
{
    *__retval = __this->ResizeReason();
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) :31
void SystemUIWillResizeEventArgs__set_ResizeReason_fn(SystemUIWillResizeEventArgs* __this, int* value)
{
    __this->ResizeReason(*value);
}

// public generated Uno.Rect get_StartFrame() :32
void SystemUIWillResizeEventArgs__get_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->StartFrame();
}

// private generated void set_StartFrame(Uno.Rect value) :32
void SystemUIWillResizeEventArgs__set_StartFrame_fn(SystemUIWillResizeEventArgs* __this, ::g::Uno::Rect* value)
{
    __this->StartFrame(*value);
}

// public SystemUIWillResizeEventArgs(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [instance] :39
void SystemUIWillResizeEventArgs::ctor_1(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    ctor_();
    ID(id);
    ResizeReason(resizeReason);
    StartFrame(startFrame);
    EndFrame(endFrame);

    if (animationDuration != 0.0)
    {
        IsAnimated(true);
        AnimationDuration(animationDuration);
        AnimationCurve(animationCurve);
    }
}

// public generated int get_AnimationCurve() [instance] :36
int SystemUIWillResizeEventArgs::AnimationCurve()
{
    return _AnimationCurve;
}

// private generated void set_AnimationCurve(int value) [instance] :36
void SystemUIWillResizeEventArgs::AnimationCurve(int value)
{
    _AnimationCurve = value;
}

// public generated double get_AnimationDuration() [instance] :35
double SystemUIWillResizeEventArgs::AnimationDuration()
{
    return _AnimationDuration;
}

// private generated void set_AnimationDuration(double value) [instance] :35
void SystemUIWillResizeEventArgs::AnimationDuration(double value)
{
    _AnimationDuration = value;
}

// public generated Uno.Rect get_EndFrame() [instance] :33
::g::Uno::Rect SystemUIWillResizeEventArgs::EndFrame()
{
    return _EndFrame;
}

// private generated void set_EndFrame(Uno.Rect value) [instance] :33
void SystemUIWillResizeEventArgs::EndFrame(::g::Uno::Rect value)
{
    _EndFrame = value;
}

// public generated Fuse.Platform.SystemUIID get_ID() [instance] :30
int SystemUIWillResizeEventArgs::ID()
{
    return _ID;
}

// private generated void set_ID(Fuse.Platform.SystemUIID value) [instance] :30
void SystemUIWillResizeEventArgs::ID(int value)
{
    _ID = value;
}

// public generated bool get_IsAnimated() [instance] :34
bool SystemUIWillResizeEventArgs::IsAnimated()
{
    return _IsAnimated;
}

// private generated void set_IsAnimated(bool value) [instance] :34
void SystemUIWillResizeEventArgs::IsAnimated(bool value)
{
    _IsAnimated = value;
}

// public generated Fuse.Platform.SystemUIResizeReason get_ResizeReason() [instance] :31
int SystemUIWillResizeEventArgs::ResizeReason()
{
    return _ResizeReason;
}

// private generated void set_ResizeReason(Fuse.Platform.SystemUIResizeReason value) [instance] :31
void SystemUIWillResizeEventArgs::ResizeReason(int value)
{
    _ResizeReason = value;
}

// public generated Uno.Rect get_StartFrame() [instance] :32
::g::Uno::Rect SystemUIWillResizeEventArgs::StartFrame()
{
    return _StartFrame;
}

// private generated void set_StartFrame(Uno.Rect value) [instance] :32
void SystemUIWillResizeEventArgs::StartFrame(::g::Uno::Rect value)
{
    _StartFrame = value;
}

// public SystemUIWillResizeEventArgs New(Fuse.Platform.SystemUIID id, Fuse.Platform.SystemUIResizeReason resizeReason, Uno.Rect endFrame, [Uno.Rect startFrame], [double animationDuration], [int animationCurve]) [static] :39
SystemUIWillResizeEventArgs* SystemUIWillResizeEventArgs::New2(int id, int resizeReason, ::g::Uno::Rect endFrame, ::g::Uno::Rect startFrame, double animationDuration, int animationCurve)
{
    SystemUIWillResizeEventArgs* obj1 = (SystemUIWillResizeEventArgs*)uNew(SystemUIWillResizeEventArgs_typeof());
    obj1->ctor_1(id, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Platform/1.4.2/SystemUI.uno
// --------------------------------------------------------------

// internal enum SysUIState :21
uEnumType* SysUIState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Platform.SysUIState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "StatusBarHidden", 1LL,
        "Fullscreen", 2LL);
    return type;
}

}}} // ::g::Fuse::Platform
