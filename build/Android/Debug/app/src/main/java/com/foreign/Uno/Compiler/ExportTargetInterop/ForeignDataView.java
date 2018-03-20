package com.foreign.Uno.Compiler.ExportTargetInterop;

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

public class ForeignDataView
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object CreateInnerJava51(final Object directBuffer,final UnoObject unoObj)
    {
        java.nio.ByteBuffer buf = (java.nio.ByteBuffer)directBuffer;
        try
        {
            return new com.uno.UnoBackedByteBuffer(buf, unoObj);
        }
        catch (Exception e)
        {
            return null; // this is unfortunate but we need to handle java's checked exceptions
                         // before we can fix this properly
        }
    }
    
}
