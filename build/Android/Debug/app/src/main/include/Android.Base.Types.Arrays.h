// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Types.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Arrays;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Arrays :129
// {
uClassType* Arrays_typeof();
void Arrays__JavaToUnoByteArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval);

struct Arrays : uObject
{
    static uArray* JavaToUnoByteArray1(jobject arr_, int64_t len_);
};
// }

}}}} // ::g::Android::Base::Types
