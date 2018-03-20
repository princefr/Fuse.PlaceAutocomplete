// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.4.2/HttpLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace Http{struct HttpLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}

namespace g{
namespace Experimental{
namespace Http{

// public static class HttpLoader :9
// {
uClassType* HttpLoader_typeof();
void HttpLoader__LoadBinary_fn(uString* requestUri, uDelegate* callback, uDelegate* error);

struct HttpLoader : uObject
{
    static void LoadBinary(uString* requestUri, uDelegate* callback, uDelegate* error);
};
// }

}}} // ::g::Experimental::Http
