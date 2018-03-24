#pragma mark - GMSAutocompleteViewControllerDelegate
#include <Uno/Uno.h>
#include <@{Fuse.PlaceAutocomple.Launch:Include}>
#include <@{ObjC.Object:Include}>
#include "placeautocompleteIOS.h"


@interface AutocompliteCallBacks ()

@end




@implementation AutocompliteCallBacks


// To receive the results from the place picker 'self' will need to conform to
// GMSPlacePickerViewControllerDelegate and implement this code.
- (void)viewController:(GMSAutocompleteViewController *)viewController didAutocompleteWithPlace:(GMSPlace *)place {
    // Do something with the selected place.
    [[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
    NSLog(@"Place name %@", place.name);
    NSLog(@"Place address %@", place.formattedAddress);


    NSObject *object;
    NSString *myString = place.formattedAddress;
    @{Fuse.PlaceAutocomple.Launch.Resolve(string):Call(myString)};

}


- (void)viewController:(nonnull GMSAutocompleteViewController *)viewController didFailAutocompleteWithError:(nonnull NSError *)error { 
    [[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
}


- (void)wasCancelled:(nonnull GMSAutocompleteViewController *)viewController { 
	[[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
    
}

- (void)placePickerDidCancel:(GMSPlacePickerViewController *)viewController {
	[[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
	//[self dismissViewControllerAnimated:YES completion:nil];
  	NSLog(@"No place selected");
}

@end