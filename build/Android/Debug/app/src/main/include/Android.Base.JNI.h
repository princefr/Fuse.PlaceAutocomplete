// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Targets/Android/Uno/Base/JNI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <android/log.h>
#include <jni.h>
#include <Uno.Exception.h>
#include <Uno.h>
#include <Uno/JNIHelper.h>
namespace g{namespace Android{namespace Base{namespace Wrappers{struct JWrapper;}}}}
namespace g{namespace Android{namespace Base{struct JNI;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Android{
namespace Base{

// public static extern class JNI :14
// {
uClassType* JNI_typeof();
void JNI__CheckException_fn();
void JNI__CheckException1_fn(JNIEnv** jni);
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage);
void JNI__DeleteGlobalRef_fn(jobject* obj_);
void JNI__DeleteLocalRef_fn(jclass* obj);
void JNI__DeleteLocalRef1_fn(jobject* obj);
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_);
void JNI__GetActivityClass_fn(jclass* __retval);
void JNI__GetActivityClassInner_fn(::g::Java::Object** __retval);
void JNI__GetActivityObject_fn(jobject* __retval);
void JNI__GetActivityObjectInner_fn(::g::Java::Object** __retval);
void JNI__GetArrayLength_fn(jobject* array_, int* __retval);
void JNI__GetDefaultObject_fn(jobject* __retval);
void JNI__GetDefaultType_fn(uType** __retval);
void JNI__GetEnvPtr_fn(JNIEnv** __retval);
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval);
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int* __retval);
void JNI__GetRefType1_fn(jobject* obj, int* __retval);
void JNI__GetStaticMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval);
void JNI__GetUnoRef_fn(jobject* obj, int64_t* __retval);
void JNI__GetVM_fn(JavaVM** __retval);
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval);
void JNI__Init_fn(jobject* activityObject);
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval);
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval);
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval);
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval);
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval);
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval);
void JNI__NewGlobalRef1_fn(jobject* obj, jobject* __retval);
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval);
void JNI__SetBooleanArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetByteArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetByteArrayRegion1_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetCharArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetDoubleArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetFloatArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetIntArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetLongArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__SetShortArrayRegion_fn(jobject* javaArr, uArray* unoArr, int* start, int* len);
void JNI__ThrowNewException_fn(uString* message_);
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval);

struct JNI : uObject
{
    static bool _inited_;
    static bool& _inited() { return _inited_; }
    static jmethodID Activity_getClassLoader_;
    static jmethodID& Activity_getClassLoader() { return Activity_getClassLoader_; }
    static jmethodID ClassLoader_loadClass_;
    static jmethodID& ClassLoader_loadClass() { return ClassLoader_loadClass_; }
    static jmethodID _getUnoRefMid_;
    static jmethodID& _getUnoRefMid() { return _getUnoRefMid_; }
    static jclass exceptionClass_;
    static jclass& exceptionClass() { return exceptionClass_; }
    static jclass _helperCls_;
    static jclass& _helperCls() { return _helperCls_; }

    static void CheckException();
    static void CheckException1(JNIEnv* jni);
    static void CheckException2(JNIEnv* jni, uString* appendMessage);
    static void DeleteGlobalRef(jobject obj_);
    static void DeleteLocalRef(jclass obj);
    static void DeleteLocalRef1(jobject obj);
    static void DeleteWeakGlobalRef(jobject obj_);
    static jclass GetActivityClass();
    static ::g::Java::Object* GetActivityClassInner();
    static jobject GetActivityObject();
    static ::g::Java::Object* GetActivityObjectInner();
    static int GetArrayLength(jobject array_);
    static jobject GetDefaultObject();
    static uType* GetDefaultType();
    static JNIEnv* GetEnvPtr();
    static jmethodID GetMethodID(jclass cls, uString* methodName, uString* methodSig);
    static int GetRefType(JNIEnv* jni, jobject obj);
    static int GetRefType1(jobject obj);
    static jmethodID GetStaticMethodID(jclass cls, uString* methodName, uString* methodSig);
    static int64_t GetUnoRef(jobject obj);
    static JavaVM* GetVM();
    static ::g::Android::Base::Wrappers::JWrapper* GetWrappedActivityObject();
    static void Init(jobject activityObject);
    static bool IsSameObject(jobject objA_, jobject objB_);
    static jclass LoadClass(JNIEnv* jni, const char* name);
    static jclass LoadClass1(JNIEnv* jni, const char* name, bool systemClass);
    static jclass LoadClass2(JNIEnv* jni, uString* name, bool systemClass);
    static jclass LoadClass3(uString* name, bool systemClass);
    static jclass NewGlobalRef(jclass obj);
    static jobject NewGlobalRef1(jobject obj);
    static jobject NewWeakGlobalRef(jobject obj_);
    static void SetBooleanArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetByteArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetByteArrayRegion1(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetCharArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetDoubleArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetFloatArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetIntArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetLongArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void SetShortArrayRegion(jobject javaArr, uArray* unoArr, int start, int len);
    static void ThrowNewException(uString* message_);
    static ::g::Uno::Exception* TryGetException(JNIEnv* jni, uString* appendMessage);
};
// }

}}} // ::g::Android::Base
