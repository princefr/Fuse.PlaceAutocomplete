package com.foreign.Android;

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
import android.app.Activity;
import android.content.Intent;

public class ActivityUtils
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object GetRootActivity63()
    {
        return com.fuse.Activity.getRootActivity();
    }
    
    public static Object Init64()
    {
        com.fuse.Activity.ResultListener l = new com.fuse.Activity.ResultListener() {
            @Override public boolean onResult(int requestCode, int resultCode, android.content.Intent data) {
                return ExternedBlockHost.callUno_Android_ActivityUtils_OnReceived65((int)requestCode,(int)resultCode,(Object)data,UnoHelper.GetUnoObjectRef((Object)data));
            }
        };
        com.fuse.Activity.subscribeToResults(l);
        return l;
    }
    
    public static void StartActivity66(final Object _intent)
    {
        Activity a = com.fuse.Activity.getRootActivity();
        a.startActivity((Intent)_intent);
    }
    
    public static void StartForResultJava67(final int id,final Object _intent)
    {
        Activity a = com.fuse.Activity.getRootActivity();
        a.startActivityForResult((Intent)_intent, id);
    }
    
}
