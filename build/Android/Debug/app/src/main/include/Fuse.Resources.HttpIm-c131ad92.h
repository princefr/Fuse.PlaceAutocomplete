// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/HttpImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceImpl__BackgroundLoad;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// private sealed class HttpImageSourceImpl.BackgroundLoad :160
// {
uType* HttpImageSourceImpl__BackgroundLoad_typeof();
void HttpImageSourceImpl__BackgroundLoad__ctor__fn(HttpImageSourceImpl__BackgroundLoad* __this, uArray* data, uString* contentType, uDelegate* done, uDelegate* fail);
void HttpImageSourceImpl__BackgroundLoad__GWDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this, ::g::Uno::Graphics::Texture2D* tex);
void HttpImageSourceImpl__BackgroundLoad__New1_fn(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail, HttpImageSourceImpl__BackgroundLoad** __retval);
void HttpImageSourceImpl__BackgroundLoad__Run_fn(HttpImageSourceImpl__BackgroundLoad* __this);
void HttpImageSourceImpl__BackgroundLoad__UIDoneCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this);
void HttpImageSourceImpl__BackgroundLoad__UIFailCallback_fn(HttpImageSourceImpl__BackgroundLoad* __this);

struct HttpImageSourceImpl__BackgroundLoad : uObject
{
    uStrong<uArray*> _data;
    uStrong<uString*> _contentType;
    uStrong<uDelegate*> _done;
    uStrong<uDelegate*> _fail;
    uStrong< ::g::Uno::Exception*> _exception;
    uStrong< ::g::Uno::Graphics::Texture2D*> _tex;

    void ctor_(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail);
    void GWDoneCallback(::g::Uno::Graphics::Texture2D* tex);
    void Run();
    void UIDoneCallback();
    void UIFailCallback();
    static HttpImageSourceImpl__BackgroundLoad* New1(uArray* data, uString* contentType, uDelegate* done, uDelegate* fail);
};
// }

}}} // ::g::Fuse::Resources
