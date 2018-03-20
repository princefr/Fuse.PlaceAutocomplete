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

public class FocusChangedListener
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void ClearListener131(final Object viewHandle)
    {
        ((android.view.View)viewHandle).setOnFocusChangeListener(null);
    }
    
    public static Object Create132(final UnoObject _this)
    {
        android.view.View.OnFocusChangeListener listener = new android.view.View.OnFocusChangeListener() {
        	public void onFocusChange(android.view.View view, boolean hasFocus) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange133((UnoObject)_this,(boolean)hasFocus);
        	}
        };
        return listener;
    }
    
    public static void SetListener134(final Object viewHandle,final Object listenerHandle)
    {
        ((android.view.View)viewHandle).setOnFocusChangeListener(((android.view.View.OnFocusChangeListener)listenerHandle));
    }
    
}
