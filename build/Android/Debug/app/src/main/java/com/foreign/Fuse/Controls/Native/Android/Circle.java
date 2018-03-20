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

// user defined imports
import android.graphics.RectF;

public class Circle
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void UpdateShapeDrawable1122(final UnoObject _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)handle;
        float start = useAngle ? startAngle : 0.0f;
        float end = useAngle ? endAngle : 360.0f;
        android.graphics.Path path = new android.graphics.Path();
        path.addArc(new RectF(0.0f, 0.0f, width, height), start, end - start);
        android.graphics.drawable.shapes.PathShape ps = new android.graphics.drawable.shapes.PathShape(path, width, height);
        sd.setShape(ps);
    }
    
}
