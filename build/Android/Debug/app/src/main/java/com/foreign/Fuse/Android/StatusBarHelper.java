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

// user defined imports
import android.graphics.Color;
import android.os.Build;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;
import android.view.WindowManager.LayoutParams;

public class StatusBarHelper
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static int GetStatusBarColor367()
    {
        Window window = com.fuse.Activity.getRootActivity().getWindow();
        if (Build.VERSION.SDK_INT >= 21)
        	return window.getStatusBarColor();
        else
        	return Color.BLACK;
    }
    
    public static void InstallGlobalListener368()
    {
        Window window = com.fuse.Activity.getRootActivity().getWindow();
        window.getDecorView().getViewTreeObserver().addOnGlobalFocusChangeListener(
        	new ViewTreeObserver.OnGlobalFocusChangeListener() {
        		boolean _focusWasEditText;
        		public void onGlobalFocusChanged(View oldFocus, View newFocus) {
        			if (_focusWasEditText)
        				ExternedBlockHost.callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar369();
        
        			_focusWasEditText = newFocus instanceof android.widget.EditText;
        		}
        	}
        );
    }
    
    public static boolean SetStatusBarColor370(final int color)
    {
        Window window = com.fuse.Activity.getRootActivity().getWindow();
        if (Build.VERSION.SDK_INT >= 21)
        {
        	window.addFlags(LayoutParams.FLAG_DRAWS_SYSTEM_BAR_BACKGROUNDS);
        	window.setStatusBarColor(color);
        	return true;
        }
        else
        	return false;
    }
    
}
