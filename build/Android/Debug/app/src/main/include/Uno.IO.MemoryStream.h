// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/IO/MemoryStream.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.Stream.h>
namespace g{namespace Uno{namespace IO{struct MemoryStream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class MemoryStream :7
// {
::g::Uno::IO::Stream_type* MemoryStream_typeof();
void MemoryStream__ctor_1_fn(MemoryStream* __this);
void MemoryStream__get_Capacity_fn(MemoryStream* __this, int* __retval);
void MemoryStream__EnsureCapacity_fn(MemoryStream* __this, int* byteCount);
void MemoryStream__GetBuffer_fn(MemoryStream* __this, uArray** __retval);
void MemoryStream__get_Length_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__New1_fn(MemoryStream** __retval);
void MemoryStream__get_Position_fn(MemoryStream* __this, int64_t* __retval);
void MemoryStream__set_Position_fn(MemoryStream* __this, int64_t* value);
void MemoryStream__Read_fn(MemoryStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval);
void MemoryStream__ResizeTo_fn(MemoryStream* __this, int* newSize);
void MemoryStream__Write_fn(MemoryStream* __this, uArray* src, int* byteOffset, int* byteCount);

struct MemoryStream : ::g::Uno::IO::Stream
{
    bool _canWrite;
    bool _canResize;
    uStrong<uArray*> _buffer;
    int _nextIncrease;
    int64_t _length;
    int64_t _Position;

    void ctor_1();
    int Capacity();
    void EnsureCapacity(int byteCount);
    uArray* GetBuffer();
    int64_t Length();
    int64_t Position();
    void Position(int64_t value);
    void ResizeTo(int newSize);
    void Write(uArray* src, int byteOffset, int byteCount);
    static MemoryStream* New1();
};
// }

}}} // ::g::Uno::IO
