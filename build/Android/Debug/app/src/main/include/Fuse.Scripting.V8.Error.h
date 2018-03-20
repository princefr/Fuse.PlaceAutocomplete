// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/V8/V8SimpleExtensions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{struct Error;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{

// internal static extern class Error :336
// {
uClassType* Error_typeof();
void Error__Check_fn(::JSContext** context, ::JSScriptException** err, uDelegate* handler);
void Error__Check1_fn(int* err);

struct Error : uObject
{
    static void Check(::JSContext* context, ::JSScriptException* err, uDelegate* handler);
    static void Check1(int err);
};
// }

}}}} // ::g::Fuse::Scripting::V8
