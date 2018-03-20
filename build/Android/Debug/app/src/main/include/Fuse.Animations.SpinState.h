// This file was generated based on /usr/local/share/uno/Packages/Fuse.Animations/1.4.2/Spin.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenA-dfad1354.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Spin;}}}
namespace g{namespace Fuse{namespace Animations{struct SpinState;}}}
namespace g{namespace Fuse{struct Rotation;}}
namespace g{namespace Fuse{struct Transform;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class SpinState :47
// {
::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof();
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p);
void SpinState__Disable_fn(SpinState* __this);
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval);
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval);

struct SpinState : ::g::Fuse::Animations::OpenAnimatorState
{
    uStrong< ::g::Fuse::Animations::Spin*> Animator1;
    uStrong<uObject*> mixHandle;
    uStrong< ::g::Fuse::Rotation*> transform;
    double degrees;

    void ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p);
    static SpinState* New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations
