package com.foreign.Fuse.Android;

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

public class TextPaint
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object Create371()
    {
        return new android.text.TextPaint();
    }
    
    public static void GetTextBounds372(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        android.graphics.Rect rect = new android.graphics.Rect();
        ((android.text.TextPaint)handle).getTextBounds(text, start, end, rect);
        r.set(0, rect.left);
        r.set(1, rect.top);
        r.set(2, rect.right);
        r.set(3, rect.bottom);
    }
    
    public static void SetAntiAlias373(final Object handle,final boolean value)
    {
        ((android.text.TextPaint)handle).setAntiAlias(value);
    }
    
    public static void SetColor374(final Object handle,final int color)
    {
        ((android.text.TextPaint)handle).setColor(color);
    }
    
    public static void SetTextSize375(final Object handle,final float textSize)
    {
        ((android.text.TextPaint)handle).setTextSize(textSize);
    }
    
    public static void SetTypeface376(final Object paintHandle,final Object typefaceHandle)
    {
        ((android.text.TextPaint)paintHandle).setTypeface(((android.graphics.Typeface)typefaceHandle));
    }
    
}
