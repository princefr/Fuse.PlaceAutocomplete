// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.2/.uno/ux13/Fuse.Controls.TextControl.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl__Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class TextControl.Template :7
// {
::g::Uno::UX::Template_type* TextControl__Template_typeof();
void TextControl__Template__ctor_1_fn(TextControl__Template* __this, ::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
void TextControl__Template__New1_fn(TextControl__Template* __this, uObject** __retval);
void TextControl__Template__New2_fn(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance, TextControl__Template** __retval);

struct TextControl__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Fuse::Controls::TextControl*> __parent1;
    uWeak< ::g::Fuse::Controls::TextControl*> __parentInstance1;

    void ctor_1(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
    static TextControl__Template* New2(::g::Fuse::Controls::TextControl* parent, ::g::Fuse::Controls::TextControl* parentInstance);
};
// }

}}} // ::g::Fuse::Controls
