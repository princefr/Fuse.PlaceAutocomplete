package com.foreign.Uno;

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

public class Guid
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static Object NewGuid59()
    {
        java.util.UUID guid = java.util.UUID.randomUUID();
        java.nio.ByteBuffer buffer = java.nio.ByteBuffer.allocate(16);
        long highSig = guid.getMostSignificantBits();
        buffer.order(java.nio.ByteOrder.LITTLE_ENDIAN);
        buffer.putInt((int)(highSig >> 32));
        buffer.putShort((short)(highSig >> 16));
        buffer.putShort((short)highSig);
        buffer.order(java.nio.ByteOrder.BIG_ENDIAN);
        buffer.putLong(guid.getLeastSignificantBits());
        byte[] result = buffer.array();
        return ExternedBlockHost.callUno_Uno_Guid__ctor60((com.uno.ByteArray)new ByteArray(result));
    }
    
}
