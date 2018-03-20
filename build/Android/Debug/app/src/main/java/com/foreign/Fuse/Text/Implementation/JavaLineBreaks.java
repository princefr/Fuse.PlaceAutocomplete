package com.foreign.Fuse.Text.Implementation;

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
import java.nio.ByteBuffer;
import java.text.BreakIterator;

public class JavaLineBreaks
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void CopyLineBreaks324(final String text,final Object outByteBufferHandle)
    {
        ByteBuffer outByteBuffer = (ByteBuffer)outByteBufferHandle;
        BreakIterator bi = BreakIterator.getLineInstance();
        bi.setText(text);
        
        final int bytesize = 8;
        
        int boundary = bi.first();
        while (boundary != BreakIterator.DONE)
        {
        	int i = boundary / bytesize;
        	byte mask = (byte)(1 << (boundary % bytesize));
        	outByteBuffer.put(i, (byte)(outByteBuffer.get(i) | mask));
        	boundary = bi.next();
        }
    }
    
}
