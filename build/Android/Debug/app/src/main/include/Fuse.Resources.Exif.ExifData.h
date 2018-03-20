// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.4.2/Resources/Exif/Exif.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifData;}}}}

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// public struct ExifData :21
// {
uStructType* ExifData_typeof();
void ExifData__ctor__fn(ExifData* __this, int* orientation);
void ExifData__FromByteArray_fn(uArray* buffer, ExifData* __retval);
void ExifData__New1_fn(int* orientation, ExifData* __retval);

struct ExifData
{
    int Orientation;

    void ctor_(int orientation);
};

ExifData ExifData__FromByteArray(uArray* buffer);
ExifData ExifData__New1(int orientation);
// }

}}}} // ::g::Fuse::Resources::Exif
