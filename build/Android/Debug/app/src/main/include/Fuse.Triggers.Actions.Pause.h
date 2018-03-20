// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.4.2/Actions/Playback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions-baf069a8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Pause;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Pause :144
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();
void Pause__Perform_fn(Pause* __this, ::g::Fuse::Node* target);

struct Pause : ::g::Fuse::Triggers::Actions::PlaybackAction
{
};
// }

}}}} // ::g::Fuse::Triggers::Actions
