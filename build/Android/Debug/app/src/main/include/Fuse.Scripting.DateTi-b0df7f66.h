// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.Wrapping.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct DateTimeConverterHelpers;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal static class DateTimeConverterHelpers :11
// {
uClassType* DateTimeConverterHelpers_typeof();
void DateTimeConverterHelpers__ConvertDateTimeToJSDate_fn(::g::Uno::DateTime* dt, ::g::Fuse::Scripting::Function* dateCtor, uObject** __retval);
void DateTimeConverterHelpers__ConvertDateToDateTime_fn(::g::Fuse::Scripting::Object* date, ::g::Uno::DateTime* __retval);

struct DateTimeConverterHelpers : uObject
{
    static uObject* ConvertDateTimeToJSDate(::g::Uno::DateTime dt, ::g::Fuse::Scripting::Function* dateCtor);
    static ::g::Uno::DateTime ConvertDateToDateTime(::g::Fuse::Scripting::Object* date);
};
// }

}}} // ::g::Fuse::Scripting
