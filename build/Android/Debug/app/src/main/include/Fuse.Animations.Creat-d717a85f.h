// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.4.2/Animator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class CreateStateParams :101
// {
uType* CreateStateParams_typeof();
void CreateStateParams__ctor__fn(CreateStateParams* __this);
void CreateStateParams__New1_fn(CreateStateParams** __retval);

struct CreateStateParams : uObject
{
    int Variant;
    double TotalDuration;
    uStrong< ::g::Fuse::Visual*> Attached;

    void ctor_();
    static CreateStateParams* New1();
};
// }

}}} // ::g::Fuse::Animations
