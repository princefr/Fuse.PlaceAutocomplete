// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-2924c081.h>
#include <Android.Base.Primitiv-2b9696be.h>
#include <Android.Base.Primitiv-30a77109.h>
#include <Android.Base.Primitiv-45253430.h>
#include <Android.Base.Primitiv-65373fdf.h>
#include <Android.Base.Primitiv-712df2f8.h>
#include <Android.Base.Primitiv-75a2ab27.h>
#include <Android.Base.Primitiv-7eef1e73.h>
#include <Android.Base.Primitiv-a6e942de.h>
#include <Android.Base.Primitiv-ae5fb0f1.h>
#include <Android.Base.Primitiv-b7b09a.h>
#include <Android.Base.Primitiv-c95fb41d.h>
#include <Android.Base.Primitiv-e437692f.h>
#include <Android.Base.Primitiv-e52e9f29.h>
#include <Android.Base.Primitives.jweak.h>
#include <Android.Base.Primitives.ujbyte.h>
#include <Android.Base.Primitives.ujchar.h>
#include <Android.Base.Primitives.ujint.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitiv-f2634ec4.h>
#include <Uno.Bool.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ConstCharPtr :9
// {
static void ConstCharPtr_build(uType* type)
{
}

uStructType* ConstCharPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(const char*);
    options.ValueSize = sizeof(const char*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ConstCharPtr", options);
    type->fp_build_ = ConstCharPtr_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct JavaVMPtr :12
// {
static void JavaVMPtr_build(uType* type)
{
}

uStructType* JavaVMPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(JavaVM*);
    options.ValueSize = sizeof(JavaVM*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JavaVMPtr", options);
    type->fp_build_ = JavaVMPtr_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct jfieldID :144
// {
static void jfieldID_build(uType* type)
{
}

uStructType* jfieldID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jfieldID);
    options.ValueSize = sizeof(jfieldID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jfieldID", options);
    type->fp_build_ = jfieldID_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct jmethodID :139
// {
static void jmethodID_build(uType* type)
{
}

uStructType* jmethodID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jmethodID);
    options.ValueSize = sizeof(jmethodID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jmethodID", options);
    type->fp_build_ = jmethodID_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct JNIEnvPtr :15
// {
static void JNIEnvPtr_build(uType* type)
{
}

uStructType* JNIEnvPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(JNIEnv*);
    options.ValueSize = sizeof(JNIEnv*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNIEnvPtr", options);
    type->fp_build_ = JNIEnvPtr_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct JNINativeMethod :136
// {
static void JNINativeMethod_build(uType* type)
{
}

uStructType* JNINativeMethod_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(JNINativeMethod);
    options.ValueSize = sizeof(JNINativeMethod);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNINativeMethod", options);
    type->fp_build_ = JNINativeMethod_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct jweak :18
// {
static void jweak_build(uType* type)
{
}

uStructType* jweak_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jweak);
    options.ValueSize = sizeof(jweak);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jweak", options);
    type->fp_build_ = jweak_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujboolean :24
// {
static void ujboolean_build(uType* type)
{
}

uStructType* ujboolean_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jboolean);
    options.ValueSize = sizeof(jboolean);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujboolean", options);
    type->fp_build_ = ujboolean_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujbyte :38
// {
static void ujbyte_build(uType* type)
{
}

uStructType* ujbyte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jbyte);
    options.ValueSize = sizeof(jbyte);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujbyte", options);
    type->fp_build_ = ujbyte_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujchar :52
// {
static void ujchar_build(uType* type)
{
}

uStructType* ujchar_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jchar);
    options.ValueSize = sizeof(jchar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujchar", options);
    type->fp_build_ = ujchar_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujclass :147
// {
static void ujclass_build(uType* type)
{
    type->SetDependencies(
        ::g::Android::Base::JNI_typeof(),
        ::g::Android::Base::Primitives::ujobject_typeof());
}

uStructType* ujclass_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 2;
    options.Alignment = alignof(jclass);
    options.ValueSize = sizeof(jclass);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujclass", options);
    type->fp_build_ = ujclass_build;
    return type;
}

// public static Android.Base.Primitives.ujclass get_Null() :151
void ujclass__get_Null_fn(jclass* __retval)
{
    *__retval = ujclass::Null();
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) :154
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval)
{
    *__retval = ujclass::op_Equality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) [static] :154
bool ujclass::op_Equality(jclass lhs, jclass rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(::g::Android::Base::Primitives::ujobject::op_Implicit(lhs), ::g::Android::Base::Primitives::ujobject::op_Implicit(rhs));
}

// public static Android.Base.Primitives.ujclass get_Null() [static] :151
jclass ujclass::Null()
{
    return NULL;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujdouble :122
// {
static void ujdouble_build(uType* type)
{
}

uStructType* ujdouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jdouble);
    options.ValueSize = sizeof(jdouble);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujdouble", options);
    type->fp_build_ = ujdouble_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujfloat :108
// {
static void ujfloat_build(uType* type)
{
}

uStructType* ujfloat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jfloat);
    options.ValueSize = sizeof(jfloat);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujfloat", options);
    type->fp_build_ = ujfloat_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujint :80
// {
static void ujint_build(uType* type)
{
}

uStructType* ujint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jint);
    options.ValueSize = sizeof(jint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujint", options);
    type->fp_build_ = ujint_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujlong :94
// {
static void ujlong_build(uType* type)
{
}

uStructType* ujlong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jlong);
    options.ValueSize = sizeof(jlong);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujlong", options);
    type->fp_build_ = ujlong_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujobject :175
// {
static void ujobject_build(uType* type)
{
    type->SetDependencies(
        ::g::Android::Base::JNI_typeof());
}

uStructType* ujobject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.Alignment = alignof(jobject);
    options.ValueSize = sizeof(jobject);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujobject", options);
    type->fp_build_ = ujobject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject get_Null() :179
void ujobject__get_Null_fn(jobject* __retval)
{
    *__retval = ujobject::Null();
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :202
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Equality(*lhs, *rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) :182
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval)
{
    *__retval = ujobject::op_Implicit(*v);
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v) :187
void ujobject__op_Implicit1_fn(jobject* v, jclass* __retval)
{
    *__retval = ujobject::op_Implicit1(*v);
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) :207
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Inequality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :202
bool ujobject::op_Equality(jobject lhs, jobject rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(lhs, rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) [static] :182
jobject ujobject::op_Implicit(jclass v)
{
    return (jobject)v;
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v) [static] :187
jclass ujobject::op_Implicit1(jobject v)
{
    return (jclass)v;
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static] :207
bool ujobject::op_Inequality(jobject lhs, jobject rhs)
{
    return !ujobject::op_Equality(lhs, rhs);
}

// public static Android.Base.Primitives.ujobject get_Null() [static] :179
jobject ujobject::Null()
{
    return NULL;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujshort :66
// {
static void ujshort_build(uType* type)
{
}

uStructType* ujshort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jshort);
    options.ValueSize = sizeof(jshort);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujshort", options);
    type->fp_build_ = ujshort_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujstring :166
// {
static void ujstring_build(uType* type)
{
}

uStructType* ujstring_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jstring);
    options.ValueSize = sizeof(jstring);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujstring", options);
    type->fp_build_ = ujstring_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct ujvalue :215
// {
static void ujvalue_build(uType* type)
{
}

uStructType* ujvalue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(jvalue);
    options.ValueSize = sizeof(jvalue);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujvalue", options);
    type->fp_build_ = ujvalue_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/Primitives.uno
// -----------------------------------------------------------------------------------

// public extern struct uweakptr :21
// {
static void uweakptr_build(uType* type)
{
}

uStructType* uweakptr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uWeakObject*);
    options.ValueSize = sizeof(uWeakObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.uweakptr", options);
    type->fp_build_ = uweakptr_build;
    return type;
}
// }

}}}} // ::g::Android::Base::Primitives
