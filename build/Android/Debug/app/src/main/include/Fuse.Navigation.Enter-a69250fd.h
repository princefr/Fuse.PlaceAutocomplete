// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/NavigationAnimations.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.Enter-2bf42e15.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct EnteringAnimation;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public class EnteringAnimation :226
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();
void EnteringAnimation__ctor_7_fn(EnteringAnimation* __this);
void EnteringAnimation__New2_fn(EnteringAnimation** __retval);

struct EnteringAnimation : ::g::Fuse::Navigation::EnterExitAnimation
{
    void ctor_7();
    static EnteringAnimation* New2();
};
// }

}}} // ::g::Fuse::Navigation
