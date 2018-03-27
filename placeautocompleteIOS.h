#include <UIKit/UIKit.h>
#include <Uno-iOS/Context.h>
#include <Uno-iOS/Uno-iOS.h>
#include <GoogleMaps/GoogleMaps.h>
#include <GooglePlacePicker/GooglePlacePicker.h>
#include <GooglePlaces/GooglePlaces.h>





@interface AutocompliteCallBacks : NSObject <GMSAutocompleteViewControllerDelegate>
- (void)viewController:(GMSAutocompleteViewController *)viewController didAutocompleteWithPlace:(GMSPlace *)place;
- (void)placePickerDidCancel:(GMSPlacePickerViewController *)viewController;
- (void)viewController:(nonnull GMSAutocompleteViewController *)viewController didFailAutocompleteWithError:(nonnull NSError *)error;
- (void)wasCancelled:(nonnull GMSAutocompleteViewController *)viewController;
- (id)initWithSuccessAction:(void (^)(NSString *))onSuccess AndWithFailureAction:(void (^)(NSString *))onFailure;
@property(nonatomic,copy) void (^completion)(NSString *);
@property(nonatomic,copy) void (^error)(NSString *);
@end