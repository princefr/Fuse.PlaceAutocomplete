// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.2/.uno/ux13/Fuse.Controls.Button.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Button__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Button.Template1 :60
// {
::g::Uno::UX::Template_type* Button__Template1_typeof();
void Button__Template1__ctor_1_fn(Button__Template1* __this, ::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
void Button__Template1__New1_fn(Button__Template1* __this, uObject** __retval);
void Button__Template1__New2_fn(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance, Button__Template1** __retval);

struct Button__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::Button*> __parent1;
    uWeak< ::g::Fuse::Controls::Button*> __parentInstance1;

    void ctor_1(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
    static Button__Template1* New2(::g::Fuse::Controls::Button* parent, ::g::Fuse::Controls::Button* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
