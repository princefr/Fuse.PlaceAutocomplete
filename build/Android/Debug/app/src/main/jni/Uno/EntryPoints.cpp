
#include <uBase/Time.h>
#include <uBase/BaseLib.h>
#include <XliPlatform/PlatformSpecific/Android.h>

#include <Uno/AndroidCommon.h>
#include <Uno/JNIHelper.h>
#include <Uno/Graphics/GLHelper.h>

#include <Android.Base.JNI.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.EventSou-b16da529.h>
#include <Uno.Platform.EventSou-afb2ad40.h>
#include <Uno.Compiler.ExportTa-7a61a803.h>

//void uStartApp();

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnReceiveURI (JNIEnv* env , jobject obj, jstring data)
    {
        data = (jstring)::g::Android::Base::JNI::NewGlobalRef1((jobject)data);
        uAutoReleasePool pool;
        uString* unoUri = JniHelper::JavaToUnoString(data);
        JniHelper jni;
        jni->DeleteGlobalRef(data);
        ::g::Uno::Platform::EventSources::InterAppInvoke::OnReceivedURI(unoUri);
    }
}

//--------------------------------------------------

extern "C"
{
    bool JNICALL cppOnKeyUp (JNIEnv* env, jobject obj, jint key)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Platform::EventSources::HardwareKeys::OnKeyUp(key, 0);
    }
}

//--------------------------------------------------

extern "C"
{
    bool JNICALL cppOnKeyDown (JNIEnv* env, jobject obj, jint key)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Platform::EventSources::HardwareKeys::OnKeyDown(key, 0);
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnCreate(JNIEnv *env , jobject obj, jobject activity)
    {
        uAutoReleasePool pool;
        ::g::Android::Base::JNI::Init(activity);
        ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::ExternBlockHost::RegisterFunctions();
        ::g::Uno::Platform::CoreApp::Start();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnStartMainLoop (JNIEnv* env, jobject obj, jboolean _resurrected)
    {
        bool resurrected = (bool)_resurrected;
        if (resurrected) {
            GLHelper::SwapBackToBackgroundSurface();
            uAutoReleasePool pool;
        } else {
            GLHelper::InitGL();
        }
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnRestart(JNIEnv *env , jobject obj)
    {
        uAutoReleasePool pool;
        GLHelper::SwapBackToBackgroundSurface();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnResume(JNIEnv *env , jobject obj)
    {
         uAutoReleasePool pool;
         ::g::Uno::Platform::CoreApp::EnterForeground();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnPause(JNIEnv *env , jobject obj)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform::CoreApp::EnterBackground();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnDestroy(JNIEnv *env , jobject obj)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform::CoreApp::Terminate();
        // {NOTE} We dont call GLHelper::DeInitGL() here as there is no reliable way to
        //        tell if it really is a destory or if we are going to get ressurected
        //        and we really want to survive that with gl intact if possible
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnLowMemory(JNIEnv *env , jobject obj)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform::CoreApp::OnReceivedLowMemoryWarning();
    }
}

//--------------------------------------------------

extern "C"
{
    void JNICALL cppOnWindowFocusChanged(JNIEnv *env , jobject obj, jboolean hasFocus)
    {
        uAutoReleasePool pool;
        if ((bool)hasFocus)
        {
            ::g::Uno::Platform::CoreApp::EnterInteractive();
        } else {
            ::g::Uno::Platform::CoreApp::ExitInteractive();
        }
    }
}

//--------------------------------------------------

void AttachNativeCallbacks(JNIEnv* jni, jclass entryPointClass)
{
    static JNINativeMethod native_activity_funcs[] = {
        {(char* const)"cppOnCreate", (char* const)"(Ljava/lang/Object;)V", (void *)&cppOnCreate},
        {(char* const)"cppOnDestroy", (char* const)"()V", (void *)&cppOnDestroy},
        {(char* const)"cppOnPause", (char* const)"()V", (void *)&cppOnPause},
        {(char* const)"cppOnResume", (char* const)"()V", (void *)&cppOnResume},
        {(char* const)"cppOnRestart", (char* const)"()V", (void *)&cppOnRestart},
        {(char* const)"cppOnLowMemory", (char* const)"()V", (void *)&cppOnLowMemory},
        {(char* const)"cppOnWindowFocusChanged", (char* const)"(Z)V", (void *)&cppOnWindowFocusChanged},
        {(char* const)"cppOnStartMainLoop", (char* const)"(Z)V", (void *)&cppOnStartMainLoop},
        {(char* const)"cppOnReceiveURI", (char* const)"(Ljava/lang/String;)V", (void *)&cppOnReceiveURI},
        {(char* const)"cppOnKeyUp", (char* const)"(I)Z", (void *)&cppOnKeyUp},
        {(char* const)"cppOnKeyDown", (char* const)"(I)Z", (void *)&cppOnKeyDown},
    };
    // the last argument is the number of native functions
    int attached = (int)jni->RegisterNatives(entryPointClass, native_activity_funcs, 11);
    if (attached < 0) {
        LOGD("COULD NOT REGISTER NATIVE ACTIVITY FUNCTIONS");
        throw uBase::Exception("COULD NOT REGISTER NATIVE ACTIVITY FUNCTIONS");
    }
}

static void uInitRuntime()
{
    static uRuntime runtime;
}

// This is the first point we have in the app lifecycle when we are in control
// At this point Xli has been loaded by the Activity.java file and, as specified by
// the JNI spec, when a library is loaded, if there is a JNI_OnLoad method, it will
// be called.
// We use this point to grab the activity class and attach all the lifecycle callbacks
jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    // vm & activityClass
    JNIEnv* env;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        LOGD ("&&&&&&& GetEnv failed &&&&&&");
        return -1;
    }
    jclass activityClass = env->FindClass("com/apps/fuse/placeautocomplete/fuseplaceautocomplete");
    jclass entryPointsClass = env->FindClass("com/fuse/ActivityNativeEntryPoints");
    jclass nativeExternClass = env->FindClass("com/Bindings/ExternedBlockHost");

    if (!activityClass) {
        LOGD("COULD NOT FIND ACTIVITY CLASS");
        throw uBase::Exception("COULD NOT FIND ACTIVITY CLASS");
    }
    if (!entryPointsClass) {
        LOGD("COULD NOT FIND ENTRYPOINTS CLASS");
        throw uBase::Exception("COULD NOT FIND ENTRYPOINTS CLASS");
    }
    if (!nativeExternClass) {
        LOGD("COULD NOT FIND NATIVEEXTERNCLASS CLASS");
        throw uBase::Exception("COULD NOT FIND NATIVEEXTERNCLASS CLASS");
    }

    // systems
    JniHelper::Init(vm, env, activityClass, nativeExternClass);
    uBase::BaseLib::Init();
    Xli::PlatformSpecific::Android::PostInit();
    Xli::PlatformSpecific::Android::SetLogTag("fuseplaceautocomplete");


    // java callbacks
    AttachNativeCallbacks(env, entryPointsClass);

    // uno
    uInitRuntime();

    return JNI_VERSION_1_6;
}

//------------------------------------------------------------
