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

    [Require("Cocoapods.Podfile.Target", "pod 'GooglePlaces'")]
    [Require("Cocoapods.Podfile.Target", "pod 'GooglePlacePicker'")]
    [Require("Cocoapods.Podfile.Target", "pod 'GoogleMaps'")]
    [Require("Source.Include", "GooglePlaces/GooglePlaces.h")]
    [Require("Source.Include", "GooglePlacePicker/GooglePlacePicker.h")]
    [Require("Source.Include", "GoogleMaps/GoogleMaps.h")]
  extern(iOS)
   class Launch: Promise<string>
  {

    [Foreign(Language.ObjC)]
    public Launch()
    @{
    	  [GMSPlacesClient provideAPIKey:@""];
    	  [GMSServices provideAPIKey:@""];
    	  GMSPlacePickerConfig *config = [[GMSPlacePickerConfig alloc] initWithViewport:nil];
		  GMSPlacePickerViewController *placePicker = [[GMSPlacePickerViewController alloc] initWithConfig:config];


		  dispatch_async(dispatch_get_main_queue(), ^{
				[[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:placePicker animated:YES completion:nil];
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