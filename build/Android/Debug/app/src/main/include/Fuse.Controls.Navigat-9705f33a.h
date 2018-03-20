// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.4.2/NavigationInternal/ExitVertical.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.Exiti-99f47629.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct ExitVertical;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class ExitVertical :9
// {
::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof();
void ExitVertical__ctor_8_fn(ExitVertical* __this);
void ExitVertical__InitializeUX_fn(ExitVertical* __this);
void ExitVertical__New3_fn(ExitVertical** __retval);

struct ExitVertical : ::g::Fuse::Navigation::ExitingAnimation
{
    void ctor_8();
    void InitializeUX();
    static ExitVertical* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
