// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.4.2/DynamicLinearNavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IBase-84e3f965.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.ISeek-75d60b5e.h>
#include <Fuse.Navigation.Visua-f5708ad5.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}
namespace g{namespace Fuse{namespace Navigation{struct DynamicLinearNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class DynamicLinearNavigation :13
// {
struct DynamicLinearNavigation_type : ::g::Fuse::Navigation::VisualNavigation_type
{
    ::g::Fuse::Navigation::ISeekableNavigation interface9;
};

DynamicLinearNavigation_type* DynamicLinearNavigation_typeof();
void DynamicLinearNavigation__get_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval);
void DynamicLinearNavigation__set_Active_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* value);
void DynamicLinearNavigation__AnimationDone_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__get_Back_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval);
void DynamicLinearNavigation__get_CanGoBack_fn(DynamicLinearNavigation* __this, bool* __retval);
void DynamicLinearNavigation__get_CanGoForward_fn(DynamicLinearNavigation* __this, bool* __retval);
void DynamicLinearNavigation__ChangeProgress_fn(DynamicLinearNavigation* __this, float* prev, float* next, int* mode);
void DynamicLinearNavigation__CheckNeedUpdate_fn(DynamicLinearNavigation* __this, bool* off);
void DynamicLinearNavigation__ClampProgress1_fn(DynamicLinearNavigation* __this, int* progress, int* __retval);
void DynamicLinearNavigation__CleanupListenComplete_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__ClearForwardHistory_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__DesiredTransition_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target);
void DynamicLinearNavigation__DirectSetActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page);
void DynamicLinearNavigation__get_Front_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval);
void DynamicLinearNavigation__FuseNavigationISeekableNavigationBeginSeek_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__FuseNavigationISeekableNavigationEndSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::EndSeekArgs* args);
void DynamicLinearNavigation__FuseNavigationISeekableNavigationSeek_fn(DynamicLinearNavigation* __this, ::g::Fuse::Navigation::UpdateSeekArgs* args);
void DynamicLinearNavigation__GetPageState_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void DynamicLinearNavigation__GoBack_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__GoForward_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__Goto_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void DynamicLinearNavigation__GotoDesiredActive_fn(DynamicLinearNavigation* __this, bool* __retval);
void DynamicLinearNavigation__GotoDesiredActiveAction_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__GotoImpl_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void DynamicLinearNavigation__GotoInternal_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void DynamicLinearNavigation__get_MaxIndex_fn(DynamicLinearNavigation* __this, int* __retval);
void DynamicLinearNavigation__get_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig** __retval);
void DynamicLinearNavigation__set_Motion_fn(DynamicLinearNavigation* __this, ::g::Fuse::Motion::MotionConfig* value);
void DynamicLinearNavigation__get_Next_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval);
void DynamicLinearNavigation__OnChildAddedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child);
void DynamicLinearNavigation__OnChildRemovedWhileRooted_fn(DynamicLinearNavigation* __this, ::g::Fuse::Node* child);
void DynamicLinearNavigation__OnRooted_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__OnUnrooted_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__OnUpdated_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__get_Previous_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual** __retval);
void DynamicLinearNavigation__get_Progress_fn(DynamicLinearNavigation* __this, float* __retval);
void DynamicLinearNavigation__ResetRegionLimits_fn(DynamicLinearNavigation* __this);
void DynamicLinearNavigation__SetDesiredActive_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* page);
void DynamicLinearNavigation__SetProgress_fn(DynamicLinearNavigation* __this, float* value);
void DynamicLinearNavigation__TransitionToChild_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* element, bool* bypass, bool* clamp, bool* __retval);
void DynamicLinearNavigation__UpdateDesired_fn(DynamicLinearNavigation* __this, ::g::Fuse::Visual* target, int* index);

struct DynamicLinearNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Motion::MotionConfig*> _motion;
    uStrong<uObject*> _region;
    int _desired;
    uStrong< ::g::Fuse::Visual*> _desiredActive;
    int _desiredIndex;
    uStrong< ::g::Fuse::Visual*> _listenComplete;
    bool _hasUpdated;
    float _progress;
    float _prevProgress;
    static ::g::Uno::UX::Selector DesiredActiveName_;
    static ::g::Uno::UX::Selector& DesiredActiveName() { return DesiredActiveName_; }
    static ::g::Uno::UX::Selector DesiredActiveIndexName_;
    static ::g::Uno::UX::Selector& DesiredActiveIndexName() { return DesiredActiveIndexName_; }
    bool _queueClearForwardHistory;
    uStrong< ::g::Fuse::Visual*> _active;
    float _seekBase;

    void AnimationDone();
    ::g::Fuse::Visual* Back();
    void ChangeProgress(float prev, float next, int mode);
    void CheckNeedUpdate(bool off);
    int ClampProgress1(int progress);
    void CleanupListenComplete();
    void ClearForwardHistory();
    void DesiredTransition(::g::Fuse::Visual* target);
    void DirectSetActive(::g::Fuse::Visual* page);
    ::g::Fuse::Visual* Front();
    bool GotoDesiredActive();
    void GotoDesiredActiveAction();
    void GotoImpl(::g::Fuse::Visual* element, int mode);
    void GotoInternal(::g::Fuse::Visual* element, int mode);
    int MaxIndex();
    ::g::Fuse::Motion::MotionConfig* Motion();
    void Motion(::g::Fuse::Motion::MotionConfig* value);
    ::g::Fuse::Visual* Next();
    void OnUpdated();
    ::g::Fuse::Visual* Previous();
    float Progress();
    void ResetRegionLimits();
    void SetDesiredActive(::g::Fuse::Visual* page);
    void SetProgress(float value);
    bool TransitionToChild(::g::Fuse::Visual* element, bool bypass, bool clamp);
    void UpdateDesired(::g::Fuse::Visual* target, int index);
};
// }

}}} // ::g::Fuse::Navigation
