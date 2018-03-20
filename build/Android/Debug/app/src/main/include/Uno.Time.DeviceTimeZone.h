// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Time/Timezones/DeviceTimeZone.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Time.DateTimeZone.h>
namespace g{namespace Uno{namespace Time{struct DeviceTimeZone;}}}
namespace g{namespace Uno{namespace Time{struct LocalDateTime;}}}
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public sealed class DeviceTimeZone :5
// {
::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();
void DeviceTimeZone__EqualsImpl_fn(DeviceTimeZone* __this, ::g::Uno::Time::DateTimeZone* other, bool* __retval);
void DeviceTimeZone__GetHashCode_fn(DeviceTimeZone* __this, int* __retval);
void DeviceTimeZone__GetUtcOffset_fn(DeviceTimeZone* __this, ::g::Uno::Time::LocalDateTime* dateTime, ::g::Uno::Time::Offset* __retval);
void DeviceTimeZone__ToString_fn(DeviceTimeZone* __this, uString** __retval);

struct DeviceTimeZone : ::g::Uno::Time::DateTimeZone
{
};
// }

}}} // ::g::Uno::Time
