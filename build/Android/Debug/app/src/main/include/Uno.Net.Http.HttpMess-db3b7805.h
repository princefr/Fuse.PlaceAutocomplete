// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.4.3/HttpMessageHandlerRequest.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest__ProgressClosure;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// private sealed class HttpMessageHandlerRequest.ProgressClosure :186
// {
uType* HttpMessageHandlerRequest__ProgressClosure_typeof();
void HttpMessageHandlerRequest__ProgressClosure__ctor__fn(HttpMessageHandlerRequest__ProgressClosure* __this, int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal);
void HttpMessageHandlerRequest__ProgressClosure__New1_fn(int* state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int* current, int* total, bool* hasTotal, HttpMessageHandlerRequest__ProgressClosure** __retval);
void HttpMessageHandlerRequest__ProgressClosure__Run_fn(HttpMessageHandlerRequest__ProgressClosure* __this);

struct HttpMessageHandlerRequest__ProgressClosure : uObject
{
    uStrong<uDelegate*> _action;
    uStrong< ::g::Uno::Net::Http::HttpMessageHandlerRequest*> _request;
    int _current;
    int _total;
    bool _hasTotal;
    int _state;

    void ctor_(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
    void Run();
    static HttpMessageHandlerRequest__ProgressClosure* New1(int state, uDelegate* action, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request, int current, int total, bool hasTotal);
};
// }

}}}} // ::g::Uno::Net::Http
