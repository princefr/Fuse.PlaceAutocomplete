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

public class SurfaceView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void AddCallback189(final UnoObject _this, final Object handle)
    {
        ((android.view.SurfaceView)handle).getHolder().addCallback(new android.view.SurfaceHolder.Callback2() {
        	public void surfaceRedrawNeeded(android.view.SurfaceHolder holder) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded190((UnoObject)_this,(Object)holder,UnoHelper.GetUnoObjectRef((Object)holder));
        	}
        	public void surfaceChanged(android.view.SurfaceHolder holder, int format, int width, int height) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged191((UnoObject)_this,(Object)holder,(int)format,(int)width,(int)height,UnoHelper.GetUnoObjectRef((Object)holder));
        	}
        	public void surfaceCreated(android.view.SurfaceHolder holder) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated192((UnoObject)_this,(Object)holder,UnoHelper.GetUnoObjectRef((Object)holder));
        	}
        	public void surfaceDestroyed(android.view.SurfaceHolder holder) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed193((UnoObject)_this,(Object)holder,UnoHelper.GetUnoObjectRef((Object)holder));
        	}
        });
    }
    
    public static Object Create194()
    {
        android.view.SurfaceView surfaceView = new android.view.SurfaceView(com.fuse.Activity.getRootActivity());
        surfaceView.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return surfaceView;
    }
    
    public static Object GetSurface195(final Object holder)
    {
        return ((android.view.SurfaceHolder)holder).getSurface();
    }
    
}
