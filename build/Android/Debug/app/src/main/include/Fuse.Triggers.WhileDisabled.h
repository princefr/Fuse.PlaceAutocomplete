// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.4.2/Disabled.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileEn-fb4c6c6e.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileDisabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileDisabled :39
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();
void WhileDisabled__ctor_7_fn(WhileDisabled* __this);
void WhileDisabled__get_IsActive_fn(WhileDisabled* __this, bool* __retval);
void WhileDisabled__New2_fn(WhileDisabled** __retval);

struct WhileDisabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_7();
    static WhileDisabled* New2();
};
// }

}}} // ::g::Fuse::Triggers
