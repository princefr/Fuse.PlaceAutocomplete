#pragma mark - GMSAutocompleteViewControllerDelegate
#include <Uno/Uno.h>
#include <@{ObjC.Object:Include}>
#include "placeautocompleteIOS.h"


@interface AutocompliteCallBacks ()


@end




@implementation AutocompliteCallBacks
@synthesize completion;
@synthesize error;
// To receive the results from the place picker 'self' will need to conform to
// GMSPlacePickerViewControllerDelegate and implement this code.
- (void)viewController:(GMSAutocompleteViewController *)viewController didAutocompleteWithPlace:(GMSPlace *)place {
    // Do something with the selected place.
    [[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
    NSLog(@"Place name %@", place.name);
    NSLog(@"Place address %@", place.formattedAddress);

    NSObject *object;
    NSString *myString = place.formattedAddress;
    completion(place.formattedAddress);


}


- (void)viewController:(nonnull GMSAutocompleteViewController *)viewController didFailAutocompleteWithError:(nonnull NSError *)error { 
    [[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
}


- (void)wasCancelled:(nonnull GMSAutocompleteViewController *)viewController { 
	[[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
    
}

- (void)placePickerDidCancel:(GMSPlacePickerViewController *)viewController {
	[[[[UIApplication sharedApplication] keyWindow] rootViewController] dismissViewControllerAnimated:YES completion:nil];
  	NSLog(@"No place selected");
}




- (id)initWithSuccessAction:(void (^)(NSString *))onSuccess AndWithFailureAction:(void (^)(NSString *))onFailure
{
    self = [super init];
    if(self){
        completion = onSuccess;
    }
    return self;
}




@end