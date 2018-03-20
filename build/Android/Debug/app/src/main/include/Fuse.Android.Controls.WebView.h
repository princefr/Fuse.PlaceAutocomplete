// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.WebView/1.4.2/Android/WebView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.Controls.IWebView.h>
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Navigation.IBase-84e3f965.h>
#include <Fuse.Triggers.IProgress.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{struct JSEvalRequestManager;}}}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{struct WebView;}}}}
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// public sealed extern class WebView :14
// {
struct WebView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::IWebView interface2;
    ::g::Fuse::Triggers::IProgress interface3;
    ::g::Fuse::Navigation::IBaseNavigation interface4;
    ::g::Fuse::Controls::ISourceReceiver interface5;
};

WebView_type* WebView_typeof();
void WebView__ctor_9_fn(WebView* __this, ::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes);
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval);
void WebView__set_BaseUrl_fn(WebView* __this, uString* value);
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value);
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval);
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval);
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes, WebView** __retval);
void WebView__Eval_fn(WebView* __this, uString* js);
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler);
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval);
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value);
void WebView__GoBack_fn(WebView* __this);
void WebView__GoForward_fn(WebView* __this);
void WebView__HasURISchemeHandler_fn(WebView* __this, bool* __retval);
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value);
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file);
void WebView__LoadHtml_fn(WebView* __this, uString* html);
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl);
void WebView__LoadUrl_fn(WebView* __this, uString* url);
void WebView__New5_fn(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes, WebView** __retval);
void WebView__OnBeginloading_fn(WebView* __this);
void WebView__OnCustomURI_fn(WebView* __this, uString* url);
void WebView__OnHistoryChanged_fn(WebView* __this);
void WebView__OnPageLoaded_fn(WebView* __this);
void WebView__OnProgressChanged_fn(WebView* __this, int* newProgress);
void WebView__OnUrlChanged_fn(WebView* __this);
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value);
void WebView__get_Progress_fn(WebView* __this, double* __retval);
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value);
void WebView__Reload_fn(WebView* __this);
void WebView__get_ScrollEnabled_fn(WebView* __this, bool* __retval);
void WebView__set_ScrollEnabled_fn(WebView* __this, bool* value);
void WebView__get_Source_fn(WebView* __this, uString** __retval);
void WebView__set_Source_fn(WebView* __this, uString* value);
void WebView__Stop_fn(WebView* __this);
void WebView__add_URISchemeHandler_fn(WebView* __this, uDelegate* value);
void WebView__remove_URISchemeHandler_fn(WebView* __this, uDelegate* value);
void WebView__get_Url_fn(WebView* __this, uString** __retval);
void WebView__set_Url_fn(WebView* __this, uString* value);
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value);
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value);
void WebView__get_ZoomEnabled_fn(WebView* __this, bool* __retval);
void WebView__set_ZoomEnabled_fn(WebView* __this, bool* value);

struct WebView : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong< ::g::Java::Object*> _webChromeClientHandle;
    uStrong< ::g::Java::Object*> _webViewClientHandle;
    uStrong< ::g::Java::Object*> _webViewHandle;
    uStrong< ::g::Fuse::Controls::WebView*> _webViewHost;
    uStrong< ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager*> _evalRequestMgr;
    uStrong<uArray*> _uriSchemes;
    uStrong<uString*> _source;
    uStrong< ::g::Uno::UX::FileSource*> _file;
    uStrong<uString*> _BaseUrl;
    bool _ScrollEnabled;
    bool _ZoomEnabled;
    uStrong<uDelegate*> BeginLoading1;
    uStrong<uDelegate*> HistoryChanged1;
    uStrong<uDelegate*> PageLoaded1;
    uStrong<uDelegate*> ProgressChanged1;
    uStrong<uDelegate*> URISchemeHandler1;
    uStrong<uDelegate*> UrlChanged1;

    void ctor_9(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes);
    uString* BaseUrl();
    void BaseUrl(uString* value);
    void add_BeginLoading(uDelegate* value);
    void remove_BeginLoading(uDelegate* value);
    bool CanGoBack();
    bool CanGoForward();
    void Eval(uString* js);
    void Eval1(uString* js, uDelegate* resultHandler);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    void GoBack();
    void GoForward();
    bool HasURISchemeHandler();
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    void LoadFile(::g::Uno::UX::FileSource* file);
    void LoadHtml(uString* html);
    void LoadHtml1(uString* html, uString* baseUrl);
    void LoadUrl(uString* url);
    void OnBeginloading();
    void OnCustomURI(uString* url);
    void OnHistoryChanged();
    void OnPageLoaded();
    void OnProgressChanged(int newProgress);
    void OnUrlChanged();
    void add_PageLoaded(uDelegate* value);
    void remove_PageLoaded(uDelegate* value);
    double Progress();
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Reload();
    bool ScrollEnabled();
    void ScrollEnabled(bool value);
    uString* Source();
    void Source(uString* value);
    void Stop();
    void add_URISchemeHandler(uDelegate* value);
    void remove_URISchemeHandler(uDelegate* value);
    uString* Url();
    void Url(uString* value);
    void add_UrlChanged(uDelegate* value);
    void remove_UrlChanged(uDelegate* value);
    bool ZoomEnabled();
    void ZoomEnabled(bool value);
    static WebView* Create(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes);
    static WebView* New5(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes);
};
// }

}}}} // ::g::Fuse::Android::Controls
