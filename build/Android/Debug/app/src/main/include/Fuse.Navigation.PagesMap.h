// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/RouterPage.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.RouterPage.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ObserverMap-1.h>
namespace g{namespace Fuse{namespace Navigation{struct PagesMap;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class PagesMap :96
// {
::g::Fuse::Reactive::ObserverMap_type* PagesMap_typeof();
void PagesMap__ctor_1_fn(PagesMap* __this);
void PagesMap__GetObjectPath_fn(uObject* data, uString** __retval);
void PagesMap__Map_fn(PagesMap* __this, uObject* v, ::g::Fuse::Navigation::RouterPage** __retval);
void PagesMap__New1_fn(PagesMap** __retval);
void PagesMap__OnUpdated_fn(PagesMap* __this);
void PagesMap__Unmap_fn(PagesMap* __this, ::g::Fuse::Navigation::RouterPage* mv, uObject** __retval);
void PagesMap__add_Updated_fn(PagesMap* __this, uDelegate* value);
void PagesMap__remove_Updated_fn(PagesMap* __this, uDelegate* value);

struct PagesMap : ::g::Fuse::Reactive::ObserverMap
{
    uStrong<uDelegate*> Updated1;

    void ctor_1();
    void add_Updated(uDelegate* value);
    void remove_Updated(uDelegate* value);
    static uString* GetObjectPath(uObject* data);
    static PagesMap* New1();
};
// }

}}} // ::g::Fuse::Navigation
