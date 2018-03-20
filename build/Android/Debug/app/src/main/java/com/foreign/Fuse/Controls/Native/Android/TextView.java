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

public class TextView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object Create220()
    {
        return new android.widget.TextView(com.fuse.Activity.getRootActivity());
    }
    
    public static void SetFont221(final Object handle,final Object fontHandle)
    {
        ((android.widget.TextView)handle).setTypeface(((android.graphics.Typeface)fontHandle));
    }
    
    public static void SetFontSize222(final Object handle,final float size)
    {
        ((android.widget.TextView)handle).setTextSize(android.util.TypedValue.COMPLEX_UNIT_DIP, size);
    }
    
    public static void SetLineSpacing223(final Object handle,final float spacing)
    {
        ((android.widget.TextView)handle).setLineSpacing(spacing, 1.0f);
    }
    
    public static void SetMaxLength224(final Object handle,final int maxLength)
    {
        android.widget.TextView t = (android.widget.TextView)handle;
        android.text.InputFilter[] filters = new android.text.InputFilter[1];
        filters[0] = new android.text.InputFilter.LengthFilter(maxLength);
        t.setFilters(filters);
    }
    
    public static void SetText225(final Object handle,final String text)
    {
        ((android.widget.TextView)handle).setText(text);
        if (handle instanceof android.widget.EditText) {
        	((android.widget.EditText)handle).setSelection(text.length());
        }
    }
    
    public static void SetTextAlignment226(final Object handle,final int alignment)
    {
        if (android.os.Build.VERSION.SDK_INT >= 17)
        	((android.widget.TextView)handle).setTextAlignment(android.view.View.TEXT_ALIGNMENT_GRAVITY);
        
        ((android.widget.TextView)handle).setGravity(alignment);
    }
    
    public static void SetTextColor227(final Object handle,final int color)
    {
        ((android.widget.TextView)handle).setTextColor(color);
    }
    
    public static void SetTextWrapping228(final Object handle,final boolean wrap)
    {
        ((android.widget.TextView)handle).setHorizontallyScrolling( (wrap) ? false : true );
    }
    
}
