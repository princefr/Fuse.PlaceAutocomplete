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
import android.view.View.MeasureSpec;

public class TextInput
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void AddEditorActionListener201(final UnoObject _this, final Object handle)
    {
        ((android.widget.TextView)handle).setOnEditorActionListener(new android.widget.TextView.OnEditorActionListener() {
        	public boolean onEditorAction(android.widget.TextView v, int actionId, android.view.KeyEvent ke) {
        		return ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction202((UnoObject)_this,(int)actionId);
        	}
        });
    }
    
    public static void AddTextChangedListener203(final UnoObject _this, final Object handle)
    {
        ((android.widget.TextView)handle).addTextChangedListener(new android.text.TextWatcher() {
        	public void afterTextChanged(android.text.Editable e) {
        
        	}
        	public void beforeTextChanged(java.lang.CharSequence cs, int start, int count, int after) {
        
        	}
        	public void onTextChanged(java.lang.CharSequence cs, int start, int before, int count) {
        		java.lang.String str = cs.toString();
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged204((UnoObject)_this,(String)str);
        	}
        });
    }
    
    public static void ClearFocus205(final Object handle)
    {
        android.widget.TextView t = (android.widget.TextView)handle;
        t.clearFocus();
    }
    
    public static Object Create1206()
    {
        return new android.widget.EditText(com.fuse.Activity.getRootActivity());
    }
    
    public static boolean HasFocus207(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).hasFocus();
    }
    
    public static void Measure2208(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY,final com.uno.IntArray measuredSize)
    {
        int wSpec = MeasureSpec.makeMeasureSpec(w, hasX ? MeasureSpec.EXACTLY : MeasureSpec.UNSPECIFIED);
        int hSpec = MeasureSpec.makeMeasureSpec(h, hasY ? MeasureSpec.EXACTLY : MeasureSpec.UNSPECIFIED);
        android.view.View view = (android.view.View)handle;
        android.view.ViewGroup.LayoutParams lp = view.getLayoutParams();
        view.setLayoutParams(new android.widget.FrameLayout.LayoutParams(w, 0xfffffffe));
        view.measure(wSpec, hSpec);
        if (lp != null) {
        	view.setLayoutParams(lp);
        }
        measuredSize.set(0, view.getMeasuredWidth());
        measuredSize.set(1, view.getMeasuredHeight());
    }
    
    public static void RequestFocus209(final Object viewHandle)
    {
        ((android.view.View)viewHandle).requestFocus();
    }
    
    public static void SetCursorDrawableColor210(final UnoObject _this, final Object handle,final int color)
    {
        android.widget.EditText editText = (android.widget.EditText)handle;
        try {
        	/*
        		(ﾉಥДಥ)ﾉ︵┻━┻･/
        	*/
        	java.lang.reflect.Field fCursorDrawableRes = android.widget.TextView.class.getDeclaredField("mCursorDrawableRes");
        	fCursorDrawableRes.setAccessible(true);
        	int mCursorDrawableRes = fCursorDrawableRes.getInt(editText);
        	java.lang.reflect.Field fEditor = android.widget.TextView.class.getDeclaredField("mEditor");
        	fEditor.setAccessible(true);
        	java.lang.Object editor = fEditor.get(editText);
        	Class<?> clazz = editor.getClass();
        	java.lang.reflect.Field fCursorDrawable = clazz.getDeclaredField("mCursorDrawable");
        	fCursorDrawable.setAccessible(true);
        	android.graphics.drawable.Drawable[] drawables = new android.graphics.drawable.Drawable[2];
        	drawables[0] = android.support.v4.content.ContextCompat.getDrawable(com.fuse.Activity.getRootActivity(), mCursorDrawableRes);
        	drawables[1] = android.support.v4.content.ContextCompat.getDrawable(com.fuse.Activity.getRootActivity(), mCursorDrawableRes);
        	drawables[0].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        	drawables[1].setColorFilter(color, android.graphics.PorterDuff.Mode.SRC_IN);
        	fCursorDrawable.set(editor, drawables);
        } catch (Throwable ignored) {
        
        }
    }
    
    public static void SetImeOptions211(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setImeOptions(value);
    }
    
    public static void SetInputType212(final Object handle,final int value)
    {
        android.widget.EditText et = (android.widget.EditText)handle;
        
        // preserve selection, setInputType() might reset it
        int start = et.getSelectionStart();
        int end = et.getSelectionEnd();
        
        // get typeface and set after setInputType is called,
        // InputType.TYPE_TEXT_VARIATION_PASSWORD sets the typeface to monospace
        android.graphics.Typeface tf = et.getTypeface();
        
        // call setTransformationMethod before setInputType
        // ref: https://code.google.com/p/android/issues/detail?id=7092
        et.setTransformationMethod((((value & 0x80) != 0) ? android.text.method.PasswordTransformationMethod.getInstance() : null));
        et.setInputType(value);
        et.setTypeface(tf);
        
        et.setSelection(start, end);
    }
    
    public static void SetPlaceholderColor213(final Object handle,final int value)
    {
        ((android.widget.TextView)handle).setHintTextColor(value);
    }
    
    public static void SetPlaceholderText214(final Object handle,final String value)
    {
        ((android.widget.TextView)handle).setHint(value);
    }
    
    public static void SetSelectionColor215(final Object handle,final int color)
    {
        ((android.widget.TextView)handle).setHighlightColor(color);
    }
    
}
