// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.4.2/Actions/Callback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-fcab7e57.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Callback;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Callback :25
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();
void Callback__get_Action_fn(Callback* __this, uDelegate** __retval);
void Callback__set_Action_fn(Callback* __this, uDelegate* value);
void Callback__add_Handler_fn(Callback* __this, uDelegate* value);
void Callback__remove_Handler_fn(Callback* __this, uDelegate* value);
void Callback__Perform_fn(Callback* __this, ::g::Fuse::Node* target);

struct Callback : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uDelegate*> _Action;
    uStrong<uDelegate*> Handler1;

    uDelegate* Action();
    void Action(uDelegate* value);
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
