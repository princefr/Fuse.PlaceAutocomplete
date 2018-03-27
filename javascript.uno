using Uno;
using Uno.UX;
using Uno.Threading;
using Uno.Text;
using Uno.Platform;
using Uno.Compiler.ExportTargetInterop;
using Uno.Collections;
using Fuse;
using Fuse.Scripting;
using Fuse.Reactive;





namespace Fuse.PlaceAutocomplete
{



	  [UXGlobalModule]
	  public sealed class PlaceAutocompleModule: NativeModule{
	  	static readonly PlaceAutocompleModule _instance;

		    public PlaceAutocompleModule()
		    {
		      if(_instance != null) return;
		      Uno.UX.Resource.SetGlobalKey(_instance = this, "PlaceAutocomplete");
		      AddMember(new NativePromise<string, string>("Launch", Launch));
		    }

	        Future<string> Launch(object[] args)
		    {
		    	if defined(iOS){
		    		return  Autocomplete.Launch();
		    	}else{
		    		return new Fuse.PlaceAutocomplete.Launch();
		    	}
		        
		    }

	  }
	  
}