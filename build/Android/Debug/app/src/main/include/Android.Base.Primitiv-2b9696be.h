// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// public extern struct ujobject :175
// {
uStructType* ujobject_typeof();
void ujobject__get_Null_fn(jobject* __retval);
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval);
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval);
void ujobject__op_Implicit1_fn(jobject* v, jclass* __retval);
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval);

struct ujobject
{
    static bool op_Equality(jobject lhs, jobject rhs);
    static jobject op_Implicit(jclass v);
    static jclass op_Implicit1(jobject v);
    static bool op_Inequality(jobject lhs, jobject rhs);
    static jobject Null();
};
// }

}}}} // ::g::Android::Base::Primitives
