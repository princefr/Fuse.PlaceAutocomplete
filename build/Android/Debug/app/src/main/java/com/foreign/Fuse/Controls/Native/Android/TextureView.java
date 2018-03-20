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

public class TextureView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object Create216()
    {
        android.view.TextureView textureView = new android.view.TextureView(com.fuse.Activity.getRootActivity());
        textureView.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.FILL_PARENT, android.view.ViewGroup.LayoutParams.FILL_PARENT));
        return textureView;
    }
    
    public static void InstallSurfaceListener217(final UnoObject _this, final Object handle)
    {
        ((android.view.TextureView)handle).setSurfaceTextureListener(new android.view.TextureView.SurfaceTextureListener() {
        	public void onSurfaceTextureAvailable(android.graphics.SurfaceTexture surface, int width, int height) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureAvailable218((UnoObject)_this,(Object)new android.view.Surface(surface),UnoHelper.GetUnoObjectRef((Object)new android.view.Surface(surface)));
        	}
        	public boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture surface) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextureView_OnSurfaceTextureDestroyed219((UnoObject)_this);
        		return true;
        	}
        	public void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture surface, int width, int height) {
        
        	}
        	public void onSurfaceTextureUpdated(android.graphics.SurfaceTexture surface) {
        
        	}
        });
    }
    
}
