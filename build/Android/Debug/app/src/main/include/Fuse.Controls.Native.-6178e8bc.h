// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/TypefaceCache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Typeface;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct TypefaceCache;}}}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal static extern class TypefaceCache :73
// {
uClassType* TypefaceCache_typeof();
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Fuse::Controls::Native::Android::Typeface** __retval);
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::IO::BundleFile* file, ::g::Fuse::Controls::Native::Android::Typeface** __retval);
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::Android::Typeface** __retval);

struct TypefaceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _typefaces_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _typefaces() { return _typefaces_; }

    static ::g::Fuse::Controls::Native::Android::Typeface* GetTypeface(::g::Fuse::Font* font);
    static ::g::Fuse::Controls::Native::Android::Typeface* GetTypefaceFromBundleFile(::g::Uno::IO::BundleFile* file);
    static ::g::Fuse::Controls::Native::Android::Typeface* GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
