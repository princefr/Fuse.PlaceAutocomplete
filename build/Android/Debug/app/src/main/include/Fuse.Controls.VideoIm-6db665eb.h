// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.4.2/Android/VideoPlayer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct VideoLoader;}}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// internal sealed extern class VideoLoader :14
// {
uType* VideoLoader_typeof();
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval);
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval);

struct VideoLoader : uObject
{
    static ::g::Uno::Threading::Future1* Load(uString* url);
    static ::g::Uno::Threading::Future1* Load1(::g::Uno::IO::BundleFile* file);
    static ::g::Uno::Threading::Future1* Load2(::g::Uno::UX::FileSource* fileSource);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
