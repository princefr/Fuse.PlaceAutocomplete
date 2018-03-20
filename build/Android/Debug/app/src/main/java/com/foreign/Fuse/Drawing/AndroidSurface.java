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

public class AndroidSurface
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void ConcatTransform295(final Object cp,final Object m)
    {
        GraphicsSurfaceContext ctx = (GraphicsSurfaceContext) cp;
        Canvas canvas = ctx.canvas;
        Matrix matrix = (Matrix) m;
        
        canvas.concat(matrix);
    }
    
    public static Object CreateFillPaint296()
    {
        Paint paint = new Paint();
        paint.setFlags(Paint.ANTI_ALIAS_FLAG);
        return paint;
    }
    
    public static Object CreateLinearGradient297(final com.uno.IntArray colors,final com.uno.FloatArray stops)
    {
        LinearGradientStore store = new LinearGradientStore();
        store.colors = colors.copyArray();
        store.stops = stops.copyArray();
        return store;
    }
    
    public static Object CreateStrokedPaint298(final float width,final int fjoin,final int fcap,final float miterLimit)
    {
        Paint paint = new Paint();
        
        paint.setStrokeMiter(miterLimit);
        paint.setStrokeCap(Paint.Cap.BUTT);
        paint.setStrokeJoin(Paint.Join.MITER);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(width);
        paint.setFlags(Paint.ANTI_ALIAS_FLAG);
        
        return paint;
    }
    
    public static void FillPathImage299(final Object cp,final Object pathAsObject,final Object imageAsObject,final float originX,final float originY,final float tileSizeX,final float tileSizeY,final float width,final float height,final boolean eoFill,final Object paintAsObject)
    {
        // TODO: reimplement - should wait for upstream changes first
        // see comments on this function in the CoreGraphicsSurface implementation
        // of this function
        
        
        if (tileSizeX == 0 || tileSizeY == 0)
        	return;
        
        GraphicsSurfaceContext context = (GraphicsSurfaceContext) cp;
        Canvas canvas = context.canvas;
        Bitmap image = (Bitmap) imageAsObject;
        Path path = (Path) pathAsObject;
        
        path.setFillType(eoFill ? Path.FillType.EVEN_ODD : Path.FillType.WINDING);
        
        int index = canvas.save();
        
        image.prepareToDraw();
        
        Paint paint = (Paint)paintAsObject;
        Bitmap scaledBitmap = Bitmap.createScaledBitmap(
        	image,
        	(int)tileSizeX,
        	(int)tileSizeY,
        	true
        );
        
        // flip the image so that it displays correctly
        Matrix matrix = new Matrix();
        matrix.preScale(1, -1);
        scaledBitmap = Bitmap.createBitmap(scaledBitmap, 0, 0, (int)tileSizeX, (int)tileSizeY, matrix, true);
        
        BitmapShader shader = new BitmapShader(scaledBitmap, Shader.TileMode.REPEAT, Shader.TileMode.REPEAT);
        paint.setShader(shader);
        
        canvas.clipPath(path);
        canvas.drawPath(path, paint);
        canvas.restoreToCount(index);
    }
    
    public static void FillPathLinearGradient300(final Object cp,final Object path,final Object gradientStore,final float startX,final float startY,final float endX,final float endY,final boolean eoFill,final Object pretendPaint)
    {
        GraphicsSurfaceContext context = (GraphicsSurfaceContext) cp;
        
        Paint paint = null;
        
        paint = (Paint) pretendPaint;
        if (paint == null) paint = new Paint();
        
        LinearGradientStore store = (LinearGradientStore) gradientStore;
        
        LinearGradient gradient = new LinearGradient(
        	startX, startY,
        	endX, endY,
        	store.colors, store.stops,
        TileMode.CLAMP);
        
        paint.setShader(gradient);
        
        // this is different from iOS
        // iOS draws relative to the _entire_ canvas
        // and therefore needs to clip to the path before drawing
        // On Android, we can just call `drawPath` which clips
        // to the right area for us
        Canvas canvas = context.canvas;
        int index = canvas.save();
        canvas.drawPath((Path) path, paint);
        canvas.restoreToCount(index);
    }
    
    public static void FillPathSolidColor301(final Object cp,final Object pathAsObject,final int color,final boolean eoFill,final Object pretendPaint)
    {
        GraphicsSurfaceContext context = (GraphicsSurfaceContext) cp;
        Path path = (Path) pathAsObject;
        
        path.setFillType(eoFill ? Path.FillType.EVEN_ODD : Path.FillType.WINDING);
        
        Paint paint = (Paint) pretendPaint;
        if (paint == null)
        {
        	paint = new Paint();
        }
        
        paint.setColor(color);
        context.canvas.drawPath(path, paint);
    }
    
    public static Object NewContext302()
    {
        return new GraphicsSurfaceContext();
    }
    
    public static void PathClose303(final Object pathAsObject)
    {
        Path path = (Path) pathAsObject;
        path.close();
    }
    
    public static Object PathCreateMutable304()
    {
        return new Path();
    }
    
    public static void PathCurveTo305(final Object pathAsObject,final float x,final float y,final float ax,final float ay,final float bx,final float by)
    {
        Path path = (Path) pathAsObject;
        path.cubicTo(ax, ay, bx, by, x, y);
    }
    
    public static void PathLineTo306(final Object pathAsObject,final float x,final float y)
    {
        Path path = (Path) pathAsObject;
        path.lineTo(x, y);
    }
    
    public static void PathMoveTo307(final Object pathAsObject,final float x,final float y)
    {
        Path path = (Path) pathAsObject;
        path.moveTo( x, y );
    }
    
    public static void recycleBitmap308(final Object bit)
    {
        ((Bitmap) bit).recycle();
    }
    
    public static void RestoreContextState309(final Object cp)
    {
        GraphicsSurfaceContext ctx = (GraphicsSurfaceContext) cp;
        ctx.canvas.restore();
    }
    
    public static int SaveContextState310(final Object cp)
    {
        GraphicsSurfaceContext ctx = (GraphicsSurfaceContext) cp;
        return ctx.canvas.save();
    }
    
    public static Object ToMatrix311(final UnoObject _this, final com.uno.FloatArray matrix)
    {
        android.graphics.Matrix m = new android.graphics.Matrix();
        m.setValues(matrix.copyArray());
        return m;
    }
    
}
