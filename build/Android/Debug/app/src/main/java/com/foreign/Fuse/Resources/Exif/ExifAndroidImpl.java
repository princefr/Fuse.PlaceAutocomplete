package com.foreign.Fuse.Resources.Exif;

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
import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.io.IOException;
import com.drew.imaging.ImageMetadataReader;
import com.drew.imaging.ImageProcessingException;
import com.drew.metadata.Metadata;
import com.drew.metadata.MetadataException;
import com.drew.metadata.exif.ExifIFD0Directory;

public class ExifAndroidImpl
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static int GetOrientation116(final Object stream)
    {
        InputStream s = (InputStream)stream;
        try {
        	Metadata metadata = ImageMetadataReader.readMetadata(s);
        	ExifIFD0Directory directory = metadata.getFirstDirectoryOfType(ExifIFD0Directory.class);
        
        	if (directory != null && directory.containsTag(ExifIFD0Directory.TAG_ORIENTATION)) {
        		return directory.getInt(ExifIFD0Directory.TAG_ORIENTATION);
        	}
        }
        catch (Exception e) {
        	e.printStackTrace();
        }
        return -1;
    }
    
    public static Object InputStreamFromByteArray117(final Object buf)
    {
        return new com.fuse.android.ByteBufferInputStream((com.uno.UnoBackedByteBuffer)buf);
    }
    
}
