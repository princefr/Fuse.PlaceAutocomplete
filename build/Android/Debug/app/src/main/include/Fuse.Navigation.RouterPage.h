// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/RouterPage.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct PagesMap;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObserverMap;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class RouterPage :22
// {
uType* RouterPage_typeof();
void RouterPage__ctor__fn(RouterPage* __this, uString* path, uString* parameter, uObject* context);
void RouterPage__BubbleHistoryChanged_fn(::g::Fuse::Node* at);
void RouterPage__get_ChildRouterPages_fn(RouterPage* __this, ::g::Fuse::Reactive::ObserverMap** __retval);
void RouterPage__add_ChildRouterPagesUpdated_fn(RouterPage* __this, uDelegate* value);
void RouterPage__remove_ChildRouterPagesUpdated_fn(RouterPage* __this, uDelegate* value);
void RouterPage__CreateDefault_fn(RouterPage** __retval);
void RouterPage__DefaultPath_fn(RouterPage* __this, uString* defaultPath);
void RouterPage__New1_fn(uString* path, uString* parameter, uObject* context, RouterPage** __retval);
void RouterPage__get_Path_fn(RouterPage* __this, uString** __retval);
void RouterPage__set_Path_fn(RouterPage* __this, uString* value);
void RouterPage__ToPathString_fn(RouterPage* __this, uString** __retval);
void RouterPage__ToString_fn(RouterPage* __this, uString** __retval);

struct RouterPage : uObject
{
    uStrong<uString*> Parameter;
    uStrong<uObject*> Context;
    uStrong< ::g::Fuse::Navigation::PagesMap*> _childRouterPages;
    uStrong<uString*> _Path;

    void ctor_(uString* path, uString* parameter, uObject* context);
    ::g::Fuse::Reactive::ObserverMap* ChildRouterPages();
    void add_ChildRouterPagesUpdated(uDelegate* value);
    void remove_ChildRouterPagesUpdated(uDelegate* value);
    void DefaultPath(uString* defaultPath);
    uString* Path();
    void Path(uString* value);
    uString* ToPathString();
    static void BubbleHistoryChanged(::g::Fuse::Node* at);
    static RouterPage* CreateDefault();
    static RouterPage* New1(uString* path, uString* parameter, uObject* context);
};
// }

}}} // ::g::Fuse::Navigation
