// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/IRouterOutlet.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface IRouterOutlet :42
// {
uInterfaceType* IRouterOutlet_typeof();

struct IRouterOutlet
{
    void(*fp_CancelPrepare)(uObject*);
    void(*fp_CompareCurrent)(uObject*, ::g::Fuse::Navigation::RouterPage*, ::g::Fuse::Visual**, int*);
    void(*fp_GetCurrent)(uObject*, ::g::Fuse::Visual**, ::g::Fuse::Navigation::RouterPage**);
    void(*fp_Goto)(uObject*, ::g::Fuse::Navigation::RouterPage*, int*, int*, uString*, ::g::Fuse::Visual**, int*);
    void(*fp_PartialPrepareGoto)(uObject*, double*);
    void(*fp_get_Type)(uObject*, int*);
    static void CancelPrepare(const uInterface& __this) { __this.VTable<IRouterOutlet>()->fp_CancelPrepare(__this); }
    static int CompareCurrent(const uInterface& __this, ::g::Fuse::Navigation::RouterPage* page, ::g::Fuse::Visual** visual) { int __retval; return __this.VTable<IRouterOutlet>()->fp_CompareCurrent(__this, page, visual, &__retval), __retval; }
    static ::g::Fuse::Navigation::RouterPage* GetCurrent(const uInterface& __this, ::g::Fuse::Visual** visual) { ::g::Fuse::Navigation::RouterPage* __retval; return __this.VTable<IRouterOutlet>()->fp_GetCurrent(__this, visual, &__retval), __retval; }
    static int Goto(const uInterface& __this, ::g::Fuse::Navigation::RouterPage* page, int gotoMode, int operation, uString* operationStyle, ::g::Fuse::Visual** visual) { int __retval; return __this.VTable<IRouterOutlet>()->fp_Goto(__this, page, &gotoMode, &operation, operationStyle, visual, &__retval), __retval; }
    static void PartialPrepareGoto(const uInterface& __this, double progress) { __this.VTable<IRouterOutlet>()->fp_PartialPrepareGoto(__this, &progress); }
    static int Type(const uInterface& __this) { int __retval; return __this.VTable<IRouterOutlet>()->fp_get_Type(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Navigation
