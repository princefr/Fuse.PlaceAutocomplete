// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/ImageLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-118b98c3.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader__PendingPromise;}}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// private sealed extern class ImageLoader.PendingPromise :163
// {
::g::Uno::Threading::Future_type* ImageLoader__PendingPromise_typeof();
void ImageLoader__PendingPromise__ctor_7_fn(ImageLoader__PendingPromise* __this, ::g::Uno::Threading::Future1* future);
void ImageLoader__PendingPromise__Dispose_fn(ImageLoader__PendingPromise* __this);
void ImageLoader__PendingPromise__New5_fn(::g::Uno::Threading::Future1* future, ImageLoader__PendingPromise** __retval);
void ImageLoader__PendingPromise__OnResolve_fn(ImageLoader__PendingPromise* __this, ::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader__PendingPromise : ::g::Uno::Threading::Promise
{
    uStrong< ::g::Uno::Threading::Future1*> _future;

    void ctor_7(::g::Uno::Threading::Future1* future);
    void OnResolve(::g::Fuse::Controls::Native::ImageHandle* handle);
    static ImageLoader__PendingPromise* New5(::g::Uno::Threading::Future1* future);
};
// }

}}}} // ::g::Fuse::Controls::Native
