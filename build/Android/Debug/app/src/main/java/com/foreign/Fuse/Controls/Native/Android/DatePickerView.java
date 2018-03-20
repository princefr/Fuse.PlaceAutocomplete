package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class DatePickerView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object Create123()
    {
        return new android.widget.DatePicker(com.apps.fuse.placeautocomplete.fuseplaceautocomplete.GetRootActivity());
    }
    
    public static int GetApiLevel124()
    {
        return android.os.Build.VERSION.SDK_INT;
    }
    
    public static long GetDateInMsSince1970InUtc125(final UnoObject _this, final Object datePickerHandle)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // Remove time/zone/dst offsets and set time to midnight so we only express the date in UTC
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        
        cal.set(java.util.Calendar.YEAR, datePicker.getYear());
        cal.set(java.util.Calendar.MONTH, datePicker.getMonth());
        cal.set(java.util.Calendar.DAY_OF_MONTH, datePicker.getDayOfMonth());
        
        cal.set(java.util.Calendar.AM_PM, java.util.Calendar.AM);
        cal.set(java.util.Calendar.HOUR, 0);
        cal.set(java.util.Calendar.MINUTE, 0);
        cal.set(java.util.Calendar.SECOND, 0);
        cal.set(java.util.Calendar.MILLISECOND, 0);
        
        return cal.getTimeInMillis();
    }
    
    public static void Init126(final UnoObject _this, final Object datePickerHandle)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // Use local calendar to get default year/month/day
        java.util.Calendar cal = java.util.Calendar.getInstance();
        
        int y = cal.get(java.util.Calendar.YEAR);
        int m = cal.get(java.util.Calendar.MONTH);
        int d = cal.get(java.util.Calendar.DAY_OF_MONTH);
        
        // onDateChangedListener is extremely inconsistent, esp. when using the now-default material theme,
        //  so let's just skip trying to use it altogether and go for a polling-based approach instead.
        datePicker.init(y, m, d, null);
    }
    
    public static void SetDate127(final UnoObject _this, final Object datePickerHandle,final long msSince1970InUtc)
    {
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        cal.setTimeInMillis(msSince1970InUtc);
        
        int y = cal.get(java.util.Calendar.YEAR);
        int m = cal.get(java.util.Calendar.MONTH);
        int d = cal.get(java.util.Calendar.DAY_OF_MONTH);
        
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        datePicker.updateDate(y, m, d);
    }
    
    public static void SetMaxValue128(final UnoObject _this, final Object datePickerHandle,final long msSince1970InUtc)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // setMinDate and setMaxDate take in milliseconds since midnight, January 1, 1970, _in getDefault()
        //  time zone_, not necessarily UTC. To compensate for this, we need to offset the incoming
        //  UTC-relative ticks by subtracting the default time zone offset. Note that the time zone offset
        //  actually depends on the incoming UTC time, as different dates will have different time offsets.
        
        long timezoneRelativeOffset = java.util.TimeZone.getDefault().getOffset(msSince1970InUtc);
        long javaTicksInDefaultTimezone = msSince1970InUtc - timezoneRelativeOffset;
        
        datePicker.setMaxDate(javaTicksInDefaultTimezone);
    }
    
    public static void SetMinValue129(final UnoObject _this, final Object datePickerHandle,final long msSince1970InUtc)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // setMinDate and setMaxDate take in milliseconds since midnight, January 1, 1970, _in getDefault()
        //  time zone_, not necessarily UTC. To compensate for this, we need to offset the incoming
        //  UTC-relative ticks by subtracting the default time zone offset. Note that the time zone offset
        //  actually depends on the incoming UTC time, as different dates will have different time offsets.
        
        long timezoneRelativeOffset = java.util.TimeZone.getDefault().getOffset(msSince1970InUtc);
        long javaTicksInDefaultTimezone = msSince1970InUtc - timezoneRelativeOffset;
        
        datePicker.setMinDate(javaTicksInDefaultTimezone);
    }
    
}
