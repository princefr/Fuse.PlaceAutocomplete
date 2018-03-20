// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/Router.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IPreviewStateSaver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IBase-84e3f965.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPageRoute;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public partial sealed class Router :5
// {
struct Router_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Navigation::IBaseNavigation interface6;
    ::g::Fuse::IPreviewStateSaver interface7;
};

Router_type* Router_typeof();
void Router__AsRouterOutlet_fn(::g::Fuse::Node* n, uObject** __retval);
void Router__get_BackButtonAction_fn(Router* __this, int* __retval);
void Router__set_BackButtonAction_fn(Router* __this, int* value);
void Router__Bookmark_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__CancelNavigation_fn(Router* __this);
void Router__get_CanGoBack_fn(Router* __this, bool* __retval);
void Router__ClearPrepared_fn(Router* __this);
void Router__EnumerateHistory_fn(Router* __this, uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp, bool* __retval);
void Router__FindOutletDown_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval);
void Router__FindOutletUp_fn(Router* __this, ::g::Fuse::Node* active, uObject** __retval);
void Router__FindOutletUp1_fn(Router* __this, ::g::Fuse::Node* active, ::g::Fuse::Node** page, uObject** __retval);
void Router__FindRouterOutletPage_fn(::g::Fuse::Node* from, ::g::Fuse::Visual** __retval);
void Router__FinishPrepared_fn(Router* __this);
void Router__FuseNavigationIBaseNavigationget_CanGoForward_fn(Router* __this, bool* __retval);
void Router__FuseNavigationIBaseNavigationGoForward_fn(Router* __this);
void Router__GetCurrent_fn(Router* __this, ::g::Fuse::Visual* from, uObject* to, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GetCurrentRoute_fn(Router* __this, ::g::Fuse::Navigation::Route** __retval);
void Router__GetCurrentRouterPageRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GetHistoryRoute_fn(Router* __this, int* at, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GetOutletDepth_fn(Router* __this, uObject* outlet, int* __retval);
void Router__GetRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GetRelativeRoute1_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute* rel, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GetRoute_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__GetRouteUpToRouter_fn(Router* __this, ::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__GoBack_fn(Router* __this);
void Router__GoBack1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__Goto1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__GotoRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__GoUp_fn(Router* __this);
void Router__HasOtherRouter_fn(Router* __this, ::g::Fuse::Visual* n, bool* __retval);
void Router__HasRouter_fn(::g::Fuse::Node* n, bool* __retval);
void Router__add_HistoryChanged_fn(Router* __this, uDelegate* value);
void Router__remove_HistoryChanged_fn(Router* __this, uDelegate* value);
void Router__get_IsMasterRouter_fn(Router* __this, bool* __retval);
void Router__set_IsMasterRouter_fn(Router* __this, bool* value);
void Router__Modify1_fn(Router* __this, int* how, ::g::Fuse::Navigation::RouterPageRoute* route, int* mode, uString* operationStyle);
void Router__Modify2_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__OnHistoryChanged_fn(Router* __this);
void Router__OnKeyPressed_fn(Router* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
void Router__OnRooted_fn(Router* __this);
void Router__OnUnrooted_fn(Router* __this);
void Router__OnUpFromRoot_fn(Router* __this);
void Router__Pop_fn(Router* __this);
void Router__get_PrepareProgress_fn(Router* __this, double* __retval);
void Router__set_PrepareProgress_fn(Router* __this, double* value);
void Router__PrepareRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute* r, int* operation, uString* operationStyle);
void Router__Push1_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__PushRelative_fn(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
void Router__get_RootPage_fn(Router* __this, ::g::Fuse::Navigation::RouterPage** __retval);
void Router__SetPrepareProgress_fn(Router* __this, double* value);
void Router__SetRoute_fn(Router* __this, ::g::Fuse::Navigation::RouterPageRoute* r, int* gotoMode, int* operation, uString* operationStyle, bool* userRequest, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__SetRouteImpl_fn(Router* __this, ::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::RouterPageRoute* r, int* gotoMode, int* operation, uString* operationStyle, uObject** majorChange, bool* canReuse, ::g::Fuse::Navigation::RouterPageRoute** __retval);
void Router__TryFindRouter_fn(::g::Fuse::Node* n, Router** __retval);

struct Router : ::g::Fuse::Node
{
    bool _isMasterRouter;
    int _backButtonAction;
    uStrong< ::g::Uno::Collections::Dictionary*> Bookmarks;
    uStrong< ::g::Fuse::Navigation::RouterPageRoute*> _prepareCurrent;
    uStrong< ::g::Fuse::Navigation::RouterPageRoute*> _prepareNext;
    int _prepareOperation;
    uStrong<uString*> _prepareOperationStyle;
    double _prepareProgress;
    uStrong<uObject*> _prepareOutlet;
    uStrong< ::g::Fuse::Navigation::RouterPage*> _rootPage;
    uStrong<uDelegate*> HistoryChanged1;

    int BackButtonAction();
    void BackButtonAction(int value);
    void CancelNavigation();
    bool CanGoBack();
    void ClearPrepared();
    bool EnumerateHistory(uDelegate* action, ::g::Uno::Collections::List* stack, ::g::Fuse::Navigation::RouterPage* rp);
    uObject* FindOutletDown(::g::Fuse::Node* active);
    uObject* FindOutletUp(::g::Fuse::Node* active);
    uObject* FindOutletUp1(::g::Fuse::Node* active, ::g::Fuse::Node** page);
    void FinishPrepared();
    ::g::Fuse::Navigation::RouterPageRoute* GetCurrent(::g::Fuse::Visual* from, uObject* to);
    ::g::Fuse::Navigation::Route* GetCurrentRoute();
    ::g::Fuse::Navigation::RouterPageRoute* GetCurrentRouterPageRoute();
    ::g::Fuse::Navigation::RouterPageRoute* GetHistoryRoute(int at);
    int GetOutletDepth(uObject* outlet);
    ::g::Fuse::Navigation::RouterPageRoute* GetRelativeRoute1(::g::Fuse::Node* from, ::g::Fuse::Navigation::RouterPageRoute* rel);
    ::g::Fuse::Navigation::RouterPageRoute* GetRouteUpToRouter(::g::Fuse::Node* from);
    void GoBack();
    void GoUp();
    bool HasOtherRouter(::g::Fuse::Visual* n);
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    bool IsMasterRouter();
    void IsMasterRouter(bool value);
    void Modify1(int how, ::g::Fuse::Navigation::RouterPageRoute* route, int mode, uString* operationStyle);
    void OnHistoryChanged();
    void OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
    void OnUpFromRoot();
    void Pop();
    double PrepareProgress();
    void PrepareProgress(double value);
    void PrepareRoute(::g::Fuse::Navigation::RouterPageRoute* r, int operation, uString* operationStyle);
    ::g::Fuse::Navigation::RouterPage* RootPage();
    void SetPrepareProgress(double value);
    ::g::Fuse::Navigation::RouterPageRoute* SetRoute(::g::Fuse::Navigation::RouterPageRoute* r, int gotoMode, int operation, uString* operationStyle, bool userRequest);
    ::g::Fuse::Navigation::RouterPageRoute* SetRouteImpl(::g::Fuse::Visual* root, ::g::Fuse::Navigation::RouterPage* rootPage, ::g::Fuse::Navigation::RouterPageRoute* r, int gotoMode, int operation, uString* operationStyle, uObject** majorChange, bool canReuse);
    static uObject* AsRouterOutlet(::g::Fuse::Node* n);
    static void Bookmark(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static ::g::Fuse::Visual* FindRouterOutletPage(::g::Fuse::Node* from);
    static ::g::Fuse::Navigation::RouterPageRoute* GetRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void GetRoute(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void GoBack1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void Goto1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void GotoRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static bool HasRouter(::g::Fuse::Node* n);
    static void Modify2(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void Push1(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static void PushRelative(::g::Fuse::Scripting::Context* c, Router* r, uArray* args);
    static Router* TryFindRouter(::g::Fuse::Node* n);
};
// }

}}} // ::g::Fuse::Navigation
