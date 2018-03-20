// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/Route.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Route :13
// {
uType* Route_typeof();
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute);
void Route__get_Length_fn(Route* __this, int* __retval);
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval);

struct Route : uObject
{
    uStrong<uString*> Path;
    uStrong<uString*> Parameter;
    uStrong<Route*> SubRoute;
    uStrong< ::g::Fuse::Navigation::RouterPage*> RouterPage;

    void ctor_(uString* path, uString* parameter, Route* subRoute);
    int Length();
    static Route* New1(uString* path, uString* parameter, Route* subRoute);
};
// }

}}} // ::g::Fuse::Navigation
