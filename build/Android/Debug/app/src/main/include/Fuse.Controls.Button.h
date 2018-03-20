// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.2/Button.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Button :67
// {
::g::Fuse::Controls::Panel_type* Button_typeof();
void Button__ctor_8_fn(Button* __this);
void Button__InitializeUX_fn(Button* __this);
void Button__New5_fn(Button** __retval);

struct Button : ::g::Fuse::Controls::ButtonBase
{
    void ctor_8();
    void InitializeUX();
    static Button* New5();
};
// }

}}} // ::g::Fuse::Controls
