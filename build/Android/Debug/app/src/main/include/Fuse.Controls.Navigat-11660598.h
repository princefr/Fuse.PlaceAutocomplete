// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.4.2/Navigator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__DeferSwitch;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Navigator.DeferSwitch :637
// {
uType* Navigator__DeferSwitch_typeof();
void Navigator__DeferSwitch__ctor__fn(Navigator__DeferSwitch* __this);
void Navigator__DeferSwitch__New1_fn(Navigator__DeferSwitch** __retval);

struct Navigator__DeferSwitch : uObject
{
    uStrong< ::g::Fuse::Controls::Navigator__NavPage*> Page;
    int GotoMode;
    int Operation;

    void ctor_();
    static Navigator__DeferSwitch* New1();
};
// }

}}} // ::g::Fuse::Controls
