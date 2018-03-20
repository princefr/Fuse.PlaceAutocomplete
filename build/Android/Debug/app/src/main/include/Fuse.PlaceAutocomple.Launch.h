// This file was generated based on AndroidImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.String.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace PlaceAutocomple{struct Launch;}}}

namespace g{
namespace Fuse{
namespace PlaceAutocomple{

// internal sealed extern class Launch :23
// {
::g::Uno::Threading::Future_type* Launch_typeof();
void Launch__ctor_7_fn(Launch* __this);
void Launch__Init_fn(Launch* __this);
void Launch__New5_fn(Launch** __retval);
void Launch__Reject1_fn(Launch* __this, uString* reason);
void Launch__Resolve1_fn(Launch* __this, uString* message);

struct Launch : ::g::Uno::Threading::Promise
{
    void ctor_7();
    void Init();
    void Reject1(uString* reason);
    void Resolve1(uString* message);
    static Launch* New5();
};
// }

}}} // ::g::Fuse::PlaceAutocomple
