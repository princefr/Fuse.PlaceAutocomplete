// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Platform/EventSources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Platform{namespace EventSources{struct HardwareKeys;}}}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}

namespace g{
namespace Uno{
namespace Platform{
namespace EventSources{

// public static class HardwareKeys :40
// {
uClassType* HardwareKeys_typeof();
void HardwareKeys__add_KeyDown_fn(uDelegate* value);
void HardwareKeys__remove_KeyDown_fn(uDelegate* value);
void HardwareKeys__add_KeyUp_fn(uDelegate* value);
void HardwareKeys__remove_KeyUp_fn(uDelegate* value);
void HardwareKeys__OnKeyDown_fn(int* key, int* modifiers, bool* __retval);
void HardwareKeys__OnKeyUp_fn(int* key, int* modifiers, bool* __retval);

struct HardwareKeys : uObject
{
    static uSStrong<uDelegate*> KeyDown1_;
    static uSStrong<uDelegate*>& KeyDown1() { return KeyDown1_; }
    static uSStrong<uDelegate*> KeyUp1_;
    static uSStrong<uDelegate*>& KeyUp1() { return KeyUp1_; }

    static bool OnKeyDown(int key, int modifiers);
    static bool OnKeyUp(int key, int modifiers);
    static void add_KeyDown(uDelegate* value);
    static void remove_KeyDown(uDelegate* value);
    static void add_KeyUp(uDelegate* value);
    static void remove_KeyUp(uDelegate* value);
};
// }

}}}} // ::g::Uno::Platform::EventSources
