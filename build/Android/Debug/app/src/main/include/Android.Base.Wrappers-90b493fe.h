// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Wrappers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace Base{
namespace Wrappers{

// public abstract extern interface IJWrapper :20
// {
uInterfaceType* IJWrapper_typeof();

struct IJWrapper
{
    void(*fp__GetJavaObject)(uObject*, jobject*);
    void(*fp__IsSubclassed)(uObject*, bool*);
    static jobject _GetJavaObject(const uInterface& __this) { jobject __retval; return __this.VTable<IJWrapper>()->fp__GetJavaObject(__this, &__retval), __retval; }
    static bool _IsSubclassed(const uInterface& __this) { bool __retval; return __this.VTable<IJWrapper>()->fp__IsSubclassed(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Android::Base::Wrappers
