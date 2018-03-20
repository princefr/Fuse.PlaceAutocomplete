// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/TriggerActions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.Navig-7d6b9b9f.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateToggle;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateToggle :108
// {
::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();
void NavigateToggle__Perform1_fn(NavigateToggle* __this, uObject* ctx, ::g::Fuse::Node* n);
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval);
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value);

struct NavigateToggle : ::g::Fuse::Navigation::NavigationTriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}} // ::g::Fuse::Navigation
