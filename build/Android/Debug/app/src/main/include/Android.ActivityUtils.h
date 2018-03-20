// This file was generated based on '../../Library/Application Support/Fusetools/Packages/Android.ActivityUtils/1.4.2/ActivityUtils.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Android{struct ActivityUtils;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Android{

// public static extern class ActivityUtils :13
// {
uClassType* ActivityUtils_typeof();
void ActivityUtils__Init_fn(::g::Java::Object** __retval);
void ActivityUtils__OnReceived_fn(int* requestCode, int* resultCode, ::g::Java::Object* data, bool* __retval);
void ActivityUtils__add_Results_fn(uDelegate* value);
void ActivityUtils__remove_Results_fn(uDelegate* value);

struct ActivityUtils : uObject
{
    static uSStrong< ::g::Java::Object*> _intentListener_;
    static uSStrong< ::g::Java::Object*>& _intentListener() { return ActivityUtils_typeof()->Init(), _intentListener_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingResults_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingResults() { return ActivityUtils_typeof()->Init(), _pendingResults_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingInfos_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingInfos() { return ActivityUtils_typeof()->Init(), _pendingInfos_; }
    static uSStrong<uDelegate*> Results1_;
    static uSStrong<uDelegate*>& Results1() { return ActivityUtils_typeof()->Init(), Results1_; }

    static ::g::Java::Object* Init();
    static bool OnReceived(int requestCode, int resultCode, ::g::Java::Object* data);
    static void add_Results(uDelegate* value);
    static void remove_Results(uDelegate* value);
};
// }

}} // ::g::Android
