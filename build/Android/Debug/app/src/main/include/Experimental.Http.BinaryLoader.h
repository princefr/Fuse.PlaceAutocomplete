// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.4.2/BinaryLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Experimental{namespace Http{struct BinaryLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal sealed class BinaryLoader :14
// {
uType* BinaryLoader_typeof();
void BinaryLoader__ctor__fn(BinaryLoader* __this);
void BinaryLoader__ExtractHeaders_fn(BinaryLoader* __this, uString* headers, ::g::Uno::Collections::Dictionary** __retval);
void BinaryLoader__get_Header_fn(BinaryLoader* __this, ::g::Experimental::Http::HttpResponseHeader** __retval);
void BinaryLoader__Initiate_fn(BinaryLoader* __this);
void BinaryLoader__MakeRequest_fn(BinaryLoader* __this);
void BinaryLoader__New1_fn(BinaryLoader** __retval);
void BinaryLoader__OnError_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason);
void BinaryLoader__OnLoaded_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);

struct BinaryLoader : uObject
{
    uStrong<uDelegate*> Callback;
    uStrong<uDelegate*> ErrorCallback;
    uStrong<uString*> Uri;
    uStrong<uString*> Method;
    uStrong< ::g::Experimental::Http::HttpResponseHeader*> _header;

    void ctor_();
    ::g::Uno::Collections::Dictionary* ExtractHeaders(uString* headers);
    ::g::Experimental::Http::HttpResponseHeader* Header();
    void Initiate();
    void MakeRequest();
    void OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason);
    void OnLoaded(::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
    static BinaryLoader* New1();
};
// }

}}} // ::g::Experimental::Http
