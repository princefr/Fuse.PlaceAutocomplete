// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-88f7a41f.h>
#include <Fuse.Android.Controls-3a7bea61.h>
#include <Fuse.Android.Controls-9d49daa5.h>
#include <Fuse.Android.Controls-b7abe437.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTa-39be7c2b.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[4];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{
namespace WebViewUtils{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.4.2/Android/WebView.Eval.uno
// ----------------------------------------------------------------------------------

// internal sealed extern class EvaluateJsCommand :12
// {
static void EvaluateJsCommand_build(uType* type)
{
    ::STRINGS[0] = uString::Const("javascript:");
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(EvaluateJsCommand, _handler), 0,
        ::g::Uno::String_typeof(), offsetof(EvaluateJsCommand, JavaScript), 0);
}

uType* EvaluateJsCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(EvaluateJsCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand", options);
    type->fp_build_ = EvaluateJsCommand_build;
    return type;
}

// public EvaluateJsCommand(string javaScript, Uno.Action<string> handler) :17
void EvaluateJsCommand__ctor__fn(EvaluateJsCommand* __this, uString* javaScript, uDelegate* handler)
{
    __this->ctor_(javaScript, handler);
}

// public void Execute(Java.Object webViewHandle, string expression) :23
void EvaluateJsCommand__Execute_fn(EvaluateJsCommand* __this, ::g::Java::Object* webViewHandle, uString* expression)
{
    __this->Execute(webViewHandle, expression);
}

// public void HandleResult(string result) :28
void EvaluateJsCommand__HandleResult_fn(EvaluateJsCommand* __this, uString* result)
{
    __this->HandleResult(result);
}

// public EvaluateJsCommand New(string javaScript, Uno.Action<string> handler) :17
void EvaluateJsCommand__New1_fn(uString* javaScript, uDelegate* handler, EvaluateJsCommand** __retval)
{
    *__retval = EvaluateJsCommand::New1(javaScript, handler);
}

// public EvaluateJsCommand(string javaScript, Uno.Action<string> handler) [instance] :17
void EvaluateJsCommand::ctor_(uString* javaScript, uDelegate* handler)
{
    JavaScript = javaScript;
    _handler = handler;
}

// public void Execute(Java.Object webViewHandle, string expression) [instance] :23
void EvaluateJsCommand::Execute(::g::Java::Object* webViewHandle, uString* expression)
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadUrl(webViewHandle, ::g::Uno::String::op_Addition2(::STRINGS[0/*"javascript:"*/], expression));
}

// public void HandleResult(string result) [instance] :28
void EvaluateJsCommand::HandleResult(uString* result)
{
    if (::g::Uno::Delegate::op_Inequality(_handler, NULL))
        uPtr(_handler)->InvokeVoid(result);
}

// public EvaluateJsCommand New(string javaScript, Uno.Action<string> handler) [static] :17
EvaluateJsCommand* EvaluateJsCommand::New1(uString* javaScript, uDelegate* handler)
{
    EvaluateJsCommand* obj1 = (EvaluateJsCommand*)uNew(EvaluateJsCommand_typeof());
    obj1->ctor_(javaScript, handler);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.4.2/Android/WebView.Eval.uno
// ----------------------------------------------------------------------------------

// public sealed extern class JSEvalRequestManager :34
// {
static void JSEvalRequestManager_build(uType* type)
{
    ::STRINGS[1] = uString::Const("FuseJSInterface");
    ::STRINGS[2] = uString::Const(".onResult( eval('");
    ::STRINGS[3] = uString::Const("') );");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand>*/], offsetof(JSEvalRequestManager, _evaluateRequests), 0,
        ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand_typeof(), offsetof(JSEvalRequestManager, _currentRequest), 0,
        ::g::Java::Object_typeof(), offsetof(JSEvalRequestManager, _webViewHandle), 0,
        ::g::Uno::String_typeof(), offsetof(JSEvalRequestManager, _interfaceName), 0);
}

uType* JSEvalRequestManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(JSEvalRequestManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.JSEvalRequestManager", options);
    type->fp_build_ = JSEvalRequestManager_build;
    return type;
}

// public JSEvalRequestManager(Java.Object webViewHandle) :40
void JSEvalRequestManager__ctor__fn(JSEvalRequestManager* __this, ::g::Java::Object* webViewHandle)
{
    __this->ctor_(webViewHandle);
}

// private string CreateExpression(string original) :62
void JSEvalRequestManager__CreateExpression_fn(JSEvalRequestManager* __this, uString* original, uString** __retval)
{
    *__retval = __this->CreateExpression(original);
}

// public void EvaluateJs(string js, Uno.Action<string> handler) :46
void JSEvalRequestManager__EvaluateJs_fn(JSEvalRequestManager* __this, uString* js, uDelegate* handler)
{
    __this->EvaluateJs(js, handler);
}

// public JSEvalRequestManager New(Java.Object webViewHandle) :40
void JSEvalRequestManager__New1_fn(::g::Java::Object* webViewHandle, JSEvalRequestManager** __retval)
{
    *__retval = JSEvalRequestManager::New1(webViewHandle);
}

// private void NextRequest() :54
void JSEvalRequestManager__NextRequest_fn(JSEvalRequestManager* __this)
{
    __this->NextRequest();
}

// private void OnJsResult(string result) :66
void JSEvalRequestManager__OnJsResult_fn(JSEvalRequestManager* __this, uString* result)
{
    __this->OnJsResult(result);
}

// public JSEvalRequestManager(Java.Object webViewHandle) [instance] :40
void JSEvalRequestManager::ctor_(::g::Java::Object* webViewHandle)
{
    _evaluateRequests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Android.Controls.WebViewUtils.EvaluateJsCommand>*/]));
    _webViewHandle = webViewHandle;
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::AddJavascriptInterface(_webViewHandle, _interfaceName = ::STRINGS[1/*"FuseJSInter...*/], uDelegate::New(::TYPES[1/*Uno.Action<string>*/], (void*)JSEvalRequestManager__OnJsResult_fn, this));
}

// private string CreateExpression(string original) [instance] :62
uString* JSEvalRequestManager::CreateExpression(uString* original)
{
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(_interfaceName, ::STRINGS[2/*".onResult( ...*/]), original), ::STRINGS[3/*"') );"*/]);
}

// public void EvaluateJs(string js, Uno.Action<string> handler) [instance] :46
void JSEvalRequestManager::EvaluateJs(uString* js, uDelegate* handler)
{
    ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand* cmd = ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand::New1(js, handler);
    ::g::Uno::Collections::List__Add_fn(uPtr(_evaluateRequests), cmd);

    if (uPtr(_evaluateRequests)->Count() == 1)
        NextRequest();
}

// private void NextRequest() [instance] :54
void JSEvalRequestManager::NextRequest()
{
    ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand* ret2;

    if (uPtr(_evaluateRequests)->Count() == 0)
        return;

    _currentRequest = (::g::Uno::Collections::List__get_Item_fn(uPtr(_evaluateRequests), uCRef<int>(0), &ret2), ret2);
    uPtr(_evaluateRequests)->RemoveAt(0);
    uPtr(_currentRequest)->Execute(_webViewHandle, CreateExpression(uPtr(_currentRequest)->JavaScript));
}

// private void OnJsResult(string result) [instance] :66
void JSEvalRequestManager::OnJsResult(uString* result)
{
    uPtr(_currentRequest)->HandleResult(result);
    _currentRequest = NULL;
    NextRequest();
}

// public JSEvalRequestManager New(Java.Object webViewHandle) [static] :40
JSEvalRequestManager* JSEvalRequestManager::New1(::g::Java::Object* webViewHandle)
{
    JSEvalRequestManager* obj1 = (JSEvalRequestManager*)uNew(JSEvalRequestManager_typeof());
    obj1->ctor_(webViewHandle);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.4.2/Android/WebViewForeign.uno
// ------------------------------------------------------------------------------------

// public static class WebViewForeign :12
// {
static void WebViewForeign_build(uType* type)
{
}

uClassType* WebViewForeign_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Controls.WebViewUtils.WebViewForeign", options);
    type->fp_build_ = WebViewForeign_build;
    return type;
}

// public static extern void AddJavascriptInterface(Java.Object handle, string name, Uno.Action<string> resultHandler) :30
void WebViewForeign__AddJavascriptInterface_fn(::g::Java::Object* handle, uString* name, uDelegate* resultHandler)
{
    WebViewForeign::AddJavascriptInterface(handle, name, resultHandler);
}

// public static extern bool CanGoBack(Java.Object handle) :68
void WebViewForeign__CanGoBack_fn(::g::Java::Object* handle, bool* __retval)
{
    *__retval = WebViewForeign::CanGoBack(handle);
}

// public static extern bool CanGoForward(Java.Object handle) :75
void WebViewForeign__CanGoForward_fn(::g::Java::Object* handle, bool* __retval)
{
    *__retval = WebViewForeign::CanGoForward(handle);
}

// public static extern Java.Object CreateAndSetWebChromeClient(Java.Object webViewHandle, Uno.Action<int> onProgress) :38
void WebViewForeign__CreateAndSetWebChromeClient_fn(::g::Java::Object* webViewHandle, uDelegate* onProgress, ::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateAndSetWebChromeClient(webViewHandle, onProgress);
}

// public static extern Java.Object CreateAndSetWebViewClient(Java.Object webViewHandle, Uno.Action loaded, Uno.Action started, Uno.Action changed, Uno.Action<string> onCustomURI, string[] customURIs, Uno.Func<bool> hasUriSchemeHandler) :46
void WebViewForeign__CreateAndSetWebViewClient_fn(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed, uDelegate* onCustomURI, uArray* customURIs, uDelegate* hasUriSchemeHandler, ::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateAndSetWebViewClient(webViewHandle, loaded, started, changed, onCustomURI, customURIs, hasUriSchemeHandler);
}

// public static extern Java.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) :15
void WebViewForeign__CreateWebView_fn(bool* zoomEnabled, bool* scrollEnabled, ::g::Java::Object** __retval)
{
    *__retval = WebViewForeign::CreateWebView(*zoomEnabled, *scrollEnabled);
}

// public static extern double GetProgress(Java.Object handle) :124
void WebViewForeign__GetProgress_fn(::g::Java::Object* handle, double* __retval)
{
    *__retval = WebViewForeign::GetProgress(handle);
}

// public static extern string GetUrl(Java.Object handle) :54
void WebViewForeign__GetUrl_fn(::g::Java::Object* handle, uString** __retval)
{
    *__retval = WebViewForeign::GetUrl(handle);
}

// public static extern void GoBack(Java.Object handle) :82
void WebViewForeign__GoBack_fn(::g::Java::Object* handle)
{
    WebViewForeign::GoBack(handle);
}

// public static extern void GoForward(Java.Object handle) :89
void WebViewForeign__GoForward_fn(::g::Java::Object* handle)
{
    WebViewForeign::GoForward(handle);
}

// public static extern void LoadHtml(Java.Object handle, string html, string baseUrl) :110
void WebViewForeign__LoadHtml_fn(::g::Java::Object* handle, uString* html, uString* baseUrl)
{
    WebViewForeign::LoadHtml(handle, html, baseUrl);
}

// public static extern void LoadUrl(Java.Object handle, string url) :117
void WebViewForeign__LoadUrl_fn(::g::Java::Object* handle, uString* url)
{
    WebViewForeign::LoadUrl(handle, url);
}

// public static extern void Reload(Java.Object handle) :96
void WebViewForeign__Reload_fn(::g::Java::Object* handle)
{
    WebViewForeign::Reload(handle);
}

// public static extern void StopLoading(Java.Object handle) :103
void WebViewForeign__StopLoading_fn(::g::Java::Object* handle)
{
    WebViewForeign::StopLoading(handle);
}

// public static extern void AddJavascriptInterface(Java.Object handle, string name, Uno.Action<string> resultHandler) [static] :30
void WebViewForeign::AddJavascriptInterface(::g::Java::Object* handle, uString* name, uDelegate* resultHandler)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddJavascriptInterface330", "(Ljava/lang/Object;Ljava/lang/String;Lcom/foreign/Uno/Action_String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uname=name;
        jstring _name = JniHelper::UnoToJavaString(_uname);
        uDelegate* _uresultHandler=resultHandler;
        jobject _resultHandler = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uresultHandler, "com.foreign.Uno.Action_String");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_name,_resultHandler);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_name!=NULL) { U_JNIVAR->DeleteLocalRef(_name); }
        if (_resultHandler!=NULL) { U_JNIVAR->DeleteLocalRef(_resultHandler); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern bool CanGoBack(Java.Object handle) [static] :68
bool WebViewForeign::CanGoBack(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CanGoBack331", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern bool CanGoForward(Java.Object handle) [static] :75
bool WebViewForeign::CanGoForward(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CanGoForward332", "(Ljava/lang/Object;)Z");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_handle);
        bool __result = (bool)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern Java.Object CreateAndSetWebChromeClient(Java.Object webViewHandle, Uno.Action<int> onProgress) [static] :38
::g::Java::Object* WebViewForeign::CreateAndSetWebChromeClient(::g::Java::Object* webViewHandle, uDelegate* onProgress)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateAndSetWebChromeClient333", "(Ljava/lang/Object;Lcom/foreign/Uno/Action_int;)Ljava/lang/Object;");
        ::g::Java::Object* _uwebViewHandle=webViewHandle;
        jobject _webViewHandle = (_uwebViewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uwebViewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uonProgress=onProgress;
        jobject _onProgress = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonProgress, "com.foreign.Uno.Action_int");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_webViewHandle,_onProgress);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_webViewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_webViewHandle); }
        if (_onProgress!=NULL) { U_JNIVAR->DeleteLocalRef(_onProgress); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern Java.Object CreateAndSetWebViewClient(Java.Object webViewHandle, Uno.Action loaded, Uno.Action started, Uno.Action changed, Uno.Action<string> onCustomURI, string[] customURIs, Uno.Func<bool> hasUriSchemeHandler) [static] :46
::g::Java::Object* WebViewForeign::CreateAndSetWebViewClient(::g::Java::Object* webViewHandle, uDelegate* loaded, uDelegate* started, uDelegate* changed, uDelegate* onCustomURI, uArray* customURIs, uDelegate* hasUriSchemeHandler)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateAndSetWebViewClient334", "(Ljava/lang/Object;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action;Lcom/foreign/Uno/Action_String;Lcom/uno/StringArray;Lcom/foreign/Uno/Func;)Ljava/lang/Object;");
        ::g::Java::Object* _uwebViewHandle=webViewHandle;
        jobject _webViewHandle = (_uwebViewHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uwebViewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uDelegate* _uloaded=loaded;
        jobject _loaded = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uloaded, "com.foreign.Uno.Action");
        uDelegate* _ustarted=started;
        jobject _started = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_ustarted, "com.foreign.Uno.Action");
        uDelegate* _uchanged=changed;
        jobject _changed = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uchanged, "com.foreign.Uno.Action");
        uDelegate* _uonCustomURI=onCustomURI;
        jobject _onCustomURI = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uonCustomURI, "com.foreign.Uno.Action_String");
        uArray* _ucustomURIs=customURIs;
        jobject _customURIs = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box10(_ucustomURIs);
        uDelegate* _uhasUriSchemeHandler=hasUriSchemeHandler;
        jobject _hasUriSchemeHandler = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::BoxDelegate((uObject*)_uhasUriSchemeHandler, "com.foreign.Uno.Func");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_webViewHandle,_loaded,_started,_changed,_onCustomURI,_customURIs,_hasUriSchemeHandler);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_webViewHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_webViewHandle); }
        if (_loaded!=NULL) { U_JNIVAR->DeleteLocalRef(_loaded); }
        if (_started!=NULL) { U_JNIVAR->DeleteLocalRef(_started); }
        if (_changed!=NULL) { U_JNIVAR->DeleteLocalRef(_changed); }
        if (_onCustomURI!=NULL) { U_JNIVAR->DeleteLocalRef(_onCustomURI); }
        if (_customURIs!=NULL) { U_JNIVAR->DeleteLocalRef(_customURIs); }
        if (_hasUriSchemeHandler!=NULL) { U_JNIVAR->DeleteLocalRef(_hasUriSchemeHandler); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern Java.Object CreateWebView(bool zoomEnabled, bool scrollEnabled) [static] :15
::g::Java::Object* WebViewForeign::CreateWebView(bool zoomEnabled, bool scrollEnabled)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateWebView335", "(ZZ)Ljava/lang/Object;");
        bool _uzoomEnabled=zoomEnabled;
        jboolean _zoomEnabled = (jboolean)_uzoomEnabled;
        bool _uscrollEnabled=scrollEnabled;
        jboolean _scrollEnabled = (jboolean)_uscrollEnabled;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_zoomEnabled,_scrollEnabled);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern double GetProgress(Java.Object handle) [static] :124
double WebViewForeign::GetProgress(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetProgress336", "(Ljava/lang/Object;)D");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_handle);
        double __result = (double)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern string GetUrl(Java.Object handle) [static] :54
uString* WebViewForeign::GetUrl(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetUrl338", "(Ljava/lang/Object;)Ljava/lang/String;");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_handle);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (__jresult!=NULL && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static extern void GoBack(Java.Object handle) [static] :82
void WebViewForeign::GoBack(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GoBack339", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void GoForward(Java.Object handle) [static] :89
void WebViewForeign::GoForward(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GoForward340", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoadHtml(Java.Object handle, string html, string baseUrl) [static] :110
void WebViewForeign::LoadHtml(::g::Java::Object* handle, uString* html, uString* baseUrl)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadHtml341", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uhtml=html;
        jstring _html = JniHelper::UnoToJavaString(_uhtml);
        uString* _ubaseUrl=baseUrl;
        jstring _baseUrl = JniHelper::UnoToJavaString(_ubaseUrl);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_html,_baseUrl);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_html!=NULL) { U_JNIVAR->DeleteLocalRef(_html); }
        if (_baseUrl!=NULL) { U_JNIVAR->DeleteLocalRef(_baseUrl); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoadUrl(Java.Object handle, string url) [static] :117
void WebViewForeign::LoadUrl(::g::Java::Object* handle, uString* url)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadUrl342", "(Ljava/lang/Object;Ljava/lang/String;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uurl=url;
        jstring _url = JniHelper::UnoToJavaString(_uurl);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_url);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_url!=NULL) { U_JNIVAR->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void Reload(Java.Object handle) [static] :96
void WebViewForeign::Reload(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Reload343", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void StopLoading(Java.Object handle) [static] :103
void WebViewForeign::StopLoading(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "StopLoading344", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

}}}}} // ::g::Fuse::Android::Controls::WebViewUtils
