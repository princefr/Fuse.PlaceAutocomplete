package com.foreign.Uno.Platform;

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

public class AndroidDisplay
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static float _getDensity52()
    {
        android.util.DisplayMetrics metrics = new android.util.DisplayMetrics();
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.JELLY_BEAN_MR1) {
            com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getRealMetrics(metrics);
        } else {
            com.fuse.Activity.getRootActivity().getWindowManager().getDefaultDisplay().getMetrics(metrics);
        }
        return metrics.density;
    }
    
    public static void JavaEnableTicks53(final UnoObject _this)
    {
        final UnoObject display = _this;
        if (ExternedBlockHost.callUno_Uno_Platform_AndroidDisplay__initializedGet54()) return;
        ExternedBlockHost.callUno_Uno_Platform_AndroidDisplay__initializedSet54(true);
        
        if (android.os.Build.VERSION.SDK_INT >= 16)
        {
            android.view.Choreographer.getInstance().postFrameCallback(new android.view.Choreographer.FrameCallback()
            {
                android.view.Choreographer _choreographer = android.view.Choreographer.getInstance();
                long _previousTimeNanos = 0;
                public void doFrame(long frameTimeNanos)
                {
                    if (ExternedBlockHost.callUno_Uno_Platform_AndroidDisplay__initializedGet54())
                        _choreographer.postFrameCallback(this);
                    double currentTime = frameTimeNanos * 1e-9;
                    double deltaTime = (frameTimeNanos - _previousTimeNanos) * 1e-9;
                    ExternedBlockHost.callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55((UnoObject)display,(double)currentTime,(double)deltaTime);
                    _previousTimeNanos = frameTimeNanos;
                }
            });
        }
        else
        {
            android.animation.TimeAnimator timeAnimator = new android.animation.TimeAnimator();
            timeAnimator.setDuration(Long.MAX_VALUE);
            timeAnimator.setTimeListener(new android.animation.TimeAnimator.TimeListener()
            {
                public void onTimeUpdate(android.animation.TimeAnimator animation, long totalTime, long deltaTime)
                {
                    ExternedBlockHost.callUno_Uno_Platform_AndroidDisplay_OnFrameCallback55((UnoObject)display,(double)totalTime / 1000.0,(double)deltaTime / 1000.0);
                }
            });
            timeAnimator.start();
        }
    }
    
}
