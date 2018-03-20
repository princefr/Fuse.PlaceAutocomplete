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

public class AppRoot
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void ClearRoot1345(final Object handle)
    {
        ((android.widget.FrameLayout)handle).removeAllViews();
    }
    
    public static Object CreateRootView346()
    {
        android.widget.FrameLayout frameLayout = new android.widget.FrameLayout(com.apps.fuse.placeautocomplete.fuseplaceautocomplete.GetRootActivity()) {
        
        		android.view.MotionEvent _currentEvent;
        
        		public boolean onInterceptTouchEvent(android.view.MotionEvent motionEvent) {
        			_currentEvent = motionEvent;
        			return super.onInterceptTouchEvent(motionEvent);
        		}
        
        		public boolean onTouchEvent(android.view.MotionEvent motionEvent) {
        			if (_currentEvent != motionEvent)
        				return false;
        			boolean result = super.onTouchEvent(motionEvent);
        			ExternedBlockHost.callUno_Fuse_Android_AppRoot_OnTouchEvent__347((Object)motionEvent,UnoHelper.GetUnoObjectRef((Object)motionEvent));
        			return _currentEvent == motionEvent;
        		}
        
        	};
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
    public static void SetRootView1348(final Object handle,final Object rootHandle)
    {
        ((android.widget.FrameLayout)handle).addView(((android.view.View)rootHandle));
    }
    
}
