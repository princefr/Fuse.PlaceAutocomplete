// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/MultiDensityImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.ImageSource.h>
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ProxyImageSource;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class MultiDensityImageSource :28
// {
::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__get_Active_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval);
void MultiDensityImageSource__add_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value);
void MultiDensityImageSource__remove_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value);
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval);
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval);
void MultiDensityImageSource__OnActiveChanged_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img);
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img);
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__get_Orientation_fn(MultiDensityImageSource* __this, int* __retval);
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval);
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this);
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval);
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval);
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval);
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int* __retval);
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use);

struct MultiDensityImageSource : ::g::Fuse::Resources::ImageSource
{
    uStrong< ::g::Uno::Collections::ObservableList*> _sources;
    uStrong< ::g::Fuse::Resources::ProxyImageSource*> _proxy;
    float _matchDensity;
    bool _hasMatchDensity;
    uStrong< ::g::Fuse::Resources::ImageSource*> _active;
    uStrong<uDelegate*> ActiveChanged1;

    void ctor_2();
    ::g::Fuse::Resources::ImageSource* Active();
    void add_ActiveChanged(uDelegate* value);
    void remove_ActiveChanged(uDelegate* value);
    void OnActiveChanged();
    void OnImageAdded(::g::Fuse::Resources::ImageSource* img);
    void OnImageRemoved(::g::Fuse::Resources::ImageSource* img);
    void SelectActive();
    uObject* Sources();
    void SwapActive(::g::Fuse::Resources::ImageSource* use);
    static MultiDensityImageSource* New2();
};
// }

}}} // ::g::Fuse::Resources
