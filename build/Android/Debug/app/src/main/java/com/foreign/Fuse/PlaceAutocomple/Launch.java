package com.foreign.Fuse.PlaceAutocomple;

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
import com.google.android.gms.common.api.GoogleApiClient;
import com.fuse.Activity;
import com.google.android.gms.location.places.ui.PlaceAutocomplete;
import com.google.android.gms.location.places.Place;
import com.google.android.gms.common.GooglePlayServicesRepairableException;
import com.google.android.gms.common.GooglePlayServicesNotAvailableException;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.GoogleApiClient.OnConnectionFailedListener;
import android.content.Intent;

public class Launch
{
    static void debug_log(Object message)
    {
        android.util.Log.d("fuseplaceautocomplete", (message==null ? "null" : message.toString()));
    }

    public static void Init383(final UnoObject _this)
    {
        try {
                            Intent intent = new PlaceAutocomplete.IntentBuilder(PlaceAutocomplete.MODE_FULLSCREEN)
                                            .build(Activity.getRootActivity());
                            Activity.getRootActivity().startActivityForResult(intent, 100);
                        } catch (GooglePlayServicesRepairableException | GooglePlayServicesNotAvailableException e) {
                            // TODO: Handle the error.
                        }
        
        
        
        
        
                Activity.subscribeToResults(new Activity.ResultListener()
                  {
                    @Override
                    public boolean onResult(int requestCode, int resultCode, Intent data)
                    {
                    	if(requestCode == 100){
                    		if(data != null){
                		if(resultCode == Activity.getRootActivity().RESULT_OK){
                			Place place = PlaceAutocomplete.getPlace(Activity.getRootActivity(), data);
                			ExternedBlockHost.callUno_Fuse_PlaceAutocomple_Launch_Resolve1384((UnoObject)_this,(String)place.getAddress().toString());
                		}else if(resultCode == PlaceAutocomplete.RESULT_ERROR){
                			ExternedBlockHost.callUno_Fuse_PlaceAutocomple_Launch_Reject1385((UnoObject)_this,(String)"Failed");
                		}else if(resultCode == Activity.getRootActivity().RESULT_CANCELED) {
        
                		}
                    		}
        
                    	}
                    	return true;
                    }
                    
                  });
    }
    
}
