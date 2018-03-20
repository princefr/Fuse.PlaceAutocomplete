// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Platform/Android/AndroidDisplay.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Platform.Display.h>
namespace g{namespace Uno{namespace Platform{struct AndroidDisplay;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed extern class AndroidDisplay :10
// {
::g::Uno::Platform::Display_type* AndroidDisplay_typeof();
void AndroidDisplay__ctor_1_fn(AndroidDisplay* __this);
void AndroidDisplay___getDensity_fn(float* __retval);
void AndroidDisplay__DisableTicks_fn(AndroidDisplay* __this);
void AndroidDisplay__EnableTicks_fn(AndroidDisplay* __this);
void AndroidDisplay__GetDensity_fn(AndroidDisplay* __this, float* __retval);
void AndroidDisplay__JavaEnableTicks_fn(AndroidDisplay* __this);
void AndroidDisplay__New1_fn(AndroidDisplay** __retval);
void AndroidDisplay__OnFrameCallback_fn(AndroidDisplay* __this, double* currentTime, double* deltaTime);

struct AndroidDisplay : ::g::Uno::Platform::Display
{
    static bool _initialized_;
    static bool& _initialized() { return _initialized_; }

    void ctor_1();
    void JavaEnableTicks();
    void OnFrameCallback(double currentTime, double deltaTime);
    static float _getDensity();
    static AndroidDisplay* New1();
};
// }

}}} // ::g::Uno::Platform
