// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Video/1.4.2/Android/VideoPlayer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoIm-7b2eaac1.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct VideoLoader__NoHardwareAcceleration;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// private sealed class VideoLoader.NoHardwareAcceleration :96
// {
::g::Uno::Threading::Future_type* VideoLoader__NoHardwareAcceleration_typeof();
void VideoLoader__NoHardwareAcceleration__ctor_7_fn(VideoLoader__NoHardwareAcceleration* __this);
void VideoLoader__NoHardwareAcceleration__Cancel_fn(VideoLoader__NoHardwareAcceleration* __this, bool* shutdownGracefully);
void VideoLoader__NoHardwareAcceleration__DoReject_fn(VideoLoader__NoHardwareAcceleration* __this);
void VideoLoader__NoHardwareAcceleration__New5_fn(VideoLoader__NoHardwareAcceleration** __retval);

struct VideoLoader__NoHardwareAcceleration : ::g::Uno::Threading::Promise
{
    void ctor_7();
    void DoReject();
    static VideoLoader__NoHardwareAcceleration* New5();
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
