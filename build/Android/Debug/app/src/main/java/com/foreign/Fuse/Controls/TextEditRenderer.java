package com.foreign.Fuse.Controls;

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

public class TextEditRenderer
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void CopyState293(final Object sourceHandle,final Object targetHandle,final boolean updateTextAlignment,final boolean isMultiline,final int width,final int height)
    {
        android.widget.EditText source = (android.widget.EditText)sourceHandle;
        android.widget.EditText target = (android.widget.EditText)targetHandle;
        
        // Use setText and setTextColor for both text and hint.
        // Setting the hint and hintTextColor breaks text alignment
        // when the alignment is set to right.
        java.lang.String text = source.getText().toString();
        boolean isHint = text.length() == 0;
        
        target.setText(isHint ? source.getHint() : text);
        target.setTextColor(isHint ? source.getCurrentHintTextColor() : source.getCurrentTextColor());
        
        target.setImeOptions(source.getImeOptions());
        target.setIncludeFontPadding(source.getIncludeFontPadding());
        target.setTransformationMethod(isHint ? null : source.getTransformationMethod());
        
        // Setting the inputtype causes bugs when rendering RTL text,
        // it triggers the same symptoms as the TextAlignment bug below.
        // Assuming not copying this state is safe since it does not affect
        // the rendering. No idea why this happens...
        
        // target.setInputType(source.getInputType());
        
        target.setTextSize(android.util.TypedValue.COMPLEX_UNIT_PX, source.getTextSize());
        target.setTypeface(source.getTypeface());
        target.setLineSpacing(source.getLineSpacingExtra(), source.getLineSpacingMultiplier());
        target.setPadding(
        	source.getPaddingLeft(),
        	source.getPaddingTop(),
        	source.getPaddingRight(),
        	source.getPaddingBottom());
        target.setTextScaleX(source.getTextScaleX());
        
        target.setLayoutParams(new android.widget.FrameLayout.LayoutParams(width, height));
        
        if (android.os.Build.VERSION.SDK_INT >= 17)
        	target.setTextAlignment(android.view.View.TEXT_ALIGNMENT_GRAVITY);
        
        target.setGravity(source.getGravity());
        
        target.setHorizontallyScrolling(!isMultiline);
        
        if (updateTextAlignment)
        {
        	// This piece of code fixes the textalignment issues we have
        	// been having for a long time. What happens is that TextView/EditText
        	// has some internal state for text alignment that is not updated when
        	// setting properties like textAlignment/gravity/scroll etc.
        	// Reading the TextView code, I found that the following method
        	// calls will hit the codepaths that update the text alignment state
        	target.setSelection(source.getSelectionStart(), source.getSelectionEnd());
        	target.layout(0, 0, width, height);
        	target.onPreDraw();
        }
        else
        {
        	// One cause of the issue above is that the source TextEdit's scrollposition
        	// does not have a valid value. One frame after changing textalignment this state
        	// will be valid
        	target.setScrollX(source.getScrollX());
        	target.setScrollY(source.getScrollY());
        }
    }
    
    public static Object CreateTextEdit294()
    {
        android.widget.EditText tv = new android.widget.EditText(com.fuse.Activity.getRootActivity());
        tv.setBackgroundResource(0);
        return tv;
    }
    
}
