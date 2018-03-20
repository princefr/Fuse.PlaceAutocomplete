// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Runtime/Implementation/BufferImpl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{struct BufferImpl;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// public static class BufferImpl :7
// {
uClassType* BufferImpl_typeof();
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian);
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian);

struct BufferImpl : uObject
{
    static void SetFloat(uArray* buffer, int offset, float value, bool littleEndian);
    static void SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian);
};
// }

}}}} // ::g::Uno::Runtime::Implementation
