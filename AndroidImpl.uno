using Uno;
using Uno.UX;
using Uno.Collections;
using Uno.Compiler.ExportTargetInterop;
using Fuse;
using Fuse.Triggers;
using Fuse.Controls;
using Fuse.Controls.Native;
using Fuse.Controls.Native.Android;
using Uno.Threading;



namespace Fuse.PlaceAutocomple
{


	[ForeignInclude(Language.Java, "com.google.android.gms.common.api.GoogleApiClient")]
	[Require("Gradle.Dependency", "compile('com.google.android.gms:play-services-places:11.0.4')")]
	[ForeignInclude(Language.Java, "com.fuse.Activity", "com.google.android.gms.location.places.ui.PlaceAutocomplete", "com.google.android.gms.location.places.Place", "com.google.android.gms.common.GooglePlayServicesRepairableException", "com.google.android.gms.common.GooglePlayServicesNotAvailableException", "com.google.android.gms.common.api.Status")]
	[ForeignInclude(Language.Java, "com.google.android.gms.common.api.GoogleApiClient.OnConnectionFailedListener", "android.content.Intent")]
	  extern(android)
	   class Launch: Promise<string>
	  {


	    public Launch()
	    {
	      Init();
	    }


	    [Foreign(Language.Java)]
	    public void Init()
	    @{
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
	            			@{Launch:Of(_this).Resolve(string):Call(place.getAddress().toString())};
	            		}else if(resultCode == PlaceAutocomplete.RESULT_ERROR){
	            			@{Launch:Of(_this).Reject(string):Call("Failed")};
	            		}else if(resultCode == Activity.getRootActivity().RESULT_CANCELED) {

	            		}
            		}

            	}
            	return true;
            }
            
          });

	    @}




	    void Resolve(string message)
	      {
	        base.Resolve(message);
	      }

	      void Reject(string reason)
	      {
	        Reject(new Exception(reason));
	      }
	  }

}