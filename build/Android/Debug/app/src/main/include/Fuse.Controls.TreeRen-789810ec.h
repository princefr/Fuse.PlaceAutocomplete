// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.4.2/TreeRenderer.Android.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-e502cdf1.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{struct TreeRenderer__ViewGroup;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class TreeRenderer.ViewGroup :15
// {
::g::Fuse::Controls::Native::ViewHandle_type* TreeRenderer__ViewGroup_typeof();
void TreeRenderer__ViewGroup__ctor_4_fn(TreeRenderer__ViewGroup* __this, ::g::Fuse::Controls::Native::ViewHandle* content);
void TreeRenderer__ViewGroup__Dispose_fn(TreeRenderer__ViewGroup* __this);
void TreeRenderer__ViewGroup__Measure_fn(TreeRenderer__ViewGroup* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval);
void TreeRenderer__ViewGroup__New5_fn(::g::Fuse::Controls::Native::ViewHandle* content, TreeRenderer__ViewGroup** __retval);

struct TreeRenderer__ViewGroup : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _content;

    void ctor_4(::g::Fuse::Controls::Native::ViewHandle* content);
    static TreeRenderer__ViewGroup* New5(::g::Fuse::Controls::Native::ViewHandle* content);
};
// }

}}} // ::g::Fuse::Controls
