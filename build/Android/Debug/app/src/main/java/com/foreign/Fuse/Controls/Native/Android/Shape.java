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

public class Shape
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object Create176()
    {
        return new android.view.View(com.fuse.Activity.getRootActivity());
    }
    
    public static Object CreateShapeDrawable177()
    {
        return new android.graphics.drawable.ShapeDrawable();
    }
    
    public static Object GetLayer178(final Object handle,final int layer)
    {
        android.graphics.drawable.LayerDrawable layerDrawable = (android.graphics.drawable.LayerDrawable)handle;
        return layerDrawable.getDrawable(layer);
    }
    
    public static Object MakeLayerDrawable179(final Object handle,final int layerCount)
    {
        android.view.View view = (android.view.View)handle;
        android.graphics.drawable.Drawable[] drawables = new android.graphics.drawable.Drawable[layerCount];
        
        for (int i = 0; i < layerCount; i++)
        {
        	drawables[i] = new android.graphics.drawable.ShapeDrawable();
        }
        
        android.graphics.drawable.LayerDrawable layerDrawable = new android.graphics.drawable.LayerDrawable(drawables);
        
        if (android.os.Build.VERSION.SDK_INT >= 16)
        {
        	view.setBackground(layerDrawable);
        }
        else
        {
        	view.setBackgroundDrawable(layerDrawable);
        }
        
        return layerDrawable;
    }
    
    public static void SetShapeDrawableColor180(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)shapeDrawable;
        sd.getPaint().setARGB(a, r, g, b);
        sd.setAlpha(opacity);
    }
    
    public static void SetShapeDrawableLinearGradient181(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)shapeDrawable;
        sd.setShaderFactory(new android.graphics.drawable.ShapeDrawable.ShaderFactory() {
        
        	public android.graphics.Shader resize(int width, int height) {
        			return new android.graphics.LinearGradient(
        				startX,
        				startY,
        				width * endX,
        				height * endY,
        				colors.copyArray(),
        				positions.copyArray(),
        				android.graphics.Shader.TileMode.CLAMP);
        		}
        
        	});
    }
    
    public static void SetShapeDrawableStrokeWidth182(final Object shapeDrawable,final float width)
    {
        android.graphics.drawable.ShapeDrawable sd = (android.graphics.drawable.ShapeDrawable)shapeDrawable;
        sd.getPaint().setStyle(android.graphics.Paint.Style.STROKE);
        sd.getPaint().setStrokeWidth(width);
    }
    
}
