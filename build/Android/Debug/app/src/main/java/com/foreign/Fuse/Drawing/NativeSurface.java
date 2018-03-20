package com.foreign.Fuse.Drawing;

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
import android.graphics.Canvas;
import android.graphics.Bitmap;
import android.graphics.Shader;
import android.graphics.BitmapShader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Path;
import android.opengl.GLUtils;
import android.opengl.GLES20;
import android.graphics.Paint;
import android.graphics.LinearGradient;
import android.graphics.Shader.TileMode;
import android.graphics.Color;
import android.graphics.PorterDuffXfermode;
import android.graphics.Matrix;
import android.graphics.PorterDuff.Mode;
import com.fusetools.drawing.surface.LinearGradientStore;
import com.fusetools.drawing.surface.GraphicsSurfaceContext;
import java.nio.ByteBuffer;
import java.nio.IntBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

public class NativeSurface
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object DummyBitmap316()
    {
        return Bitmap.createBitmap(10,10,Bitmap.Config.ARGB_8888);
    }
    
    public static void SetCanvas317(final Object context,final Object canvas)
    {
        GraphicsSurfaceContext impl = (GraphicsSurfaceContext) context;
        impl.canvas = (Canvas)canvas;
    }
    
}
