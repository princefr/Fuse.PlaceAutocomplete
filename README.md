# FuseAutocomplete

The Place Autocomplete service is a web service that returns place predictions in response to an HTTP request. The request specifies a textual search string and optional geographic bounds. The service can be used to provide autocomplete functionality for text-based geographic searches, by returning places such as businesses, addresses and points of interest as a user types.

### Before initialisation

	- IOS

		please activate the Google Places API for iOS in the https://console.cloud.google.com/ and replace 'APIKEY' string below with your apikey obtained in the google console.
		file: `iosImpl.uno`

		```
			[GMSPlacesClient provideAPIKey:@"APIKEY"];
        	[GMSServices provideAPIKey:@"APIKEY"];
		```

	- Android

		please activate the Google Places API for Android in the https://console.cloud.google.com/ and replace the android:value 'APIKEY' string below with your apikey obtained in the google console.
		file: `geo.uxl`

		```
		    android:name="com.google.android.geo.API_KEY"
            android:value="APIKEY" />

		```

### Initialisation


```
var PlaceAutocompleModule = require("PlaceAutocomplete")


function launch() {
  PlaceAutocompleModule.Launch().then(function(address){
    console.log(JSON.stringify(address))
  }, function(err){
    console.log(JSON.stringify(err))
  })
}

```


