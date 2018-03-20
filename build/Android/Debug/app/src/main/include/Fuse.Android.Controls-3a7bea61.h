// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.4.2/Android/WebView.Eval.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{struct EvaluateJsCommand;}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{struct JSEvalRequestManager;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{
namespace WebViewUtils{

// public sealed extern class JSEvalRequestManager :34
// {
uType* JSEvalRequestManager_typeof();
void JSEvalRequestManager__ctor__fn(JSEvalRequestManager* __this, ::g::Java::Object* webViewHandle);
void JSEvalRequestManager__CreateExpression_fn(JSEvalRequestManager* __this, uString* original, uString** __retval);
void JSEvalRequestManager__EvaluateJs_fn(JSEvalRequestManager* __this, uString* js, uDelegate* handler);
void JSEvalRequestManager__New1_fn(::g::Java::Object* webViewHandle, JSEvalRequestManager** __retval);
void JSEvalRequestManager__NextRequest_fn(JSEvalRequestManager* __this);
void JSEvalRequestManager__OnJsResult_fn(JSEvalRequestManager* __this, uString* result);

struct JSEvalRequestManager : uObject
{
    uStrong< ::g::Uno::Collections::List*> _evaluateRequests;
    uStrong< ::g::Fuse::Android::Controls::WebViewUtils::EvaluateJsCommand*> _currentRequest;
    uStrong< ::g::Java::Object*> _webViewHandle;
    uStrong<uString*> _interfaceName;

    void ctor_(::g::Java::Object* webViewHandle);
    uString* CreateExpression(uString* original);
    void EvaluateJs(uString* js, uDelegate* handler);
    void NextRequest();
    void OnJsResult(uString* result);
    static JSEvalRequestManager* New1(::g::Java::Object* webViewHandle);
};
// }

}}}}} // ::g::Fuse::Android::Controls::WebViewUtils
