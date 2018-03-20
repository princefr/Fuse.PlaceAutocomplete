// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Platform/KeyEventArgs.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{namespace Platform{struct OSFrame;}}}

namespace g{
namespace Uno{
namespace Platform{

// public sealed class KeyEventArgs :6
// {
uType* KeyEventArgs_typeof();
void KeyEventArgs__ctor_1_fn(KeyEventArgs* __this, int* key, int* modifiers, ::g::Uno::Platform::OSFrame* origin);
void KeyEventArgs__get_Handled_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__set_Handled_fn(KeyEventArgs* __this, bool* value);
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval);
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int* value);
void KeyEventArgs__get_Modifiers_fn(KeyEventArgs* __this, int* __retval);
void KeyEventArgs__set_Modifiers_fn(KeyEventArgs* __this, int* value);
void KeyEventArgs__New2_fn(int* key, int* modifiers, ::g::Uno::Platform::OSFrame* origin, KeyEventArgs** __retval);
void KeyEventArgs__get_Origin_fn(KeyEventArgs* __this, ::g::Uno::Platform::OSFrame** __retval);
void KeyEventArgs__set_Origin_fn(KeyEventArgs* __this, ::g::Uno::Platform::OSFrame* value);

struct KeyEventArgs : ::g::Uno::EventArgs
{
    bool _Handled;
    int _Key;
    int _Modifiers;
    uStrong< ::g::Uno::Platform::OSFrame*> _Origin;

    void ctor_1(int key, int modifiers, ::g::Uno::Platform::OSFrame* origin);
    bool Handled();
    void Handled(bool value);
    bool IsAltKeyPressed();
    bool IsControlKeyPressed();
    bool IsMetaKeyPressed();
    bool IsShiftKeyPressed();
    int Key();
    void Key(int value);
    int Modifiers();
    void Modifiers(int value);
    ::g::Uno::Platform::OSFrame* Origin();
    void Origin(::g::Uno::Platform::OSFrame* value);
    static KeyEventArgs* New2(int key, int modifiers, ::g::Uno::Platform::OSFrame* origin);
};
// }

}}} // ::g::Uno::Platform
