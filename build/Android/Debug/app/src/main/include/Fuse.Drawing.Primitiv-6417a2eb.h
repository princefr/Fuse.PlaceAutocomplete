// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.4.2/Rectangle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Primitiv-caafe7bf.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// internal sealed class StrokeCoverage :46
// {
uType* StrokeCoverage_typeof();
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this);
void StrokeCoverage__New1_fn(StrokeCoverage** __retval);

struct StrokeCoverage : ::g::Fuse::Drawing::Primitives::Coverage
{
    float Radius;
    float Center;

    void ctor_1();
    static StrokeCoverage* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
