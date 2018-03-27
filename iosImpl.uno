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


namespace Fuse.PlaceAutocomplete
{



  [Require("Cocoapods.Podfile.Target", "pod 'GooglePlaces'")]
  [Require("Cocoapods.Podfile.Target", "pod 'GooglePlacePicker'")]
  [Require("Cocoapods.Podfile.Target", "pod 'GoogleMaps'")]
  [Require("Source.Include", "GooglePlaces/GooglePlaces.h")]
  [Require("Source.Include", "GooglePlacePicker/GooglePlacePicker.h")]
  [Require("Source.Include", "GoogleMaps/GoogleMaps.h")]
  [Require("Source.Include", "placeautocompleteIOS.h")]
  [TargetSpecificImplementationAttribute]
  public extern(iOS) class Autocomplete
  {


    extern(iOS) static internal ObjC.Object _iosDelegate;


    public static Promise<string> Launch() {
          var p = new AutocompletePromise();
          Launch(p.Resolve, p.Reject);
          return p;
    }

   class AutocompletePromise: Promise<string>
  {


      public void Resolve(string message)
        {
          base.Resolve(message);
        }

      public void Reject(string reason)
        {
          Reject(new Exception(reason));
        }

  }





    [Foreign(Language.ObjC)]
    static void Launch(Action<string> onSuccess, Action<string> onFailure)
    @{

        [GMSPlacesClient provideAPIKey:@"APIKEY"];
        [GMSServices provideAPIKey:@"APIKEY"];

          dispatch_async(dispatch_get_main_queue(), ^{
            GMSAutocompleteViewController *acController = [[GMSAutocompleteViewController alloc] init];
            AutocompliteCallBacks *del = [[AutocompliteCallBacks alloc] initWithSuccessAction:onSuccess AndWithFailureAction:onFailure];
              @{_iosDelegate:Set(del)};
              acController.delegate = @{_iosDelegate:Get()};
        [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:acController animated:YES completion:nil];
      });

    @}


  }














}