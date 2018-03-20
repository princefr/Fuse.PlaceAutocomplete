// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostic.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DiagnosticType.h>
#include <Fuse.IArray.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.JavaScr-6ae501cc.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scripting.AppIni-f38e0a02.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.ArrayMirror.h>
#include <Fuse.Scripting.BoolChangedArgs.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.ClassInstance.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.DateTi-b0df7f66.h>
#include <Fuse.Scripting.Diagno-2903b551.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.EventE-d4b465f0.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Factor-31227d87.h>
#include <Fuse.Scripting.FileModule.h>
#include <Fuse.Scripting.Functi-e4f455ee.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.FunctionMirror.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.IEvent-434826af.h>
#include <Fuse.Scripting.IMirror.h>
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.IRaw.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.IThreadWorker.h>
#include <Fuse.Scripting.JSCall-795a26ff.h>
#include <Fuse.Scripting.JSCall-795a2700.h>
#include <Fuse.Scripting.JSCall-8f91cd14.h>
#include <Fuse.Scripting.JSCall-8f91cd17.h>
#include <Fuse.Scripting.JSCallback.h>
#include <Fuse.Scripting.JSCall-f4db913.h>
#include <Fuse.Scripting.JSCall-feb92ff.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.LazyOb-effc00dc.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleInstance.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.Native-45e5dceb.h>
#include <Fuse.Scripting.Native-4cd04451.h>
#include <Fuse.Scripting.Native-56d41531.h>
#include <Fuse.Scripting.Native-a87a87ef.h>
#include <Fuse.Scripting.Native-c8feecef.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.Native-fa549b97.h>
#include <Fuse.Scripting.Native-fe154945.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ObjectMirror.h>
#include <Fuse.Scripting.Observ-14e14110.h>
#include <Fuse.Scripting.Observ-24924922.h>
#include <Fuse.Scripting.Observ-4dfd7a0a.h>
#include <Fuse.Scripting.Observ-6737f254.h>
#include <Fuse.Scripting.Observ-678bcaea.h>
#include <Fuse.Scripting.Observ-6e47ee.h>
#include <Fuse.Scripting.Observ-7fbd86be.h>
#include <Fuse.Scripting.Observ-9199cec.h>
#include <Fuse.Scripting.Observ-aa9c1371.h>
#include <Fuse.Scripting.Observable.Add.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.Set.h>
#include <Fuse.Scripting.Observ-b513db.h>
#include <Fuse.Scripting.Observ-d43ecfca.h>
#include <Fuse.Scripting.Observ-ddd1c0f4.h>
#include <Fuse.Scripting.Observ-e811b32a.h>
#include <Fuse.Scripting.Observ-ed058f02.h>
#include <Fuse.Scripting.Observ-f8d47737.h>
#include <Fuse.Scripting.Result-92713bce.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.Rootab-eb1392c3.h>
#include <Fuse.Scripting.Script-102b1113.h>
#include <Fuse.Scripting.Script-1fc6121d.h>
#include <Fuse.Scripting.Script-48066473.h>
#include <Fuse.Scripting.Script-6b7426dc.h>
#include <Fuse.Scripting.Script-b112cc00.h>
#include <Fuse.Scripting.Script-bd87d99a.h>
#include <Fuse.Scripting.Script-c28a137b.h>
#include <Fuse.Scripting.Script-c345ffc8.h>
#include <Fuse.Scripting.Script-c8a158ba.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptPromise-3.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.String-a37c2db8.h>
#include <Fuse.Scripting.Subscr-9da816f1.h>
#include <Fuse.Scripting.Thread-2dab50f2.h>
#include <Fuse.Scripting.Thread-5638c978.h>
#include <Fuse.Scripting.Thread-6631e2a6.h>
#include <Fuse.Scripting.Thread-abca6c10.h>
#include <Fuse.Scripting.ThreadWorker.h>
#include <Fuse.Scripting.V8.Context.h>
#include <Fuse.Scripting.Value.h>
#include <Fuse.Scripting.ValueC-23d67df6.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dicti-87d2e37d.h>
#include <Uno.Collections.Dicti-894ef3c3.h>
#include <Uno.Collections.Dicti-98f6bc43.h>
#include <Uno.Collections.Dicti-d1699346.h>
#include <Uno.Collections.Dicti-d6e3a7c5.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-8ddd045.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--251bdc7d.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Path.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implement-eca777ec.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.Concurr-611aaad4.h>
#include <Uno.Threading.Concurr-cd310558.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispat-6494c48e.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[83];
static uType* TYPES[67];

namespace g{
namespace Fuse{
namespace Scripting{

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure :37
// {
static void JSCallback__ActionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(JSCallback__ActionClosure, _action), 0);
}

uType* JSCallback__ActionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure", options);
    type->fp_build_ = JSCallback__ActionClosure_build;
    return type;
}

// public ActionClosure(Uno.Action action) :41
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action action) :41
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval)
{
    *__retval = JSCallback__ActionClosure::New1(action);
}

// public object Run(object[] args) :46
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action action) [instance] :41
void JSCallback__ActionClosure::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :46
uObject* JSCallback__ActionClosure::Run(uArray* args)
{
    uPtr(_action)->InvokeVoid();
    return NULL;
}

// public ActionClosure New(Uno.Action action) [static] :41
JSCallback__ActionClosure* JSCallback__ActionClosure::New1(uDelegate* action)
{
    JSCallback__ActionClosure* obj1 = (JSCallback__ActionClosure*)uNew(JSCallback__ActionClosure_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T> :53
// {
static void JSCallback__ActionClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::STRINGS[1] = uString::Const(" value was ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(JSCallback__ActionClosure1, _action), 0);
}

uType* JSCallback__ActionClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__ActionClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`1", options);
    type->fp_build_ = JSCallback__ActionClosure1_build;
    return type;
}

// public ActionClosure(Uno.Action<T> action) :57
void JSCallback__ActionClosure1__ctor__fn(JSCallback__ActionClosure1* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T> action) :57
void JSCallback__ActionClosure1__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure1** __retval)
{
    *__retval = JSCallback__ActionClosure1::New1(__type, action);
}

// public object Run(object[] args) :62
void JSCallback__ActionClosure1__Run_fn(JSCallback__ActionClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T> action) [instance] :57
void JSCallback__ActionClosure1::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :62
uObject* JSCallback__ActionClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T>*/),
    };
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret2;
    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret2), ret2))
        uPtr(_action)->InvokeVoid(arg);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0)), ::STRINGS[1/*" value was "*/]), uPtr(args)->Strong<uObject*>(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T> action) [static] :57
JSCallback__ActionClosure1* JSCallback__ActionClosure1::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure1* obj1 = (JSCallback__ActionClosure1*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.ActionClosure<T1, T2> :74
// {
static void JSCallback__ActionClosure2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T1>*/, type->T(0), NULL),
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<T2>*/, type->T(1), NULL));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(JSCallback__ActionClosure2, _action), 0);
}

uType* JSCallback__ActionClosure2_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(JSCallback__ActionClosure2);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.ActionClosure`2", options);
    type->fp_build_ = JSCallback__ActionClosure2_build;
    return type;
}

// public ActionClosure(Uno.Action<T1, T2> action) :78
void JSCallback__ActionClosure2__ctor__fn(JSCallback__ActionClosure2* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ActionClosure New(Uno.Action<T1, T2> action) :78
void JSCallback__ActionClosure2__New1_fn(uType* __type, uDelegate* action, JSCallback__ActionClosure2** __retval)
{
    *__retval = JSCallback__ActionClosure2::New1(__type, action);
}

// public object Run(object[] args) :83
void JSCallback__ActionClosure2__Run_fn(JSCallback__ActionClosure2* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public ActionClosure(Uno.Action<T1, T2> action) [instance] :78
void JSCallback__ActionClosure2::ctor_(uDelegate* action)
{
    _action = action;
}

// public object Run(object[] args) [instance] :83
uObject* JSCallback__ActionClosure2::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<T1>*/),
        __type->Precalced(1/*Fuse.Scripting.JSCallback.GetArg<T2>*/),
    };
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT arg1(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    bool ret2;
    bool ret3;
    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    arg1 = uT(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret2), ret2) && (::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[1], args, &arg1, uCRef<int>(1), &ret3), ret3))
        uPtr(_action)->Invoke(2, (void*)arg, (void*)arg1);
    else
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0))));

    return NULL;
}

// public ActionClosure New(Uno.Action<T1, T2> action) [static] :78
JSCallback__ActionClosure2* JSCallback__ActionClosure2::New1(uType* __type, uDelegate* action)
{
    JSCallback__ActionClosure2* obj1 = (JSCallback__ActionClosure2*)uNew(__type);
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Add :518
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(Observable__Add, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Scripting.Observable obs, object value) :522
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Scripting.Observable obs, object value) :522
void Observable__Add__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :527
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Scripting.Observable obs, object value) [instance] :522
void Observable__Add::ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Scripting.Observable obs, object value) [static] :522
Observable__Add* Observable__Add::New1(::g::Fuse::Scripting::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/AppInitialized.uno
// ---------------------------------------------------------------------

// internal static class AppInitialized :15
// {
static void AppInitialized_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&AppInitialized::_initialized_, uFieldFlagsStatic);
}

uClassType* AppInitialized_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.AppInitialized", options);
    type->fp_build_ = AppInitialized_build;
    return type;
}

// public static void On(Fuse.Scripting.Context context, Uno.Action action) :19
void AppInitialized__On_fn(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized::On(context, action);
}

// internal static void Reset() :31
void AppInitialized__Reset_fn()
{
    AppInitialized::Reset();
}

bool AppInitialized::_initialized_;

// public static void On(Fuse.Scripting.Context context, Uno.Action action) [static] :19
void AppInitialized::On(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    if (AppInitialized::_initialized_)
        uPtr(action)->InvokeVoid();
    else
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(::g::Fuse::UpdateManager::Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)AppInitialized__Closure__Run_fn, AppInitialized__Closure::New1(context, action)));
}

// internal static void Reset() [static] :31
void AppInitialized::Reset()
{
    AppInitialized::_initialized_ = false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public abstract class Array :9
// {
static void Array_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Array_type, interface0));
}

Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Scripting.Array", options);
    type->fp_build_ = Array_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Array__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Array__GetHashCode_fn;
    return type;
}

// protected generated Array() :9
void Array__ctor__fn(Array* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :16
void Array__Equals_fn(Array* __this, uObject* o, bool* __retval)
{
    Array* a = uAs<Array*>(o, Array_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :22
void Array__GetHashCode_fn(Array* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Array() [instance] :9
void Array::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ArrayMirror.uno
// -----------------------------------------------------------------------------

// internal sealed class ArrayMirror :6
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::IMirror_typeof();
    ::TYPES[7] = ::g::Fuse::Scripting::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Scripting::ListMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[5/*Uno.Collections.List<object>*/], offsetof(ArrayMirror, _items), 0);
}

::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ListMirror_type);
    type = (::g::Fuse::Scripting::ListMirror_type*)uClassType::New("Fuse.Scripting.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal ArrayMirror(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) :13
void ArrayMirror__ctor_4_fn(ArrayMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_4(mirror, arr);
}

// public override sealed object get_Item(int index) :39
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(index_), &ret4), ret4), void();
}

// internal object[] get_ItemsReadonly() :26
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :44
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    return *__retval = uPtr(__this->_items)->Count(), void();
}

// internal ArrayMirror New(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) :13
void ArrayMirror__New2_fn(uObject* mirror, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New2(mirror, arr);
}

// internal void Set(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) :18
void ArrayMirror__Set_fn(ArrayMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    __this->Set(mirror, arr);
}

// public override sealed void Unsubscribe() :28
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    uObject* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Count(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(i), &ret3), ret3), ::TYPES[7/*Fuse.Scripting.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) [instance] :13
void ArrayMirror::ctor_4(uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    ctor_2(arr);
    Set(mirror, arr);
}

// internal object[] get_ItemsReadonly() [instance] :26
uArray* ArrayMirror::ItemsReadonly()
{
    return (uArray*)uPtr(_items)->ToArray();
}

// internal void Set(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) [instance] :18
void ArrayMirror::Set(uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    _items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[5/*Uno.Collections.List<object>*/], uPtr(arr)->Length()));

    for (int i = 0; i < arr->Length(); i++)
        ::g::Uno::Collections::List__Add_fn(uPtr(_items), ::g::Fuse::Scripting::IMirror::Reflect(uInterface(uPtr(mirror), ::TYPES[6/*Fuse.Scripting.IMirror*/]), uPtr(arr)->Item(i)));
}

// internal ArrayMirror New(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Array arr) [static] :13
ArrayMirror* ArrayMirror::New2(uObject* mirror, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj2 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj2->ctor_4(mirror, arr);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class BoolChangedArgs :64
// {
static void BoolChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[8] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(BoolChangedArgs_type, interface0));
    type->SetFields(1);
}

BoolChangedArgs_type* BoolChangedArgs_typeof()
{
    static uSStrong<BoolChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BoolChangedArgs);
    options.TypeSize = sizeof(BoolChangedArgs_type);
    type = (BoolChangedArgs_type*)uClassType::New("Fuse.Scripting.BoolChangedArgs", options);
    type->fp_build_ = BoolChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public BoolChangedArgs(bool value) :66
void BoolChangedArgs__ctor_2_fn(BoolChangedArgs* __this, bool* value)
{
    __this->ctor_2(*value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :70
void BoolChangedArgs__FuseScriptingIScriptEventSerialize_fn(BoolChangedArgs* __this, uObject* s)
{
    bool ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddBool(uInterface(uPtr(s), ::TYPES[8/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public BoolChangedArgs New(bool value) :66
void BoolChangedArgs__New3_fn(bool* value, BoolChangedArgs** __retval)
{
    *__retval = BoolChangedArgs::New3(*value);
}

// public BoolChangedArgs(bool value) [instance] :66
void BoolChangedArgs::ctor_2(bool value)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, uCRef(value));
}

// public BoolChangedArgs New(bool value) [static] :66
BoolChangedArgs* BoolChangedArgs::New3(bool value)
{
    BoolChangedArgs* obj1 = (BoolChangedArgs*)uNew(BoolChangedArgs_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public delegate object Callback(object[] args) :126
uDelegateType* Callback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.Callback", 1, 0);
    type->SetSignature(uObject_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptMethod<T>.CallClosure :126
// {
static void ScriptMethod1__CallClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(ScriptMethod1__CallClosure, _method), 0,
        uObject_typeof(), offsetof(ScriptMethod1__CallClosure, _obj), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptMethod1__CallClosure, _context), 0,
        uObject_typeof()->Array(), offsetof(ScriptMethod1__CallClosure, _args), 0);
}

uType* ScriptMethod1__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMethod`1.CallClosure", options);
    type->fp_build_ = ScriptMethod1__CallClosure_build;
    return type;
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :133
void ScriptMethod1__CallClosure__ctor__fn(ScriptMethod1__CallClosure* __this, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    __this->ctor_(method, c, obj, args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) :133
void ScriptMethod1__CallClosure__New1_fn(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, ScriptMethod1__CallClosure** __retval)
{
    *__retval = ScriptMethod1__CallClosure::New1(__type, method, c, obj, args);
}

// public void Run() :141
void ScriptMethod1__CallClosure__Run_fn(ScriptMethod1__CallClosure* __this)
{
    __this->Run();
}

// public CallClosure(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [instance] :133
void ScriptMethod1__CallClosure::ctor_(uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    _method = method;
    _context = c;
    _obj = obj;
    _args = args;
}

// public void Run() [instance] :141
void ScriptMethod1__CallClosure::Run()
{
    uPtr(_method)->Invoke(3, (::g::Fuse::Scripting::Context*)_context, (void*)uUnboxAny(__type->T(0), _obj), (uArray*)_args);
}

// public CallClosure New(Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.Context c, object obj, object[] args) [static] :133
ScriptMethod1__CallClosure* ScriptMethod1__CallClosure::New1(uType* __type, uDelegate* method, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args)
{
    ScriptMethod1__CallClosure* obj1 = (ScriptMethod1__CallClosure*)uNew(__type);
    obj1->ctor_(method, c, obj, args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/FunctionMirror.uno
// --------------------------------------------------------------------------------

// private sealed class FunctionMirror.CallClosure :22
// {
static void FunctionMirror__CallClosure_build(uType* type)
{
    ::STRINGS[3] = uString::Const("node");
    ::STRINGS[4] = uString::Const("data");
    ::STRINGS[5] = uString::Const("sender");
    ::TYPES[9] = ::g::Fuse::Reactive::IEventRecord_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    ::TYPES[15] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::FunctionMirror_typeof(), offsetof(FunctionMirror__CallClosure, _f), 0,
        ::TYPES[9/*Fuse.Reactive.IEventRecord*/], offsetof(FunctionMirror__CallClosure, _e), 0);
}

uType* FunctionMirror__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FunctionMirror__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FunctionMirror.CallClosure", options);
    type->fp_build_ = FunctionMirror__CallClosure_build;
    return type;
}

// public CallClosure(Fuse.Scripting.FunctionMirror f, Fuse.Reactive.IEventRecord e) :27
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::FunctionMirror* f, uObject* e)
{
    __this->ctor_(f, e);
}

// public void Call(Fuse.Scripting.Context context) :33
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Call(context);
}

// public CallClosure New(Fuse.Scripting.FunctionMirror f, Fuse.Reactive.IEventRecord e) :27
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Scripting::FunctionMirror* f, uObject* e, FunctionMirror__CallClosure** __retval)
{
    *__retval = FunctionMirror__CallClosure::New1(f, e);
}

// public CallClosure(Fuse.Scripting.FunctionMirror f, Fuse.Reactive.IEventRecord e) [instance] :27
void FunctionMirror__CallClosure::ctor_(::g::Fuse::Scripting::FunctionMirror* f, uObject* e)
{
    _f = f;
    _e = e;
}

// public void Call(Fuse.Scripting.Context context) [instance] :33
void FunctionMirror__CallClosure::Call(::g::Fuse::Scripting::Context* context)
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > ret3;
    uPtr(_f)->ClearDiagnostic();
    ::g::Fuse::Scripting::Object* obj = uPtr(context)->NewObject();

    if (::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[3/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[4/*"data"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/]))), NULL))
        uPtr(obj)->Item(::STRINGS[5/*"sender"*/], uBox(::TYPES[35/*Uno.UX.Selector*/], ::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/])) != NULL)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[9/*Fuse.Reactive.IEventRecord*/]))), ::TYPES[10/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>>*/]));

        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, object>>*/]), &ret3), ret3);
                    uPtr(obj)->Item(arg.Key(::TYPES[13/*Uno.Collections.KeyValuePair<string, object>*/]), uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(arg.Value(::TYPES[13/*Uno.Collections.KeyValuePair<string, object>*/])));
                }
            }
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
        }
    }

    try
    {
        {
            uPtr(uPtr(_f)->_func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, obj));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[15/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(_f)->SetDiagnostic(ex);
        }
        else         throw __t;
    }
}

// public CallClosure New(Fuse.Scripting.FunctionMirror f, Fuse.Reactive.IEventRecord e) [static] :27
FunctionMirror__CallClosure* FunctionMirror__CallClosure::New1(::g::Fuse::Scripting::FunctionMirror* f, uObject* e)
{
    FunctionMirror__CallClosure* obj2 = (FunctionMirror__CallClosure*)uNew(FunctionMirror__CallClosure_typeof());
    obj2->ctor_(f, e);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ClassInstance.uno
// -------------------------------------------------------------------------------

// internal sealed class ClassInstance :10
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[6] = uString::Const("_tempMethod");
    ::TYPES[17] = ::g::Fuse::INotifyUnrooted_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::ObservableProperty_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Scripting::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(ClassInstance, _worker), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ClassInstance, _rootTable), 0,
        uObject_typeof(), offsetof(ClassInstance, _obj), 0,
        ::TYPES[21/*Fuse.Scripting.Object*/], offsetof(ClassInstance, _self), 0,
        ::TYPES[20/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>*/], offsetof(ClassInstance, _properties), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Scripting.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) :37
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(method, args);
}

// private void DispatchUnroot() :74
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :69
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted() :45
void ClassInstance__EnsureRooted_fn(ClassInstance* __this)
{
    __this->EnsureRooted();
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) :81
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(p);
}

// internal ClassInstance New(Fuse.Scripting.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__New1_fn(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot(Fuse.Scripting.Context context) :94
void ClassInstance__Unroot_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Unroot(context);
}

// internal ClassInstance(Fuse.Scripting.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [instance] :29
void ClassInstance::ctor_(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _worker = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) [instance] :37
void ClassInstance::CallMethod(::g::Fuse::Scripting::Function* method, uArray* args)
{
    uPtr(_self)->Item(::STRINGS[6/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(::STRINGS[6/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :74
void ClassInstance::DispatchUnroot()
{
    uObject* n = (uObject*)uPtr(_rootTable)->This();
    ::g::Fuse::INotifyUnrooted::remove_Unrooted(uInterface(uPtr(n), ::TYPES[17/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :69
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>*/]));
}

// public void EnsureRooted() [instance] :45
void ClassInstance::EnsureRooted()
{
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    uObject* n = uAs<uObject*>(_obj, ::TYPES[17/*Fuse.INotifyUnrooted*/]);

    if (n != NULL)
        ::g::Fuse::INotifyUnrooted::add_Unrooted(uInterface(uPtr(n), ::TYPES[17/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_worker)->Unwrap(_obj), ::TYPES[21/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[22/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[23/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Scripting::LazyObservableProperty::New2(_worker, _self, p));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) [instance] :81
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Uno::UX::Property* p)
{
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Scripting::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Scripting::ObservableProperty::New1(_worker, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable())->Object();
}

// private void Unroot(Fuse.Scripting.Context context) [instance] :94
void ClassInstance::Unroot(::g::Fuse::Scripting::Context* context)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Scripting::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8);

        try
        {
            {
                while (enum2.MoveNext(::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]))
                {
                    ::g::Fuse::Scripting::ObservableProperty* p = enum2.Current(::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]);
                    uPtr(p)->Reset();
                }
            }
            {
                enum2.Dispose(::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]);
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[24/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Scripting.ObservableProperty>.ValueCollection.Enumerator*/]);
            }
                        throw __t;
        }
    }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Scripting.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [static] :29
ClassInstance* ClassInstance::New1(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Clear :413
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__Clear, _origin), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    return type;
}

// public Clear(Fuse.Scripting.Observable obs, int origin) :417
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Scripting::Observable* obs, int* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Scripting.Observable obs, int origin) :417
void Observable__Clear__New1_fn(::g::Fuse::Scripting::Observable* obs, int* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :422
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]));
}

// public Clear(Fuse.Scripting.Observable obs, int origin) [instance] :417
void Observable__Clear::ctor_1(::g::Fuse::Scripting::Observable* obs, int origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Scripting.Observable obs, int origin) [static] :417
Observable__Clear* Observable__Clear::New1(::g::Fuse::Scripting::Observable* obs, int origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Subscription.ClearExclusiveOperation :167
// {
static void Observable__Subscription__ClearExclusiveOperation_build(uType* type)
{
    ::STRINGS[7] = uString::Const("clear");
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__ClearExclusiveOperation, Object), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__ClearExclusiveOperation, Origin), 0);
}

uType* Observable__Subscription__ClearExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription__ClearExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Observable.Subscription.ClearExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__ClearExclusiveOperation_build;
    return type;
}

// public ClearExclusiveOperation(Fuse.Scripting.Object obj, int origin) :169
void Observable__Subscription__ClearExclusiveOperation__ctor__fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Object* obj, int* origin)
{
    __this->ctor_(obj, *origin);
}

// public ClearExclusiveOperation New(Fuse.Scripting.Object obj, int origin) :169
void Observable__Subscription__ClearExclusiveOperation__New1_fn(::g::Fuse::Scripting::Object* obj, int* origin, Observable__Subscription__ClearExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__ClearExclusiveOperation::New1(obj, *origin);
}

// public void Perform(Fuse.Scripting.Context context) :179
void Observable__Subscription__ClearExclusiveOperation__Perform_fn(Observable__Subscription__ClearExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public ClearExclusiveOperation(Fuse.Scripting.Object obj, int origin) [instance] :169
void Observable__Subscription__ClearExclusiveOperation::ctor_(::g::Fuse::Scripting::Object* obj, int origin)
{
    Object = obj;
    Origin = origin;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :179
void Observable__Subscription__ClearExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    uPtr(Object)->CallMethod(::STRINGS[7/*"clear"*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBox<int>(::TYPES[55/*int*/], Origin)));
}

// public ClearExclusiveOperation New(Fuse.Scripting.Object obj, int origin) [static] :169
Observable__Subscription__ClearExclusiveOperation* Observable__Subscription__ClearExclusiveOperation::New1(::g::Fuse::Scripting::Object* obj, int origin)
{
    Observable__Subscription__ClearExclusiveOperation* obj1 = (Observable__Subscription__ClearExclusiveOperation*)uNew(Observable__Subscription__ClearExclusiveOperation_typeof());
    obj1->ctor_(obj, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/AppInitialized.uno
// ---------------------------------------------------------------------

// private sealed class AppInitialized.Closure :36
// {
static void AppInitialized__Closure_build(uType* type)
{
    ::TYPES[25] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Uno.Action>*/, ::g::Uno::Action_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(AppInitialized__Closure, _context), 0,
        ::g::Uno::Action_typeof(), offsetof(AppInitialized__Closure, _action), 0);
}

uType* AppInitialized__Closure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AppInitialized__Closure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.AppInitialized.Closure", options);
    type->fp_build_ = AppInitialized__Closure_build;
    return type;
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__ctor__fn(AppInitialized__Closure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    __this->ctor_(context, action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) :41
void AppInitialized__Closure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* action, AppInitialized__Closure** __retval)
{
    *__retval = AppInitialized__Closure::New1(context, action);
}

// public void Run() :47
void AppInitialized__Closure__Run_fn(AppInitialized__Closure* __this)
{
    __this->Run();
}

// private static void RunJS(Uno.Action action) :52
void AppInitialized__Closure__RunJS_fn(uDelegate* action)
{
    AppInitialized__Closure::RunJS(action);
}

// public Closure(Fuse.Scripting.Context context, Uno.Action action) [instance] :41
void AppInitialized__Closure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    _context = context;
    _action = action;
}

// public void Run() [instance] :47
void AppInitialized__Closure::Run()
{
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[25/*Uno.Threading.IDispatcherExtensions.Invoke1<Uno.Action>*/], uPtr(_context)->Dispatcher(), uDelegate::New(::TYPES[26/*Uno.Action<Uno.Action>*/], (void*)AppInitialized__Closure__RunJS_fn), _action);
}

// public Closure New(Fuse.Scripting.Context context, Uno.Action action) [static] :41
AppInitialized__Closure* AppInitialized__Closure::New1(::g::Fuse::Scripting::Context* context, uDelegate* action)
{
    AppInitialized__Closure* obj1 = (AppInitialized__Closure*)uNew(AppInitialized__Closure_typeof());
    obj1->ctor_(context, action);
    return obj1;
}

// private static void RunJS(Uno.Action action) [static] :52
void AppInitialized__Closure::RunJS(uDelegate* action)
{
    ::g::Fuse::Scripting::AppInitialized::_initialized_ = true;
    uPtr(action)->InvokeVoid();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Context.uno
// --------------------------------------------------------------

// public interfacemodifiers class Context :18
// {
static void Context_build(uType* type)
{
    ::STRINGS[8] = uString::Const("(Context)");
    ::STRINGS[9] = uString::Const("(function(x) { return x; })");
    ::STRINGS[10] = uString::Const("(function(count) { return new Array(count); })");
    ::STRINGS[11] = uString::Const("(function() { return new Object; })");
    ::STRINGS[12] = uString::Const("(function(obj, name, getCallback, setCallback, e, c) { Object.defineProperty(obj, name, { get: getCallback, ");
    ::STRINGS[13] = uString::Const(" set: setCallback,");
    ::STRINGS[14] = uString::Const("");
    ::STRINGS[15] = uString::Const(" enumerable: e, configurable: c }); })");
    ::STRINGS[16] = uString::Const("(function(obj, name, value, e, c) { Object.defineProperty(obj, name, { value: value, enumerable: e, configurable: c }); })");
    ::STRINGS[17] = uString::Const("JSON.parse");
    ::TYPES[27] = ::g::Uno::Threading::ConcurrentDictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Scripting::ModuleResult_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[29] = ::g::Fuse::Scripting::IThreadWorker_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Object_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Context_type, interface0));
    type->SetFields(0,
        ::TYPES[27/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/], offsetof(Context, _moduleResults), 0,
        ::TYPES[29/*Fuse.Scripting.IThreadWorker*/], offsetof(Context, _worker), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(Context, _identity), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(Context, _parseJson), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(Context, _newObject), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(Context, _newArray), 0);
}

Context_type* Context_typeof()
{
    static uSStrong<Context_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Context);
    options.TypeSize = sizeof(Context_type);
    type = (Context_type*)uClassType::New("Fuse.Scripting.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// protected Context(Fuse.Scripting.IThreadWorker worker) :64
void Context__ctor__fn(Context* __this, uObject* worker)
{
    __this->ctor_(worker);
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) :83
void Context__CallbackToFunction_fn(Context* __this, uDelegate* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->CallbackToFunction(c);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) :37
void Context__DeleteGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* mr)
{
    __this->DeleteGlobalModuleResult(mr);
}

// public Uno.Threading.IDispatcher get_Dispatcher() :74
void Context__get_Dispatcher_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->Dispatcher();
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) :76
void Context__Invoke_fn(Context* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public Fuse.Scripting.Array NewArray(object[] values) :130
void Context__NewArray_fn(Context* __this, uArray* values, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->NewArray(values);
}

// public Fuse.Scripting.Object NewObject() :123
void Context__NewObject_fn(Context* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->NewObject();
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) :91
void Context__ObjectDefineProperty_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty(obj, name, getProperty, setProperty, *enumerable, *configurable);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) :98
void Context__ObjectDefineProperty1_fn(Context* __this, ::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool* enumerable, bool* configurable)
{
    __this->ObjectDefineProperty1(obj, name, value, *enumerable, *configurable);
}

// public object ParseJson(string json) :114
void Context__ParseJson_fn(Context* __this, uString* json, uObject** __retval)
{
    *__retval = __this->ParseJson(json);
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) :22
void Context__RegisterGlobalModuleResult_fn(Context* __this, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->RegisterGlobalModuleResult(result);
}

// public Fuse.Scripting.IThreadWorker get_ThreadWorker() :69
void Context__get_ThreadWorker_fn(Context* __this, uObject** __retval)
{
    *__retval = __this->ThreadWorker();
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) :29
void Context__TryGetGlobalModuleResult_fn(Context* __this, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->TryGetGlobalModuleResult(id);
}

// public object Unwrap(object obj) :72
void Context__Unwrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Unwrap(obj);
}

// public object Wrap(object obj) :71
void Context__Wrap_fn(Context* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Wrap(obj);
}

// protected Context(Fuse.Scripting.IThreadWorker worker) [instance] :64
void Context::ctor_(uObject* worker)
{
    _moduleResults = ((::g::Uno::Threading::ConcurrentDictionary*)::g::Uno::Threading::ConcurrentDictionary::New1(::TYPES[27/*Uno.Threading.ConcurrentDictionary<string, Fuse.Scripting.ModuleResult>*/]));
    _worker = worker;
}

// public Fuse.Scripting.Function CallbackToFunction(Fuse.Scripting.Callback c) [instance] :83
::g::Fuse::Scripting::Function* Context::CallbackToFunction(uDelegate* c)
{
    if (_identity == NULL)
        _identity = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*"(Context)"*/], ::STRINGS[9/*"(function(x...*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Function*>(uPtr(_identity)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, c)), ::TYPES[28/*Fuse.Scripting.Function*/]);
}

// internal void DeleteGlobalModuleResult(Fuse.Scripting.ModuleResult mr) [instance] :37
void Context::DeleteGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* mr)
{
    bool ret1;
    bool ret2;

    if (::g::Uno::String::op_Equality(uPtr(mr)->Id, NULL))
        return;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret1), ret1))
        ::g::Uno::Threading::ConcurrentDictionary__Remove_fn(uPtr(_moduleResults), uPtr(mr)->Id, &ret2);
}

// public Uno.Threading.IDispatcher get_Dispatcher() [instance] :74
uObject* Context::Dispatcher()
{
    return ::g::Fuse::Scripting::IThreadWorker::Dispatcher(uInterface(uPtr(_worker), ::TYPES[29/*Fuse.Scripting.IThreadWorker*/]));
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) [instance] :76
void Context::Invoke(uDelegate* action)
{
    ::g::Fuse::Scripting::IThreadWorker::Invoke(uInterface(uPtr(_worker), ::TYPES[29/*Fuse.Scripting.IThreadWorker*/]), action);
}

// public Fuse.Scripting.Array NewArray(object[] values) [instance] :130
::g::Fuse::Scripting::Array* Context::NewArray(uArray* values)
{
    if (_newArray == NULL)
        _newArray = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*"(Context)"*/], ::STRINGS[10/*"(function(c...*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);

    ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(uPtr(_newArray)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBox<int>(::TYPES[55/*int*/], uPtr(values)->Length()))), ::TYPES[30/*Fuse.Scripting.Array*/]);

    for (int i = 0; i < values->Length(); i++)
        uPtr(a)->Item(i, uPtr(values)->Strong<uObject*>(i));

    return a;
}

// public Fuse.Scripting.Object NewObject() [instance] :123
::g::Fuse::Scripting::Object* Context::NewObject()
{
    if (_newObject == NULL)
        _newObject = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*"(Context)"*/], ::STRINGS[11/*"(function()...*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);

    return uCast< ::g::Fuse::Scripting::Object*>(uPtr(_newObject)->Call(uArray::New(::TYPES[16/*object[]*/], 0)), ::TYPES[21/*Fuse.Scripting.Object*/]);
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, Fuse.Scripting.Callback getProperty, [Fuse.Scripting.Callback setProperty], [bool enumerable], [bool configurable]) [instance] :91
void Context::ObjectDefineProperty(::g::Fuse::Scripting::Object* obj, uString* name, uDelegate* getProperty, uDelegate* setProperty, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[12/*"(function(o...*/], ::g::Uno::Delegate::op_Inequality(setProperty, NULL) ? ::STRINGS[13/*" set: setCa...*/] : ::STRINGS[14/*""*/]), ::STRINGS[15/*" enumerable...*/])), ::TYPES[28/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 6, obj, name, getProperty, setProperty, uBox(::g::Uno::Bool_typeof(), enumerable), uBox(::g::Uno::Bool_typeof(), configurable)));
}

// public void ObjectDefineProperty(Fuse.Scripting.Object obj, string name, object value, [bool enumerable], [bool configurable]) [instance] :98
void Context::ObjectDefineProperty1(::g::Fuse::Scripting::Object* obj, uString* name, uObject* value, bool enumerable, bool configurable)
{
    ::g::Fuse::Scripting::Function* func = uAs< ::g::Fuse::Scripting::Function*>(Evaluate(name, ::STRINGS[16/*"(function(o...*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);
    uPtr(func)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 5, obj, name, value, uBox(::g::Uno::Bool_typeof(), enumerable), uBox(::g::Uno::Bool_typeof(), configurable)));
}

// public object ParseJson(string json) [instance] :114
uObject* Context::ParseJson(uString* json)
{
    if (_parseJson == NULL)
        _parseJson = uCast< ::g::Fuse::Scripting::Function*>(Evaluate(::STRINGS[8/*"(Context)"*/], ::STRINGS[17/*"JSON.parse"*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);

    return uPtr(_parseJson)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, json));
}

// public void RegisterGlobalModuleResult(Fuse.Scripting.ModuleResult result) [instance] :22
void Context::RegisterGlobalModuleResult(::g::Fuse::Scripting::ModuleResult* result)
{
    if (::g::Uno::String::op_Equality(uPtr(result)->Id, NULL))
        return;

    ::g::Uno::Threading::ConcurrentDictionary__Add_fn(uPtr(_moduleResults), uPtr(result)->Id, result);
}

// public Fuse.Scripting.IThreadWorker get_ThreadWorker() [instance] :69
uObject* Context::ThreadWorker()
{
    return _worker;
}

// public Fuse.Scripting.ModuleResult TryGetGlobalModuleResult(string id) [instance] :29
::g::Fuse::Scripting::ModuleResult* Context::TryGetGlobalModuleResult(uString* id)
{
    bool ret3;
    ::g::Fuse::Scripting::ModuleResult* ret4;

    if (::g::Uno::String::op_Equality(id, NULL))
        return NULL;

    if ((::g::Uno::Threading::ConcurrentDictionary__ContainsKey_fn(uPtr(_moduleResults), id, &ret3), ret3))
        return (::g::Uno::Threading::ConcurrentDictionary__get_Item_fn(uPtr(_moduleResults), id, &ret4), ret4);

    return NULL;
}

// public object Unwrap(object obj) [instance] :72
uObject* Context::Unwrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Unwrap(uInterface(uPtr(_worker), ::TYPES[29/*Fuse.Scripting.IThreadWorker*/]), obj);
}

// public object Wrap(object obj) [instance] :71
uObject* Context::Wrap(uObject* obj)
{
    return ::g::Fuse::Scripting::IThreadWorker::Wrap(uInterface(uPtr(_worker), ::TYPES[29/*Fuse.Scripting.IThreadWorker*/]), obj);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.ContextClosure :71
// {
static void NativePromise__ContextClosure_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Promise");
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[32] = ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof();
    type->SetPrecalc(
        ::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativePromise__ContextClosure, _c), 0,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise__ContextClosure, _factory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise__ContextClosure, _converter), 0);
}

uType* NativePromise__ContextClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NativePromise__ContextClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.ContextClosure", options);
    type->fp_build_ = NativePromise__ContextClosure_build;
    return type;
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :76
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    __this->ctor_(c, factory, converter);
}

// internal object CreatePromise(object[] args) :82
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->CreatePromise(args);
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :76
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval)
{
    *__retval = NativePromise__ContextClosure::New1(__type, c, factory, converter);
}

// public ContextClosure(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :76
void NativePromise__ContextClosure::ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    _c = c;
    _factory = factory;
    _converter = converter;
}

// internal object CreatePromise(object[] args) [instance] :82
uObject* NativePromise__ContextClosure::CreatePromise(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.NativePromise<T, TJSResult>.PromiseClosure*/),
    };
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_c)->GlobalObject())->Item(::STRINGS[18/*"Promise"*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);
    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(_factory)->Invoke(1, args);
    return uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativePromise__PromiseClosure__Run_fn, ::g::Fuse::Scripting::NativePromise__PromiseClosure::New1(__types[0], _c, future, _converter))));
}

// public ContextClosure New(Fuse.Scripting.Context c, Fuse.Scripting.FutureFactory<T> factory, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :76
NativePromise__ContextClosure* NativePromise__ContextClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter)
{
    NativePromise__ContextClosure* obj1 = (NativePromise__ContextClosure*)uNew(__type);
    obj1->ctor_(c, factory, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.uno
// ------------------------------------------------------------------------------

// private sealed class ThreadWorker.ContextIgnoringAction :224
// {
static void ThreadWorker__ContextIgnoringAction_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action_typeof(), offsetof(ThreadWorker__ContextIgnoringAction, _action), 0);
}

uType* ThreadWorker__ContextIgnoringAction_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ThreadWorker__ContextIgnoringAction);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ThreadWorker.ContextIgnoringAction", options);
    type->fp_build_ = ThreadWorker__ContextIgnoringAction_build;
    return type;
}

// public ContextIgnoringAction(Uno.Action action) :228
void ThreadWorker__ContextIgnoringAction__ctor__fn(ThreadWorker__ContextIgnoringAction* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public ContextIgnoringAction New(Uno.Action action) :228
void ThreadWorker__ContextIgnoringAction__New1_fn(uDelegate* action, ThreadWorker__ContextIgnoringAction** __retval)
{
    *__retval = ThreadWorker__ContextIgnoringAction::New1(action);
}

// public void Run(Fuse.Scripting.Context context) :233
void ThreadWorker__ContextIgnoringAction__Run_fn(ThreadWorker__ContextIgnoringAction* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Run(context);
}

// public ContextIgnoringAction(Uno.Action action) [instance] :228
void ThreadWorker__ContextIgnoringAction::ctor_(uDelegate* action)
{
    _action = action;
}

// public void Run(Fuse.Scripting.Context context) [instance] :233
void ThreadWorker__ContextIgnoringAction::Run(::g::Fuse::Scripting::Context* context)
{
    uPtr(_action)->InvokeVoid();
}

// public ContextIgnoringAction New(Uno.Action action) [static] :228
ThreadWorker__ContextIgnoringAction* ThreadWorker__ContextIgnoringAction::New1(uDelegate* action)
{
    ThreadWorker__ContextIgnoringAction* obj1 = (ThreadWorker__ContextIgnoringAction*)uNew(ThreadWorker__ContextIgnoringAction_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.Wrapping.uno
// ---------------------------------------------------------------------------------------

// internal static class DateTimeConverterHelpers :11
// {
static void DateTimeConverterHelpers_build(uType* type)
{
    ::STRINGS[19] = uString::Const("getTime");
    ::TYPES[16] = uObject_typeof()->Array();
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static object ConvertDateTimeToJSDate(Uno.DateTime dt, Fuse.Scripting.Function dateCtor) :25
void DateTimeConverterHelpers__ConvertDateTimeToJSDate_fn(::g::Uno::DateTime* dt, ::g::Fuse::Scripting::Function* dateCtor, uObject** __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToJSDate(*dt, dateCtor);
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Object date) :16
void DateTimeConverterHelpers__ConvertDateToDateTime_fn(::g::Fuse::Scripting::Object* date, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateToDateTime(date);
}

// public static object ConvertDateTimeToJSDate(Uno.DateTime dt, Fuse.Scripting.Function dateCtor) [static] :25
uObject* DateTimeConverterHelpers::ConvertDateTimeToJSDate(::g::Uno::DateTime dt, ::g::Fuse::Scripting::Function* dateCtor)
{
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t jsTicks = dotNetTicksRelativeToUnixEpoch / 10000LL;
    return uPtr(dateCtor)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBox(::TYPES[58/*double*/], (double)jsTicks)));
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Object date) [static] :16
::g::Uno::DateTime DateTimeConverterHelpers::ConvertDateToDateTime(::g::Fuse::Scripting::Object* date)
{
    int64_t jsTicks = (int64_t)uUnbox<double>(::TYPES[58/*double*/], ::g::Fuse::Scripting::ThreadWorker::Wrap(uPtr(date)->CallMethod(::STRINGS[19/*"getTime"*/], uArray::New(::TYPES[16/*object[]*/], 0))));
    int64_t dotNetTicksRelativeToUnixEpoch = jsTicks * 10000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/DiagnosticSubject.uno
// -----------------------------------------------------------------------------------

// internal class DiagnosticSubject :6
// {
static void DiagnosticSubject_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(0,
        ::TYPES[14/*Uno.IDisposable*/], offsetof(DiagnosticSubject, _diagnostic), 0);
}

uType* DiagnosticSubject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DiagnosticSubject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.DiagnosticSubject", options);
    type->fp_build_ = DiagnosticSubject_build;
    type->fp_ctor_ = (void*)DiagnosticSubject__New1_fn;
    return type;
}

// public generated DiagnosticSubject() :6
void DiagnosticSubject__ctor__fn(DiagnosticSubject* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :9
void DiagnosticSubject__ClearDiagnostic_fn(DiagnosticSubject* __this)
{
    __this->ClearDiagnostic();
}

// public generated DiagnosticSubject New() :6
void DiagnosticSubject__New1_fn(DiagnosticSubject** __retval)
{
    *__retval = DiagnosticSubject::New1();
}

// public void SetDiagnostic(Fuse.Scripting.ScriptException se) :17
void DiagnosticSubject__SetDiagnostic_fn(DiagnosticSubject* __this, ::g::Fuse::Scripting::ScriptException* se)
{
    __this->SetDiagnostic(se);
}

// public generated DiagnosticSubject() [instance] :6
void DiagnosticSubject::ctor_()
{
}

// public void ClearDiagnostic() [instance] :9
void DiagnosticSubject::ClearDiagnostic()
{
    if (_diagnostic != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diagnostic), ::TYPES[14/*Uno.IDisposable*/]));
        _diagnostic = NULL;
    }
}

// public void SetDiagnostic(Fuse.Scripting.ScriptException se) [instance] :17
void DiagnosticSubject::SetDiagnostic(::g::Fuse::Scripting::ScriptException* se)
{
    ::g::Fuse::Diagnostic* d = ::g::Fuse::Diagnostic::New1(1, uPtr(se)->Name(), this, uPtr(se)->FileName(), uPtr(se)->LineNumber(), NULL, se);
    ClearDiagnostic();
    _diagnostic = ::g::Fuse::Diagnostics::ReportTemporal(d);
}

// public generated DiagnosticSubject New() [static] :6
DiagnosticSubject* DiagnosticSubject::New1()
{
    DiagnosticSubject* obj1 = (DiagnosticSubject*)uNew(DiagnosticSubject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.EmitClosure :163
// {
static void NativeEventEmitterModule__EmitClosure_build(uType* type)
{
    ::STRINGS[20] = uString::Const("emit");
    type->SetFields(0,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule__EmitClosure, _args), 0);
}

uType* NativeEventEmitterModule__EmitClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule__EmitClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.EmitClosure", options);
    type->fp_build_ = NativeEventEmitterModule__EmitClosure_build;
    return type;
}

// public EmitClosure(object[] args) :167
void NativeEventEmitterModule__EmitClosure__ctor__fn(NativeEventEmitterModule__EmitClosure* __this, uArray* args)
{
    __this->ctor_(args);
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :172
void NativeEventEmitterModule__EmitClosure__Emit_fn(NativeEventEmitterModule__EmitClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->Emit(c, o);
}

// public EmitClosure New(object[] args) :167
void NativeEventEmitterModule__EmitClosure__New1_fn(uArray* args, NativeEventEmitterModule__EmitClosure** __retval)
{
    *__retval = NativeEventEmitterModule__EmitClosure::New1(args);
}

// public EmitClosure(object[] args) [instance] :167
void NativeEventEmitterModule__EmitClosure::ctor_(uArray* args)
{
    _args = args;
}

// public void Emit(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :172
void NativeEventEmitterModule__EmitClosure::Emit(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[20/*"emit"*/], _args);
}

// public EmitClosure New(object[] args) [static] :167
NativeEventEmitterModule__EmitClosure* NativeEventEmitterModule__EmitClosure::New1(uArray* args)
{
    NativeEventEmitterModule__EmitClosure* obj1 = (NativeEventEmitterModule__EmitClosure*)uNew(NativeEventEmitterModule__EmitClosure_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public sealed class Error :80
// {
static void Error_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* Error_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.Error", options);
    type->fp_build_ = Error_build;
    return type;
}

// public Error(string message) :82
void Error__ctor_3_fn(Error* __this, uString* message)
{
    __this->ctor_3(message);
}

// public Error New(string message) :82
void Error__New4_fn(uString* message, Error** __retval)
{
    *__retval = Error::New4(message);
}

// public Error(string message) [instance] :82
void Error::ctor_3(uString* message)
{
    ctor_1(message);
}

// public Error New(string message) [static] :82
Error* Error::New4(uString* message)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/EventEmitterModule.uno
// -------------------------------------------------------------------------

// internal static class EventEmitterModule :7
// {
static void EventEmitterModule_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Fuse.Scripting.JavaScript");
    ::STRINGS[22] = uString::Const("FuseJS/EventEmitter.js");
    ::STRINGS[23] = uString::Const("FuseJS/EventEmitter");
    ::STRINGS[24] = uString::Const("Unable to get a FuseJS/EventEmitter instance");
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    type->SetDependencies(
        ::g::Uno::UX::FileSource_typeof());
    type->SetFields(0,
        ::TYPES[28/*Fuse.Scripting.Function*/], (uintptr_t)&EventEmitterModule::_instance_, uFieldFlagsStatic);
}

uClassType* EventEmitterModule_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.EventEmitterModule", options);
    type->fp_build_ = EventEmitterModule_build;
    return type;
}

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) :10
void EventEmitterModule__GetConstructor_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = EventEmitterModule::GetConstructor(c);
}

uSStrong< ::g::Fuse::Scripting::Function*> EventEmitterModule::_instance_;

// public static Fuse.Scripting.Function GetConstructor(Fuse.Scripting.Context c) [static] :10
::g::Fuse::Scripting::Function* EventEmitterModule::GetConstructor(::g::Fuse::Scripting::Context* c)
{
    if (EventEmitterModule::_instance_ == NULL)
    {
        ::g::Uno::IO::BundleFile* fileSource = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[21/*"Fuse.Script...*/]))->GetFile(::STRINGS[22/*"FuseJS/Even...*/]);
        uObject* exports = ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::FileSource::op_Implicit(fileSource))->EvaluateExports(c, ::STRINGS[23/*"FuseJS/Even...*/]);
        EventEmitterModule::_instance_ = uAs< ::g::Fuse::Scripting::Function*>(exports, ::TYPES[28/*Fuse.Scripting.Function*/]);

        if (EventEmitterModule::_instance_ == NULL)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[24/*"Unable to g...*/]));
    }

    return EventEmitterModule::_instance_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public enum ExecutionThread :8
uEnumType* ExecutionThread_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Scripting.ExecutionThread", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Any", 0LL,
        "JavaScript", 1LL,
        "MainThread", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public sealed class External :101
// {
static void External_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(External, Object), 0);
}

uType* External_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(External);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.External", options);
    type->fp_build_ = External_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))External__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))External__GetHashCode_fn;
    return type;
}

// public External(object o) :105
void External__ctor__fn(External* __this, uObject* o)
{
    __this->ctor_(o);
}

// public override sealed bool Equals(object o) :110
void External__Equals_fn(External* __this, uObject* o, bool* __retval)
{
    External* that = uAs<External*>(o, __this->__type);
    return *__retval = (that != NULL) && ::g::Uno::Object::Equals(uPtr(__this->Object), uPtr(that)->Object), void();
}

// public override sealed int GetHashCode() :116
void External__GetHashCode_fn(External* __this, int* __retval)
{
    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(__this->Object)), void();
}

// public External New(object o) :105
void External__New1_fn(uObject* o, External** __retval)
{
    *__retval = External::New1(o);
}

// public External(object o) [instance] :105
void External::ctor_(uObject* o)
{
    Object = o;
}

// public External New(object o) [static] :105
External* External::New1(uObject* o)
{
    External* obj1 = (External*)uNew(External_typeof());
    obj1->ctor_(o);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// internal sealed class FactoryClosure<T> :10
// {
static void FactoryClosure_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Exception_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _factory), 0,
        uObject_typeof()->Array(), offsetof(FactoryClosure, _args), 0,
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL), offsetof(FactoryClosure, _promise), 0);
}

uType* FactoryClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(FactoryClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.FactoryClosure`1", options);
    type->fp_build_ = FactoryClosure_build;
    return type;
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__ctor__fn(FactoryClosure* __this, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    __this->ctor_(factory, args, promise);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) :16
void FactoryClosure__New1_fn(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise, FactoryClosure** __retval)
{
    *__retval = FactoryClosure::New1(__type, factory, args, promise);
}

// public void Run() :23
void FactoryClosure__Run_fn(FactoryClosure* __this)
{
    __this->Run();
}

// public FactoryClosure(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [instance] :16
void FactoryClosure::ctor_(uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    _factory = factory;
    _args = args;
    _promise = promise;
}

// public void Run() [instance] :23
void FactoryClosure::Run()
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    uT res(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    res = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    try
    {
        {
            res = (uPtr(_factory)->Invoke(&ret2, 1, (uArray*)_args), ret2);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        uPtr(_promise)->Reject(e);
        return;
    }

    ::g::Uno::Threading::Promise__Resolve_fn(uPtr(_promise), res);
}

// public FactoryClosure New(Fuse.Scripting.ResultFactory<T> factory, object[] args, Uno.Threading.Promise<T> promise) [static] :16
FactoryClosure* FactoryClosure::New1(uType* __type, uDelegate* factory, uArray* args, ::g::Uno::Threading::Promise* promise)
{
    FactoryClosure* obj1 = (FactoryClosure*)uNew(__type);
    obj1->ctor_(factory, args, promise);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Failed :435
// {
static void Observable__Failed_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(Observable__Failed, _message), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Failed_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Failed);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Failed", options);
    type->fp_build_ = Observable__Failed_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Failed__OnPerform_fn;
    return type;
}

// public Failed(Fuse.Scripting.Observable obs, string message) :439
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Scripting::Observable* obs, uString* message)
{
    __this->ctor_1(obs, message);
}

// public Failed New(Fuse.Scripting.Observable obs, string message) :439
void Observable__Failed__New1_fn(::g::Fuse::Scripting::Observable* obs, uString* message, Observable__Failed** __retval)
{
    *__retval = Observable__Failed::New1(obs, message);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :444
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_message);
}

// public Failed(Fuse.Scripting.Observable obs, string message) [instance] :439
void Observable__Failed::ctor_1(::g::Fuse::Scripting::Observable* obs, uString* message)
{
    ctor_(obs);
    _message = message;
}

// public Failed New(Fuse.Scripting.Observable obs, string message) [static] :439
Observable__Failed* Observable__Failed::New1(::g::Fuse::Scripting::Observable* obs, uString* message)
{
    Observable__Failed* obj1 = (Observable__Failed*)uNew(Observable__Failed_typeof());
    obj1->ctor_1(obs, message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/FileModule.uno
// -----------------------------------------------------------------

// public class FileModule :19
// {
static void FileModule_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9);
}

::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FileModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Scripting.FileModule", options);
    type->fp_build_ = FileModule_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileModule(Uno.UX.FileSource fs) :21
void FileModule__ctor_2_fn(FileModule* __this, ::g::Uno::UX::FileSource* fs)
{
    __this->ctor_2(fs);
}

// public FileModule New(Uno.UX.FileSource fs) :21
void FileModule__New2_fn(::g::Uno::UX::FileSource* fs, FileModule** __retval)
{
    *__retval = FileModule::New2(fs);
}

// public FileModule(Uno.UX.FileSource fs) [instance] :21
void FileModule::ctor_2(::g::Uno::UX::FileSource* fs)
{
    ctor_1();
    File(fs);
}

// public FileModule New(Uno.UX.FileSource fs) [static] :21
FileModule* FileModule::New2(::g::Uno::UX::FileSource* fs)
{
    FileModule* obj1 = (FileModule*)uNew(FileModule_typeof());
    obj1->ctor_2(fs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TResult> :96
// {
static void JSCallback__FuncClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL), offsetof(JSCallback__FuncClosure, _method), 0);
}

uType* JSCallback__FuncClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`1", options);
    type->fp_build_ = JSCallback__FuncClosure_build;
    return type;
}

// public FuncClosure(Uno.Func<TResult> method) :100
void JSCallback__FuncClosure__ctor__fn(JSCallback__FuncClosure* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TResult> method) :100
void JSCallback__FuncClosure__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure** __retval)
{
    *__retval = JSCallback__FuncClosure::New1(__type, method);
}

// public object Run(object[] args) :105
void JSCallback__FuncClosure__Run_fn(JSCallback__FuncClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TResult> method) [instance] :100
void JSCallback__FuncClosure::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :105
uObject* JSCallback__FuncClosure::Run(uArray* args)
{
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    return uBoxPtr(__type->T(0), (uPtr(_method)->Invoke(&ret2), ret2));
}

// public FuncClosure New(Uno.Func<TResult> method) [static] :100
JSCallback__FuncClosure* JSCallback__FuncClosure::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure* obj1 = (JSCallback__FuncClosure*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// private sealed class JSCallback.FuncClosure<TArg, TResult> :111
// {
static void JSCallback__FuncClosure1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("First argument should be of type ");
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[0] = ::g::Fuse::Scripting::JSCallback_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetPrecalc(
        ::g::Fuse::Scripting::JSCallback_typeof()->MakeMethod(4/*GetArg<TArg>*/, type->T(0), NULL));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(JSCallback__FuncClosure1, _method), 0);
}

uType* JSCallback__FuncClosure1_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(JSCallback__FuncClosure1);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.JSCallback.FuncClosure`2", options);
    type->fp_build_ = JSCallback__FuncClosure1_build;
    return type;
}

// public FuncClosure(Uno.Func<TArg, TResult> method) :115
void JSCallback__FuncClosure1__ctor__fn(JSCallback__FuncClosure1* __this, uDelegate* method)
{
    __this->ctor_(method);
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) :115
void JSCallback__FuncClosure1__New1_fn(uType* __type, uDelegate* method, JSCallback__FuncClosure1** __retval)
{
    *__retval = JSCallback__FuncClosure1::New1(__type, method);
}

// public object Run(object[] args) :120
void JSCallback__FuncClosure1__Run_fn(JSCallback__FuncClosure1* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public FuncClosure(Uno.Func<TArg, TResult> method) [instance] :115
void JSCallback__FuncClosure1::ctor_(uDelegate* method)
{
    _method = method;
}

// public object Run(object[] args) [instance] :120
uObject* JSCallback__FuncClosure1::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.GetArg<TArg>*/),
    };
    uT ret2(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    uT ret4(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));
    uT arg(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));
    bool ret3;

    if (::g::Uno::Type::op_Equality(__type->T(0), ::TYPES[16/*object[]*/]))
        return uBoxPtr(__type->T(1), (uPtr(_method)->Invoke(&ret2, 1, (void*)uUnboxAny(__type->T(0), args)), ret2));

    arg = uT(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if ((::g::Fuse::Scripting::JSCallback__GetArg_fn(__types[0], args, &arg, uCRef<int>(0), &ret3), ret3))
        return uBoxPtr(__type->T(1), (uPtr(_method)->Invoke(&ret4, 1, (void*)arg), ret4));

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[0/*"First argum...*/], __type->T(0))));
}

// public FuncClosure New(Uno.Func<TArg, TResult> method) [static] :115
JSCallback__FuncClosure1* JSCallback__FuncClosure1::New1(uType* __type, uDelegate* method)
{
    JSCallback__FuncClosure1* obj1 = (JSCallback__FuncClosure1*)uNew(__type);
    obj1->ctor_(method);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public abstract class Function :58
// {
static void Function_build(uType* type)
{
}

Function_type* Function_typeof()
{
    static uSStrong<Function_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Function);
    options.TypeSize = sizeof(Function_type);
    type = (Function_type*)uClassType::New("Fuse.Scripting.Function", options);
    type->fp_build_ = Function_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Function__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Function__GetHashCode_fn;
    return type;
}

// protected generated Function() :58
void Function__ctor__fn(Function* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :64
void Function__Equals_fn(Function* __this, uObject* o, bool* __retval)
{
    Function* a = uAs<Function*>(o, Function_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :70
void Function__GetHashCode_fn(Function* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Function() [instance] :58
void Function::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/FunctionMirror.uno
// --------------------------------------------------------------------------------

// internal sealed class FunctionMirror :10
// {
static void FunctionMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(FunctionMirror_type, interface0),
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(FunctionMirror_type, interface1));
    type->SetFields(1,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(FunctionMirror, _func), 0);
}

FunctionMirror_type* FunctionMirror_typeof()
{
    static uSStrong<FunctionMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::DiagnosticSubject_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(FunctionMirror);
    options.TypeSize = sizeof(FunctionMirror_type);
    type = (FunctionMirror_type*)uClassType::New("Fuse.Scripting.FunctionMirror", options);
    type->fp_build_ = FunctionMirror_build;
    type->interface0.fp_Dispatch = (void(*)(uObject*, uObject*))FunctionMirror__Dispatch_fn;
    type->interface1.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))FunctionMirror__get_ReflectedRaw_fn;
    return type;
}

// public FunctionMirror(Fuse.Scripting.Function func) :17
void FunctionMirror__ctor_1_fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_1(func);
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) :56
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e)
{
    __this->Dispatch(e);
}

// public FunctionMirror New(Fuse.Scripting.Function func) :17
void FunctionMirror__New2_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval)
{
    *__retval = FunctionMirror::New2(func);
}

// public object get_ReflectedRaw() :15
void FunctionMirror__get_ReflectedRaw_fn(FunctionMirror* __this, uObject** __retval)
{
    *__retval = __this->ReflectedRaw();
}

// public FunctionMirror(Fuse.Scripting.Function func) [instance] :17
void FunctionMirror::ctor_1(::g::Fuse::Scripting::Function* func)
{
    ctor_();
    _func = func;
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) [instance] :56
void FunctionMirror::Dispatch(uObject* e)
{
    uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)FunctionMirror__CallClosure__Call_fn, FunctionMirror__CallClosure::New1(this, e)));
}

// public object get_ReflectedRaw() [instance] :15
uObject* FunctionMirror::ReflectedRaw()
{
    return _func;
}

// public FunctionMirror New(Fuse.Scripting.Function func) [static] :17
FunctionMirror* FunctionMirror::New2(::g::Fuse::Scripting::Function* func)
{
    FunctionMirror* obj1 = (FunctionMirror*)uNew(FunctionMirror_typeof());
    obj1->ctor_1(func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.FutureClosure :200
// {
static void ScriptPromise__FutureClosure_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptPromise__FutureClosure, _context), 0,
        ::g::Fuse::Scripting::ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL), offsetof(ScriptPromise__FutureClosure, _futureFactory), 0,
        ::g::Fuse::Scripting::ScriptPromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL), offsetof(ScriptPromise__FutureClosure, _promiseClosure), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        uObject_typeof()->Array(), offsetof(ScriptPromise__FutureClosure, _args), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(1), NULL), offsetof(ScriptPromise__FutureClosure, _future), 0);
}

uType* ScriptPromise__FutureClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 3;
    options.ObjectSize = sizeof(ScriptPromise__FutureClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptPromise`3.FutureClosure", options);
    type->fp_build_ = ScriptPromise__FutureClosure_build;
    return type;
}

// public FutureClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult> futureFactory, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure promiseClosure, TSelf self, object[] args) :208
void ScriptPromise__FutureClosure__ctor__fn(ScriptPromise__FutureClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args)
{
    __this->_context = context;
    __this->_futureFactory = futureFactory;
    __this->_promiseClosure = promiseClosure;
    __this->_self() = self;
    __this->_args = args;
}

// private void DispatchFuture(Fuse.Scripting.Context action) :229
void ScriptPromise__FutureClosure__DispatchFuture_fn(ScriptPromise__FutureClosure* __this, ::g::Fuse::Scripting::Context* action)
{
    __this->DispatchFuture(action);
}

// public FutureClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult> futureFactory, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure promiseClosure, TSelf self, object[] args) :208
void ScriptPromise__FutureClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* futureFactory, ::g::Fuse::Scripting::ScriptPromise__PromiseClosure* promiseClosure, void* self, uArray* args, ScriptPromise__FutureClosure** __retval)
{
    ScriptPromise__FutureClosure* obj1 = (ScriptPromise__FutureClosure*)uNew(__type);
    ScriptPromise__FutureClosure__ctor__fn(obj1, context, futureFactory, promiseClosure, self, args);
    return *__retval = obj1, void();
}

// public void Run() :223
void ScriptPromise__FutureClosure__Run_fn(ScriptPromise__FutureClosure* __this)
{
    __this->Run();
}

// private void DispatchFuture(Fuse.Scripting.Context action) [instance] :229
void ScriptPromise__FutureClosure::DispatchFuture(::g::Fuse::Scripting::Context* action)
{
    uPtr(_promiseClosure)->OnFutureReady(_future);
}

// public void Run() [instance] :223
void ScriptPromise__FutureClosure::Run()
{
    _future = (::g::Uno::Threading::Future1*)uPtr(_futureFactory)->Invoke(3, (::g::Fuse::Scripting::Context*)_context, (void*)_self(), (uArray*)_args);
    uPtr(_context)->Invoke(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ScriptPromise__FutureClosure__DispatchFuture_fn, this));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// public delegate Uno.Threading.Future<T> FutureFactory<T>(object[] args) :7
uDelegateType* FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.FutureFactory`1", 1, 1);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public delegate Uno.Threading.Future<TResult> ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult>(Fuse.Scripting.Context context, TSelf self, object[] args) :151
uDelegateType* ScriptPromise__FutureFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ScriptPromise`3.FutureFactory`2", 3, 5);
    type->SetSignature(::g::Uno::Threading::Future1_typeof()->MakeType(type->T(4), NULL),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(3),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IEventSerializer :5
// {
uInterfaceType* IEventSerializer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IEventSerializer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.uno
// ------------------------------------------------------------------------------

// internal abstract interface IMirror :10
// {
uInterfaceType* IMirror_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IMirror", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptModule.uno
// -------------------------------------------------------------------

// public abstract interface IModuleProvider :10
// {
uInterfaceType* IModuleProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IModuleProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.InsertAll :617
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAll, _index), 0,
        ::g::Fuse::Scripting::ArrayMirror_typeof(), offsetof(Observable__InsertAll, _items), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) :622
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) :622
void Observable__InsertAll__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, ::g::Fuse::Scripting::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :633
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :628
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) [instance] :622
void Observable__InsertAll::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Scripting.Observable obs, int index, Fuse.Scripting.ArrayMirror items) [static] :622
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Scripting::Observable* obs, int index, ::g::Fuse::Scripting::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.InsertAt :589
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(Observable__InsertAt, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Scripting.Observable obs, int index, object value) :594
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Scripting.Observable obs, int index, object value) :594
void Observable__InsertAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :605
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :600
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Scripting.Observable obs, int index, object value) [instance] :594
void Observable__InsertAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Scripting.Observable obs, int index, object value) [static] :594
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ValueMirror.uno
// -----------------------------------------------------------------------------

// internal abstract interface IRaw :8
// {
uInterfaceType* IRaw_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IRaw", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IScriptEvent :27
// {
uInterfaceType* IScriptEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptEvent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/IScriptEvent.uno
// -------------------------------------------------------------------

// public abstract interface IScriptObject :15
// {
uInterfaceType* IScriptObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IScriptObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Context.uno
// --------------------------------------------------------------

// public abstract interface IThreadWorker :10
// {
uInterfaceType* IThreadWorker_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Scripting.IThreadWorker", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// public static class JSCallback :5
// {
static void JSCallback_build(uType* type)
{
    type->MethodTypes[0]->SetPrecalc(
        JSCallback__ActionClosure1_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        JSCallback__ActionClosure2_typeof()->MakeType(type->MethodTypes[1]->U(0), type->MethodTypes[1]->U(1), NULL));
    type->MethodTypes[2]->SetPrecalc(
        JSCallback__FuncClosure_typeof()->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        JSCallback__FuncClosure1_typeof()->MakeType(type->MethodTypes[3]->U(0), type->MethodTypes[3]->U(1), NULL));
    type->MethodTypes[4]->SetPrecalc(
        JSCallback__NumberConverter_typeof()->MakeMethod(1/*TryConvert<T>*/, type->MethodTypes[4]->U(0), NULL));
}

uClassType* JSCallback_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->MethodTypes[1] = type->NewMethodType(2, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 1,0);
    type->MethodTypes[3] = type->NewMethodType(2, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSCallback_build;
    return type;
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) :7
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction(action);
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) :12
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction1(__type, action);
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) :17
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval)
{
    *__retval = JSCallback::FromAction2(__type, action);
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) :22
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc(__type, func);
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) :27
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval)
{
    *__retval = JSCallback::FromFunc1(__type, func);
}

// private static bool GetArg<T>(object[] args, T& arg, int index) :152
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.TryConvert<T>*/),
    };
    int index_ = *index;
    bool ret1;
    arg.Default(__type->U(0));

    if (uPtr(args)->Length() > index_)
    {
        if ((JSCallback__NumberConverter__TryConvert_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), arg, &ret1), ret1))
            return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public static Fuse.Scripting.Callback FromAction(Uno.Action action) [static] :7
uDelegate* JSCallback::FromAction(uDelegate* action)
{
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure__Run_fn, JSCallback__ActionClosure::New1(action));
}

// public static Fuse.Scripting.Callback FromAction<T>(Uno.Action<T> action) [static] :12
uDelegate* JSCallback::FromAction1(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T>*/),
    };
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure1__Run_fn, (JSCallback__ActionClosure1*)JSCallback__ActionClosure1::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromAction<T1, T2>(Uno.Action<T1, T2> action) [static] :17
uDelegate* JSCallback::FromAction2(uType* __type, uDelegate* action)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.ActionClosure<T1, T2>*/),
    };
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)JSCallback__ActionClosure2__Run_fn, (JSCallback__ActionClosure2*)JSCallback__ActionClosure2::New1(__types[0], action));
}

// public static Fuse.Scripting.Callback FromFunc<TResult>(Uno.Func<TResult> func) [static] :22
uDelegate* JSCallback::FromFunc(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<TResult>*/),
    };
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure__Run_fn, (JSCallback__FuncClosure*)JSCallback__FuncClosure::New1(__types[0], func));
}

// public static Fuse.Scripting.Callback FromFunc<T, TResult>(Uno.Func<T, TResult> func) [static] :27
uDelegate* JSCallback::FromFunc1(uType* __type, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.FuncClosure<T, TResult>*/),
    };
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)JSCallback__FuncClosure1__Run_fn, (JSCallback__FuncClosure1*)JSCallback__FuncClosure1::New1(__types[0], func));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSObjectUtils.uno
// --------------------------------------------------------------------

// public static class JSObjectUtils :3
// {
static void JSObjectUtils_build(uType* type)
{
    ::TYPES[34] = ::g::Fuse::Marshal_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[34/*Fuse.Marshal*/]->MakeMethod(0/*ToType<T>*/, type->MethodTypes[0]->U(0), NULL));
}

uClassType* JSObjectUtils_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSObjectUtils", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSObjectUtils_build;
    return type;
}

// public static T ValueOrDefault<T>(object[] args, int index, [T defaultValue]) :12
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int* index, void* defaultValue, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Marshal.ToType<T>*/),
    };
    uT ret4(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int index_ = *index;

    if ((index_ < 0) || (index_ > (uPtr(args)->Length() - 1)))
        return __retval.Store(__type->U(0), defaultValue), void();

    return __retval.Store((::g::Fuse::Marshal__ToType_fn(__types[0], uPtr(args)->Strong<uObject*>(index_), &ret4), ret4)), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObservableProperty.uno
// ------------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :7
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[35] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Scripting::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ObservableProperty_type);
    type = (::g::Fuse::Scripting::ObservableProperty_type*)uClassType::New("Fuse.Scripting.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Scripting::ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Scripting::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :9
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_1(w, obj, p);
}

// private object Get(object[] args) :14
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :9
void LazyObservableProperty__New2_fn(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(w, obj, p);
}

// public LazyObservableProperty(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :9
void LazyObservableProperty::ctor_1(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ctor_(w, obj, p);
    uPtr(uPtr(w)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[35/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :14
uObject* LazyObservableProperty::Get(uArray* args)
{
    return uPtr(_worker)->Unwrap(GetObservable());
}

// public LazyObservableProperty New(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :9
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ValueMirror.uno
// -----------------------------------------------------------------------------

// internal abstract class ListMirror :38
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(ListMirror_type, interface1));
    type->SetFields(1);
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ValueMirror_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Scripting.ListMirror", options);
    type->fp_build_ = ListMirror_build;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// protected ListMirror(object raw) :43
void ListMirror__ctor_2_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_2(raw);
}

// protected ListMirror(object raw) [instance] :43
void ListMirror::ctor_2(uObject* raw)
{
    ctor_1(raw);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno
// ------------------------------------------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :159
// {
// static generated MethodClosure() :159
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[16/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::STRINGS[25] = uString::Const(" (ScriptMethod)");
    ::STRINGS[26] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[27] = uString::Const(" = function() { return callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[36] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[30] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(ThreadWorker__MethodClosure, _worker), 0,
        ::TYPES[16/*object[]*/], (uintptr_t)&ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.ThreadWorker worker) :163
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    __this->ctor_(cl, m, worker);
}

// private object Callback(object[] args) :176
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :184
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.ThreadWorker worker) :163
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(cl, m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.ThreadWorker worker) [instance] :163
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    _m = m;
    _worker = worker;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[25/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[26/*"(function (...*/], uPtr(m)->Name), ::STRINGS[27/*" = function...*/])), ::TYPES[28/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, cl, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, this)));
}

// private object Callback(object[] args) [instance] :176
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[36/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[30/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(uPtr(_worker)->Context(), self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :184
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    uArray* res = uArray::New(::TYPES[16/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Scripting::ThreadWorker::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Scripting.ThreadWorker worker) [static] :163
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(cl, m, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Module.uno
// -------------------------------------------------------------

// public abstract class Module :7
// {
static void Module_build(uType* type)
{
    ::STRINGS[28] = uString::Const("exports");
    ::STRINGS[29] = uString::Const("disposed");
    ::STRINGS[30] = uString::Const("id");
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Module_type, interface0));
    type->SetFields(0,
        ::g::Uno::EventHandler_typeof(), offsetof(Module, _evaluated), 0,
        ::g::Uno::Bool_typeof(), offsetof(Module, _isEvaluated), 0);
}

Module_type* Module_typeof()
{
    static uSStrong<Module_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Module);
    options.TypeSize = sizeof(Module_type);
    type = (Module_type*)uClassType::New("Fuse.Scripting.Module", options);
    type->fp_build_ = Module_build;
    type->fp_CreateExportsObject = Module__CreateExportsObject_fn;
    type->fp_GetFile = Module__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Module__Dispose_fn;
    return type;
}

// protected generated Module() :7
void Module__ctor__fn(Module* __this)
{
    __this->ctor_();
}

// private virtual object CreateExportsObject(Fuse.Scripting.Context c) :76
void Module__CreateExportsObject_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    return *__retval = uPtr(c)->NewObject(), void();
}

// public void Dispose() :81
void Module__Dispose_fn(Module* __this)
{
    __this->Dispose();
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) :15
void Module__Evaluate1_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, ::g::Fuse::Scripting::ModuleResult** __retval)
{
    *__retval = __this->Evaluate1(c, id);
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) :9
void Module__EvaluateExports_fn(Module* __this, ::g::Fuse::Scripting::Context* c, uString* id, uObject** __retval)
{
    *__retval = __this->EvaluateExports(c, id);
}

// public virtual Uno.UX.FileSource GetFile() :71
void Module__GetFile_fn(Module* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = NULL, void();
}

// protected bool get_IsEvaluated() :41
void Module__get_IsEvaluated_fn(Module* __this, bool* __retval)
{
    *__retval = __this->IsEvaluated();
}

// private void MarkEvaluated() :57
void Module__MarkEvaluated_fn(Module* __this)
{
    __this->MarkEvaluated();
}

// protected generated Module() [instance] :7
void Module::ctor_()
{
}

// public void Dispose() [instance] :81
void Module::Dispose()
{
}

// public Fuse.Scripting.ModuleResult Evaluate(Fuse.Scripting.Context c, string id) [instance] :15
::g::Fuse::Scripting::ModuleResult* Module::Evaluate1(::g::Fuse::Scripting::Context* c, uString* id)
{
    ::g::Fuse::Scripting::ModuleResult* mr = uPtr(c)->TryGetGlobalModuleResult(id);

    if (mr != NULL)
        return mr;

    ::g::Fuse::Scripting::Object* module = c->NewObject();
    uPtr(module)->Item(::STRINGS[28/*"exports"*/], CreateExportsObject(c));
    module->Item(::STRINGS[29/*"disposed"*/], c->NewArray(uArray::New(::TYPES[16/*object[]*/], 0)));
    ::g::Fuse::Scripting::ModuleResult* result = ::g::Fuse::Scripting::ModuleResult::New1(c, id, this, module);

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(c)->RegisterGlobalModuleResult(result);

    try
    {
        {
            Evaluate(c, result);
            MarkEvaluated();
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[15/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* e = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(result)->Error(e);
        }
        else         throw __t;
    }

    if (::g::Uno::String::op_Inequality(id, NULL))
        uPtr(module)->Item(::STRINGS[30/*"id"*/], id);

    return result;
}

// public object EvaluateExports(Fuse.Scripting.Context c, string id) [instance] :9
uObject* Module::EvaluateExports(::g::Fuse::Scripting::Context* c, uString* id)
{
    uObject* r = uPtr(uPtr(Evaluate1(c, id))->Object)->Item(::STRINGS[28/*"exports"*/]);
    return r;
}

// protected bool get_IsEvaluated() [instance] :41
bool Module::IsEvaluated()
{
    return _isEvaluated;
}

// private void MarkEvaluated() [instance] :57
void Module::MarkEvaluated()
{
    _isEvaluated = true;
    uDelegate* handler = _evaluated;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
        _evaluated = NULL;
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ModuleInstance.uno
// --------------------------------------------------------------------------------

// internal sealed class ModuleInstance :7
// {
// static generated ModuleInstance() :7
static void ModuleInstance__cctor__fn(uType* __type)
{
    ModuleInstance::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void ModuleInstance_build(uType* type)
{
    ::STRINGS[28] = uString::Const("exports");
    ::TYPES[37] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::Scripting::ScriptModule_typeof());
    type->SetFields(1,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(ModuleInstance, _worker), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(ModuleInstance, _js), 0,
        ::TYPES[37/*Uno.Collections.Dictionary<string, object>*/], offsetof(ModuleInstance, _deps), 0,
        uObject_typeof(), offsetof(ModuleInstance, _dc), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(ModuleInstance, _moduleResult), 0,
        ::g::Fuse::Scripting::DiagnosticSubject_typeof(), offsetof(ModuleInstance, _diagnostic1), 0,
        uObject_typeof(), (uintptr_t)&ModuleInstance::_resetHookMutex_, uFieldFlagsStatic);
}

uType* ModuleInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::DiagnosticSubject_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ModuleInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ModuleInstance", options);
    type->fp_build_ = ModuleInstance_build;
    type->fp_cctor_ = ModuleInstance__cctor__fn;
    return type;
}

// public ModuleInstance(Fuse.Scripting.ThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_1(worker, js);
}

// public void Dispose() :57
void ModuleInstance__Dispose_fn(ModuleInstance* __this)
{
    __this->Dispose();
}

// private void Evaluate(Fuse.Scripting.Context context) :25
void ModuleInstance__Evaluate_fn(ModuleInstance* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Evaluate(context);
}

// private object EvaluateExports() :68
void ModuleInstance__EvaluateExports_fn(ModuleInstance* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :82
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this)
{
    __this->EvaluateModule();
}

// public ModuleInstance New(Fuse.Scripting.ThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__New2_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval)
{
    *__retval = ModuleInstance::New2(worker, js);
}

// private void SetDataContext() :49
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this)
{
    __this->SetDataContext();
}

uSStrong<uObject*> ModuleInstance::_resetHookMutex_;

// public ModuleInstance(Fuse.Scripting.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :14
void ModuleInstance::ctor_1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ::g::Fuse::Reactive::JavaScript__Dependency* ret3;
    ::g::Fuse::Reactive::JavaScript__Dependency* ret4;
    _deps = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[37/*Uno.Collections.Dictionary<string, object>*/]));
    _diagnostic1 = ::g::Fuse::Scripting::DiagnosticSubject::New1();
    ctor_();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[38/*Uno.Collections.ICollection<Fuse.Reactive.JavaScript.Dependency>*/])); i++)
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_deps), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[39/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret3), ret3))->Name(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[39/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret4), ret4))->Value);

    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ModuleInstance__Evaluate_fn, this));
}

// public void Dispose() [instance] :57
void ModuleInstance::Dispose()
{
    ClearDiagnostic();

    if (_moduleResult != NULL)
    {
        uPtr(_moduleResult)->Dispose();
        _moduleResult = NULL;
    }
}

// private void Evaluate(Fuse.Scripting.Context context) [instance] :25
void ModuleInstance::Evaluate(::g::Fuse::Scripting::Context* context)
{
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > ret5;
    uObject* ret6;
    uObject* ret7;
    ::g::Uno::Collections::Dictionary* deps = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[37/*Uno.Collections.Dictionary<string, object>*/]);
    ::g::Uno::Collections::Dictionary__KeyCollection__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__KeyCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_deps)->Keys()), &ret5), ret5);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[40/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]))
            {
                uString* key = enum1.Current(::TYPES[40/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(deps), key, uPtr(_worker)->Unwrap((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_deps), key, &ret6), ret6)));
            }
        }
        {
            enum1.Dispose(::TYPES[40/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[40/*Uno.Collections.Dictionary<string, object>.KeyCollection.Enumerator*/]);
        }
                throw __t;
    }

    ::g::Uno::UX::NameTable* nt = uPtr(_js)->_nameTable;

    while (nt != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(nt)->Entries)->Length(); ++i)
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(deps), uPtr(uPtr(nt)->Entries)->Strong<uString*>(i), uPtr(_worker)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[41/*Uno.Collections.IList<object>*/]), uCRef<int>(i), &ret7), ret7)));

        nt = uPtr(nt)->ParentTable;
    }

    uPtr(uPtr(_js)->ScriptModule())->Dependencies = deps;
    _dc = uPtr(_worker)->Reflect(EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ModuleInstance__SetDataContext_fn, this));
}

// private object EvaluateExports() [instance] :68
uObject* ModuleInstance::EvaluateExports()
{
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[28/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :82
void ModuleInstance::EvaluateModule()
{
    uPtr(_diagnostic1)->ClearDiagnostic();
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(ModuleInstance::_resetHookMutex_);

    try
    {
        {
            ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(uPtr(_js)->ScriptModule())->Evaluate1(uPtr(_worker)->Context(), globalId);
            uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)::g::Fuse::Reactive::JavaScript__DispatchEvaluate_fn, uPtr(_js)));

            if (newModuleResult->Error() == NULL)
                _moduleResult = newModuleResult;
            else
            {
                ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

                if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_))
                    uPtr(_diagnostic1)->SetDiagnostic(se);
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex_);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex_);
        }
                throw __t;
    }
}

// private void SetDataContext() [instance] :49
void ModuleInstance::SetDataContext()
{
    if (_moduleResult != NULL)
        uPtr(_js)->SetDataContext(_dc);
}

// public ModuleInstance New(Fuse.Scripting.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :14
ModuleInstance* ModuleInstance::New2(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ModuleInstance* obj2 = (ModuleInstance*)uNew(ModuleInstance_typeof());
    obj2->ctor_1(worker, js);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ModuleResult.uno
// -------------------------------------------------------------------

// public sealed class ModuleResult :10
// {
static void ModuleResult_build(uType* type)
{
    ::STRINGS[29] = uString::Const("disposed");
    ::STRINGS[31] = uString::Const("(unknown module)");
    ::TYPES[42] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ModuleResult, Context), 0,
        ::g::Uno::String_typeof(), offsetof(ModuleResult, Id), 0,
        ::g::Fuse::Scripting::Module_typeof(), offsetof(ModuleResult, Module), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(ModuleResult, Object), 0,
        ::g::Uno::Bool_typeof(), offsetof(ModuleResult, _globalKeyListening), 0,
        ::g::Uno::Bool_typeof(), offsetof(ModuleResult, _fileListening), 0,
        ::TYPES[42/*Uno.Collections.List<Uno.Action>*/], offsetof(ModuleResult, _invalidateCallbacks), 0,
        ::g::Fuse::Scripting::ScriptException_typeof(), offsetof(ModuleResult, _Error), 0);
}

uType* ModuleResult_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ModuleResult);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ModuleResult", options);
    type->fp_build_ = ModuleResult_build;
    type->fp_ToString = (void(*)(uObject*, uString**))ModuleResult__ToString_fn;
    return type;
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :23
void ModuleResult__ctor__fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_(context, id, mod, obj);
}

// public void AddDependency(Uno.Action invalidateCallback) :55
void ModuleResult__AddDependency_fn(ModuleResult* __this, uDelegate* invalidateCallback)
{
    __this->AddDependency(invalidateCallback);
}

// public void Dispose() :88
void ModuleResult__Dispose_fn(ModuleResult* __this)
{
    __this->Dispose();
}

// public generated Fuse.Scripting.ScriptException get_Error() :18
void ModuleResult__get_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException** __retval)
{
    *__retval = __this->Error();
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) :18
void ModuleResult__set_Error_fn(ModuleResult* __this, ::g::Fuse::Scripting::ScriptException* value)
{
    __this->Error(value);
}

// public void Invalidate() :75
void ModuleResult__Invalidate_fn(ModuleResult* __this)
{
    __this->Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) :23
void ModuleResult__New1_fn(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj, ModuleResult** __retval)
{
    *__retval = ModuleResult::New1(context, id, mod, obj);
}

// private void OnDataChanged(object sender, Uno.EventArgs args) :60
void ModuleResult__OnDataChanged_fn(ModuleResult* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnDataChanged(sender, args);
}

// private void OnDisposed(Fuse.Scripting.Context action) :107
void ModuleResult__OnDisposed_fn(ModuleResult* __this, ::g::Fuse::Scripting::Context* action)
{
    __this->OnDisposed(action);
}

// private void OnGlobalKeyChanged(string key) :48
void ModuleResult__OnGlobalKeyChanged_fn(ModuleResult* __this, uString* key)
{
    __this->OnGlobalKeyChanged(key);
}

// public override sealed string ToString() :65
void ModuleResult__ToString_fn(ModuleResult* __this, uString** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->Id, NULL))
        return *__retval = __this->Id, void();

    if (uPtr(__this->Module)->GetFile() != NULL)
        return *__retval = uPtr(uPtr(__this->Module)->GetFile())->Name, void();

    return *__retval = ::STRINGS[31/*"(unknown mo...*/], void();
}

// public ModuleResult(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [instance] :23
void ModuleResult::ctor_(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    _invalidateCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[42/*Uno.Collections.List<Uno.Action>*/]));
    Context = context;
    Module = mod;
    Object = obj;
    Id = id;

    if (::g::Uno::String::op_Inequality(Id, NULL))
    {
        _globalKeyListening = true;
        ::g::Uno::UX::Resource::AddGlobalKeyListener(uDelegate::New(::TYPES[43/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
    }

    if (uPtr(Module)->GetFile() != NULL)
    {
        uPtr(uPtr(Module)->GetFile())->add_DataChanged(uDelegate::New(::TYPES[44/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = true;
    }
}

// public void AddDependency(Uno.Action invalidateCallback) [instance] :55
void ModuleResult::AddDependency(uDelegate* invalidateCallback)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_invalidateCallbacks), invalidateCallback);
}

// public void Dispose() [instance] :88
void ModuleResult::Dispose()
{
    if (_fileListening)
    {
        uPtr(uPtr(Module)->GetFile())->remove_DataChanged(uDelegate::New(::TYPES[44/*Uno.EventHandler<Uno.EventArgs>*/], (void*)ModuleResult__OnDataChanged_fn, this));
        _fileListening = false;
    }

    if (_globalKeyListening)
    {
        ::g::Uno::UX::Resource::RemoveGlobalKeyListener(uDelegate::New(::TYPES[43/*Uno.Action<string>*/], (void*)ModuleResult__OnGlobalKeyChanged_fn, this));
        _globalKeyListening = false;
    }

    if (::g::Uno::String::op_Inequality(Id, NULL))
        uPtr(Context)->DeleteGlobalModuleResult(this);

    uPtr(Context)->Invoke(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ModuleResult__OnDisposed_fn, this));
}

// public generated Fuse.Scripting.ScriptException get_Error() [instance] :18
::g::Fuse::Scripting::ScriptException* ModuleResult::Error()
{
    return _Error;
}

// internal generated void set_Error(Fuse.Scripting.ScriptException value) [instance] :18
void ModuleResult::Error(::g::Fuse::Scripting::ScriptException* value)
{
    _Error = value;
}

// public void Invalidate() [instance] :75
void ModuleResult::Invalidate()
{
    Dispose();
    uArray* callbacks = (uArray*)uPtr(_invalidateCallbacks)->ToArray();
    uPtr(_invalidateCallbacks)->Clear();

    for (int index2 = 0, length3 = uPtr(callbacks)->Length(); index2 < length3; ++index2)
    {
        uDelegate* c = uPtr(callbacks)->Strong<uDelegate*>(index2);
        uPtr(c)->InvokeVoid();
    }
}

// private void OnDataChanged(object sender, Uno.EventArgs args) [instance] :60
void ModuleResult::OnDataChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    Invalidate();
}

// private void OnDisposed(Fuse.Scripting.Context action) [instance] :107
void ModuleResult::OnDisposed(::g::Fuse::Scripting::Context* action)
{
    if (uPtr(Object)->ContainsKey(::STRINGS[29/*"disposed"*/]))
    {
        ::g::Fuse::Scripting::Array* disposed = uAs< ::g::Fuse::Scripting::Array*>(uPtr(Object)->Item(::STRINGS[29/*"disposed"*/]), ::TYPES[30/*Fuse.Scripting.Array*/]);

        if (disposed != NULL)

            for (int i = 0; i < uPtr(disposed)->Length(); i++)
            {
                ::g::Fuse::Scripting::Function* func = uCast< ::g::Fuse::Scripting::Function*>(uPtr(disposed)->Item(i), ::TYPES[28/*Fuse.Scripting.Function*/]);

                if (func != NULL)
                    uPtr(func)->Call(uArray::New(::TYPES[16/*object[]*/], 0));
            }
    }
}

// private void OnGlobalKeyChanged(string key) [instance] :48
void ModuleResult::OnGlobalKeyChanged(uString* key)
{
    if (::g::Uno::String::op_Equality(key, Id))
        Invalidate();
}

// public ModuleResult New(Fuse.Scripting.Context context, string id, Fuse.Scripting.Module mod, Fuse.Scripting.Object obj) [static] :23
ModuleResult* ModuleResult::New1(::g::Fuse::Scripting::Context* context, uString* id, ::g::Fuse::Scripting::Module* mod, ::g::Fuse::Scripting::Object* obj)
{
    ModuleResult* obj4 = (ModuleResult*)uNew(ModuleResult_typeof());
    obj4->ctor_(context, id, mod, obj);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeFunction.uno
// ---------------------------------------------------------------------

// public delegate object NativeCallback(Fuse.Scripting.Context c, object[] args) :6
uDelegateType* NativeCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.NativeCallback", 2, 0);
    type->SetSignature(uObject_typeof(),
        ::g::Fuse::Scripting::Context_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeEvent.uno
// ------------------------------------------------------------------

// public sealed class NativeEvent :7
// {
static void NativeEvent_build(uType* type)
{
    ::STRINGS[32] = uString::Const("this.Context != null");
    ::STRINGS[33] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeEvent.uno");
    ::TYPES[45] = ::g::Uno::Collections::Queue_typeof()->MakeType(uObject_typeof()->Array(), NULL);
    ::TYPES[46] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(1/*Invoke1<object[], object>*/, uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetBase(::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Fuse::Scripting::Function_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL));
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(8,
        ::TYPES[45/*Uno.Collections.Queue<object[]>*/], offsetof(NativeEvent, _eventArgsQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEvent, _queueEventsBeforeEvaluation), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(NativeEvent, _jsFunction), 0);
}

::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeProperty_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeEvent);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeProperty_type);
    type = (::g::Fuse::Scripting::NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeEvent", options);
    type->fp_build_ = NativeEvent_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::NativeProperty*, uTRef))NativeEvent__GetProperty_fn;
    type->fp_SetProperty1 = (void(*)(::g::Fuse::Scripting::NativeProperty*, void*))NativeEvent__SetProperty1_fn;
    return type;
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet)
{
    __this->ctor_4(name, *queueEventsBeforeHandlerIsSet);
}

// private void DispatchQueue() :30
void NativeEvent__DispatchQueue_fn(NativeEvent* __this)
{
    __this->DispatchQueue();
}

// protected override sealed Fuse.Scripting.Function GetProperty() :25
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = __this->_jsFunction, void();
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) :13
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval)
{
    *__retval = NativeEvent::New4(name, *queueEventsBeforeHandlerIsSet);
}

// internal object RaiseSync(object[] args) :44
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->RaiseSync(args);
}

// protected override sealed void SetProperty(Fuse.Scripting.Function function) :19
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function)
{
    __this->_jsFunction = function;
    __this->DispatchQueue();
}

// public NativeEvent(string name, [bool queueEventsBeforeHandlerIsSet]) [instance] :13
void NativeEvent::ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    ctor_1(name);
    _eventArgsQueue = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::TYPES[45/*Uno.Collections.Queue<object[]>*/]));
    _queueEventsBeforeEvaluation = queueEventsBeforeHandlerIsSet;
}

// private void DispatchQueue() [instance] :30
void NativeEvent::DispatchQueue()
{
    uArray* ret2;

    while ((uPtr(_eventArgsQueue)->Count() > 0) && (_jsFunction != NULL))
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[46/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[47/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), (::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_eventArgsQueue), &ret2), ret2));
}

// internal object RaiseSync(object[] args) [instance] :44
uObject* NativeEvent::RaiseSync(uArray* args)
{
    ::g::Uno::Diagnostics::Debug::Assert(Context() != NULL, ::STRINGS[32/*"this.Contex...*/], ::STRINGS[33/*"/usr/local/...*/], 46, uArray::New(::TYPES[16/*object[]*/], 0));

    if (_jsFunction != NULL)
        ::g::Uno::Threading::IDispatcherExtensions__Invoke11_fn(::TYPES[46/*Uno.Threading.IDispatcherExtensions.Invoke1<object[], object>*/], uPtr(Context())->Dispatcher(), uDelegate::New(::TYPES[47/*Uno.Func<object[], object>*/], uPtr(_jsFunction), offsetof(::g::Fuse::Scripting::Function_type, fp_Call)), args);

    return NULL;
}

// public NativeEvent New(string name, [bool queueEventsBeforeHandlerIsSet]) [static] :13
NativeEvent* NativeEvent::New4(uString* name, bool queueEventsBeforeHandlerIsSet)
{
    NativeEvent* obj1 = (NativeEvent*)uNew(NativeEvent_typeof());
    obj1->ctor_4(name, queueEventsBeforeHandlerIsSet);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// public class NativeEventEmitterModule :9
// {
static void NativeEventEmitterModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Scripting::EventEmitterModule_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        uObject_typeof()->Array(), offsetof(NativeEventEmitterModule, _eventNames), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Scripting::Callback_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _listeningCallbacks), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(NativeEventEmitterModule, _this), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _initialized), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeEventEmitterModule, _context), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeEventEmitterModule, _queueEventsBeforeInit), 0,
        uObject_typeof(), offsetof(NativeEventEmitterModule, _mutex), 0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::g::Fuse::Scripting::Object_typeof(), NULL), NULL), offsetof(NativeEventEmitterModule, _queuedEvents), 0);
}

::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeEventEmitterModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Scripting.NativeEventEmitterModule", options);
    type->fp_build_ = NativeEventEmitterModule_build;
    type->fp_CreateExportsObject = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, uObject**))NativeEventEmitterModule__CreateExportsObject_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) :25
void NativeEventEmitterModule__ctor_2_fn(NativeEventEmitterModule* __this, bool* queueEventsBeforeInit, uArray* eventNames)
{
    __this->ctor_2(*queueEventsBeforeInit, eventNames);
}

// private override sealed object CreateExportsObject(Fuse.Scripting.Context c) :55
void NativeEventEmitterModule__CreateExportsObject_fn(NativeEventEmitterModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval)
{
    __this->_context = c;
    __this->_this = uPtr(::g::Fuse::Scripting::EventEmitterModule::GetConstructor(__this->_context))->Construct(__this->_eventNames);
    ::g::Fuse::Scripting::AppInitialized::On(c, uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, __this));
    return *__retval = __this->_this, void();
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) :127
void NativeEventEmitterModule__Dispatch_fn(NativeEventEmitterModule* __this, uDelegate* action, bool* alwaysQueueEventBeforeInit)
{
    __this->Dispatch(action, *alwaysQueueEventBeforeInit);
}

// protected void Emit(object[] args) :81
void NativeEventEmitterModule__Emit_fn(NativeEventEmitterModule* __this, uArray* args)
{
    __this->Emit(args);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) :156
void NativeEventEmitterModule__On_fn(NativeEventEmitterModule* __this, uObject* eventName, uDelegate* listener)
{
    __this->On(eventName, listener);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) :147
void NativeEventEmitterModule__On1_fn(NativeEventEmitterModule* __this, uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    __this->On1(eventName, nativeEvent);
}

// private void OnAppInitialized() :65
void NativeEventEmitterModule__OnAppInitialized_fn(NativeEventEmitterModule* __this)
{
    __this->OnAppInitialized();
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) :33
void NativeEventEmitterModule__ResetListeners_fn(NativeEventEmitterModule* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    __this->ResetListeners(sender, eventArgs);
}

// private void ResetListenersJS() :45
void NativeEventEmitterModule__ResetListenersJS_fn(NativeEventEmitterModule* __this)
{
    __this->ResetListenersJS();
}

// public NativeEventEmitterModule(bool queueEventsBeforeInit, object[] eventNames) [instance] :25
void NativeEventEmitterModule::ctor_2(bool queueEventsBeforeInit, uArray* eventNames)
{
    _listeningCallbacks = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), NULL)));
    _mutex = ::g::Uno::Object::New();
    _queuedEvents = ((::g::Uno::Collections::Queue*)::g::Uno::Collections::Queue::New1(::g::Uno::Collections::Queue_typeof()->MakeType(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[21/*Fuse.Scripting.Object*/], NULL), NULL)));
    ctor_1();
    _queueEventsBeforeInit = queueEventsBeforeInit;
    _eventNames = eventNames;
    add_Reset(uDelegate::New(::TYPES[50/*Uno.EventHandler*/], (void*)NativeEventEmitterModule__ResetListeners_fn, this));
}

// private void Dispatch(Uno.Action<Fuse.Scripting.Context, Fuse.Scripting.Object> action, [bool alwaysQueueEventBeforeInit]) [instance] :127
void NativeEventEmitterModule::Dispatch(uDelegate* action, bool alwaysQueueEventBeforeInit)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            if (!_initialized)
            {
                if (alwaysQueueEventBeforeInit || _queueEventsBeforeInit)
                    ::g::Uno::Collections::Queue__Enqueue_fn(uPtr(_queuedEvents), action);

                ::g::Uno::Threading::Monitor::Exit(_mutex);
                return;
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    ::g::Uno::Threading::IDispatcherExtensions__Invoke2_fn(::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(2/*Invoke2<Fuse.Scripting.Context, Fuse.Scripting.Object>*/, ::g::Fuse::Scripting::Context_typeof(), ::TYPES[21/*Fuse.Scripting.Object*/], NULL), uPtr(_context)->Dispatcher(), action, _context, _this);
}

// protected void Emit(object[] args) [instance] :81
void NativeEventEmitterModule::Emit(uArray* args)
{
    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[21/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__EmitClosure__Emit_fn, NativeEventEmitterModule__EmitClosure::New1(args)), false);
}

// protected void On(object eventName, Fuse.Scripting.Callback listener) [instance] :156
void NativeEventEmitterModule::On(uObject* eventName, uDelegate* listener)
{
    ::g::Uno::Tuple2* ret4;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(_listeningCallbacks), (::g::Uno::Tuple__Create1_fn(::g::Uno::Tuple_typeof()->MakeMethod(0/*Create<object, Fuse.Scripting.Callback>*/, uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), eventName, listener, &ret4), ret4));
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[21/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1(eventName, listener)), true);
}

// protected void On(object eventName, Fuse.Scripting.NativeEvent nativeEvent) [instance] :147
void NativeEventEmitterModule::On1(uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent)
{
    On(eventName, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)::g::Fuse::Scripting::NativeEvent__RaiseSync_fn, uPtr(nativeEvent)));
}

// private void OnAppInitialized() [instance] :65
void NativeEventEmitterModule::OnAppInitialized()
{
    uDelegate* ret5;
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            _initialized = true;

            while (uPtr(_queuedEvents)->Count() > 0)
                uPtr((::g::Uno::Collections::Queue__Dequeue_fn(uPtr(_queuedEvents), &ret5), ret5))->Invoke(2, (::g::Fuse::Scripting::Context*)_context, (::g::Fuse::Scripting::Object*)_this);
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }
}

// private void ResetListeners(object sender, Uno.EventArgs eventArgs) [instance] :33
void NativeEventEmitterModule::ResetListeners(uObject* sender, ::g::Uno::EventArgs* eventArgs)
{
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            _initialized = false;
            uPtr(_queuedEvents)->Clear();
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    if (_context != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeEventEmitterModule__ResetListenersJS_fn, this));
}

// private void ResetListenersJS() [instance] :45
void NativeEventEmitterModule::ResetListenersJS()
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > ret6;
    uObject* ret7;
    uDelegate* ret8;
    uPtr(_this)->CallMethod(uString::Const("removeAllListeners"), uArray::New(::TYPES[16/*object[]*/], 0));
    ::g::Uno::Threading::Monitor::Enter(_mutex);

    try
    {
        {
            ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Tuple2*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_listeningCallbacks), &ret6), ret6);

            try
            {
                {
                    while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), NULL)))
                    {
                        ::g::Uno::Tuple2* l = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), NULL));
                        Dispatch(uDelegate::New(::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), ::TYPES[21/*Fuse.Scripting.Object*/], NULL), (void*)NativeEventEmitterModule__OnClosure__On_fn, NativeEventEmitterModule__OnClosure::New1((::g::Uno::Tuple2__get_Item1_fn(uPtr(l), &ret7), ret7), (::g::Uno::Tuple2__get_Item2_fn(uPtr(l), &ret8), ret8))), true);
                    }
                }
                {
                    enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), NULL));
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Tuple2_typeof()->MakeType(uObject_typeof(), ::TYPES[31/*Fuse.Scripting.Callback*/], NULL), NULL));
                }
                                throw __t;
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(_mutex);
        }
                throw __t;
    }

    ::g::Fuse::Scripting::AppInitialized::On(_context, uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativeEventEmitterModule__OnAppInitialized_fn, this));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeFunction.uno
// ---------------------------------------------------------------------

// public sealed class NativeFunction :8
// {
static void NativeFunction_build(uType* type)
{
    type->SetFields(3,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(NativeFunction, _nativeCallback), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NativeFunction);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativeFunction", options);
    type->fp_build_ = NativeFunction_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeFunction__CreateObject_fn;
    return type;
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__ctor_1_fn(NativeFunction* __this, uString* name, uDelegate* callback)
{
    __this->ctor_1(name, callback);
}

// internal Fuse.Scripting.Callback CreateCallback() :17
void NativeFunction__CreateCallback_fn(NativeFunction* __this, uDelegate** __retval)
{
    *__retval = __this->CreateCallback();
}

// protected override sealed object CreateObject() :12
void NativeFunction__CreateObject_fn(NativeFunction* __this, uObject** __retval)
{
    return *__retval = __this->CreateCallback(), void();
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) :22
void NativeFunction__New1_fn(uString* name, uDelegate* callback, NativeFunction** __retval)
{
    *__retval = NativeFunction::New1(name, callback);
}

// public NativeFunction(string name, Fuse.Scripting.NativeCallback callback) [instance] :22
void NativeFunction::ctor_1(uString* name, uDelegate* callback)
{
    ctor_(name);
    _nativeCallback = callback;
}

// internal Fuse.Scripting.Callback CreateCallback() [instance] :17
uDelegate* NativeFunction::CreateCallback()
{
    return uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)NativeFunction__NativeFunctionClosure__Callback_fn, NativeFunction__NativeFunctionClosure::New1(_nativeCallback, Context()));
}

// public NativeFunction New(string name, Fuse.Scripting.NativeCallback callback) [static] :22
NativeFunction* NativeFunction::New1(uString* name, uDelegate* callback)
{
    NativeFunction* obj1 = (NativeFunction*)uNew(NativeFunction_typeof());
    obj1->ctor_1(name, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeFunction.uno
// ---------------------------------------------------------------------

// private sealed class NativeFunction.NativeFunctionClosure :27
// {
static void NativeFunction__NativeFunctionClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::NativeCallback_typeof(), offsetof(NativeFunction__NativeFunctionClosure, _callback), 0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeFunction__NativeFunctionClosure, _context), 0);
}

uType* NativeFunction__NativeFunctionClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeFunction__NativeFunctionClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeFunction.NativeFunctionClosure", options);
    type->fp_build_ = NativeFunction__NativeFunctionClosure_build;
    return type;
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :32
void NativeFunction__NativeFunctionClosure__ctor__fn(NativeFunction__NativeFunctionClosure* __this, uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    __this->ctor_(callback, context);
}

// public object Callback(object[] args) :38
void NativeFunction__NativeFunctionClosure__Callback_fn(NativeFunction__NativeFunctionClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) :32
void NativeFunction__NativeFunctionClosure__New1_fn(uDelegate* callback, ::g::Fuse::Scripting::Context* context, NativeFunction__NativeFunctionClosure** __retval)
{
    *__retval = NativeFunction__NativeFunctionClosure::New1(callback, context);
}

// public NativeFunctionClosure(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [instance] :32
void NativeFunction__NativeFunctionClosure::ctor_(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    _context = context;
    _callback = callback;
}

// public object Callback(object[] args) [instance] :38
uObject* NativeFunction__NativeFunctionClosure::Callback(uArray* args)
{
    return uPtr(_callback)->Invoke(2, (::g::Fuse::Scripting::Context*)_context, args);
}

// public NativeFunctionClosure New(Fuse.Scripting.NativeCallback callback, Fuse.Scripting.Context context) [static] :32
NativeFunction__NativeFunctionClosure* NativeFunction__NativeFunctionClosure::New1(uDelegate* callback, ::g::Fuse::Scripting::Context* context)
{
    NativeFunction__NativeFunctionClosure* obj1 = (NativeFunction__NativeFunctionClosure*)uNew(NativeFunction__NativeFunctionClosure_typeof());
    obj1->ctor_(callback, context);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeMember.uno
// -------------------------------------------------------------------

// public abstract class NativeMember :6
// {
static void NativeMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativeMember, _Context), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(NativeMember, _ModuleObject), 0,
        ::g::Uno::String_typeof(), offsetof(NativeMember, _Name), 0);
}

NativeMember_type* NativeMember_typeof()
{
    static uSStrong<NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeMember);
    options.TypeSize = sizeof(NativeMember_type);
    type = (NativeMember_type*)uClassType::New("Fuse.Scripting.NativeMember", options);
    type->fp_build_ = NativeMember_build;
    return type;
}

// protected internal NativeMember(string name) :11
void NativeMember__ctor__fn(NativeMember* __this, uString* name)
{
    __this->ctor_(name);
}

// public generated Fuse.Scripting.Context get_Context() :9
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// private generated void set_Context(Fuse.Scripting.Context value) :9
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value)
{
    __this->Context(value);
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) :13
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    __this->Create(obj, context);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() :10
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->ModuleObject();
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) :10
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value)
{
    __this->ModuleObject(value);
}

// protected generated string get_Name() :8
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :8
void NativeMember__set_Name_fn(NativeMember* __this, uString* value)
{
    __this->Name(value);
}

// protected internal NativeMember(string name) [instance] :11
void NativeMember::ctor_(uString* name)
{
    Name(name);
}

// public generated Fuse.Scripting.Context get_Context() [instance] :9
::g::Fuse::Scripting::Context* NativeMember::Context()
{
    return _Context;
}

// private generated void set_Context(Fuse.Scripting.Context value) [instance] :9
void NativeMember::Context(::g::Fuse::Scripting::Context* value)
{
    _Context = value;
}

// internal void Create(Fuse.Scripting.Object obj, Fuse.Scripting.Context context) [instance] :13
void NativeMember::Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context)
{
    ModuleObject(obj);
    Context(context);
    uObject* member = CreateObject();

    if (member != NULL)
        uPtr(ModuleObject())->Item(Name(), member);
}

// protected generated Fuse.Scripting.Object get_ModuleObject() [instance] :10
::g::Fuse::Scripting::Object* NativeMember::ModuleObject()
{
    return _ModuleObject;
}

// private generated void set_ModuleObject(Fuse.Scripting.Object value) [instance] :10
void NativeMember::ModuleObject(::g::Fuse::Scripting::Object* value)
{
    _ModuleObject = value;
}

// protected generated string get_Name() [instance] :8
uString* NativeMember::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :8
void NativeMember::Name(uString* value)
{
    _Name = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeModule.uno
// -------------------------------------------------------------------

// public class NativeModule :6
// {
static void NativeModule_build(uType* type)
{
    ::STRINGS[34] = uString::Const("NativeModule(): Cannot add more members after first use");
    ::STRINGS[28] = uString::Const("exports");
    ::TYPES[48] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[21] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[49] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Scripting::NativeMember_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(NativeModule_type, interface1));
    type->SetFields(2,
        ::TYPES[48/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/], offsetof(NativeModule, _members), 0,
        ::TYPES[50/*Uno.EventHandler*/], offsetof(NativeModule, Reset1), 0);
}

NativeModule_type* NativeModule_typeof()
{
    static uSStrong<NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeModule);
    options.TypeSize = sizeof(NativeModule_type);
    type = (NativeModule_type*)uClassType::New("Fuse.Scripting.NativeModule", options);
    type->fp_build_ = NativeModule_build;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))NativeModule__Evaluate_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated NativeModule() :6
void NativeModule__ctor_1_fn(NativeModule* __this)
{
    __this->ctor_1();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) :23
void NativeModule__AddMember_fn(NativeModule* __this, ::g::Fuse::Scripting::NativeMember* member)
{
    __this->AddMember(member);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :30
void NativeModule__Evaluate_fn(NativeModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > ret3;
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;

    if (module != NULL)
    {
        ::g::Fuse::Scripting::Object* obj = uAs< ::g::Fuse::Scripting::Object*>(uPtr(module)->Item(::STRINGS[28/*"exports"*/]), ::TYPES[21/*Fuse.Scripting.Object*/]);

        if (obj != NULL)
        {
            ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Scripting::NativeMember*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_members), &ret3), ret3);

            try
            {
                {
                    while (enum1.MoveNext(::TYPES[49/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]))
                    {
                        ::g::Fuse::Scripting::NativeMember* m = enum1.Current(::TYPES[49/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                        uPtr(m)->Create(obj, c);
                    }
                }
                {
                    enum1.Dispose(::TYPES[49/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[49/*Uno.Collections.List<Fuse.Scripting.NativeMember>.Enumerator*/]);
                }
                                throw __t;
            }
        }
    }
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :10
void NativeModule__FuseScriptingIModuleProviderGetModule_fn(NativeModule* __this, ::g::Fuse::Scripting::Module** __retval)
{
    return *__retval = __this, void();
}

// internal void InternalReset() :17
void NativeModule__InternalReset_fn(NativeModule* __this)
{
    __this->InternalReset();
}

// public generated void add_Reset(Uno.EventHandler value) :15
void NativeModule__add_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->add_Reset(value);
}

// public generated void remove_Reset(Uno.EventHandler value) :15
void NativeModule__remove_Reset_fn(NativeModule* __this, uDelegate* value)
{
    __this->remove_Reset(value);
}

// public generated NativeModule() [instance] :6
void NativeModule::ctor_1()
{
    _members = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[48/*Uno.Collections.List<Fuse.Scripting.NativeMember>*/]));
    ctor_();
}

// protected void AddMember(Fuse.Scripting.NativeMember member) [instance] :23
void NativeModule::AddMember(::g::Fuse::Scripting::NativeMember* member)
{
    if (IsEvaluated())
        U_THROW(::g::Uno::Exception::New2(::STRINGS[34/*"NativeModul...*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr(_members), member);
}

// internal void InternalReset() [instance] :17
void NativeModule::InternalReset()
{
    if (::g::Uno::Delegate::op_Inequality(Reset1, NULL))
        uPtr(Reset1)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty_);
}

// public generated void add_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::add_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Reset1, value), ::TYPES[50/*Uno.EventHandler*/]);
}

// public generated void remove_Reset(Uno.EventHandler value) [instance] :15
void NativeModule::remove_Reset(uDelegate* value)
{
    Reset1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Reset1, value), ::TYPES[50/*Uno.EventHandler*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// public sealed class NativePromise<T, TJSResult> :40
// {
static void NativePromise_build(uType* type)
{
    type->SetPrecalc(
        NativePromise__ContextClosure_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Fuse::Scripting::FactoryClosure_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(3,
        ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise, _futureFactory), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise, _resultConverter), 0,
        ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise, _func), 0);
}

::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeMember_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 6;
    options.GenericCount = 2;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(NativePromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeMember_type);
    type = (::g::Fuse::Scripting::NativeMember_type*)uClassType::New("Fuse.Scripting.NativePromise`2", options);
    type->fp_build_ = NativePromise_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativePromise__CreateObject_fn;
    return type;
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    __this->ctor_1(name, futureFactory, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    __this->ctor_2(name, func, resultConverter);
}

// protected override sealed object CreateObject() :66
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Scripting.NativePromise<T, TJSResult>.ContextClosure*/),
    };
    return *__retval = uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)NativePromise__ContextClosure__CreatePromise_fn, NativePromise__ContextClosure::New1(__types[0], __this->Context(), __this->_futureFactory, __this->_resultConverter)), void();
}

// private Uno.Threading.Future<T> Factory(object[] args) :53
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = __this->Factory(args);
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :60
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New1(__type, name, futureFactory, resultConverter);
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) :46
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval)
{
    *__retval = NativePromise::New2(__type, name, func, resultConverter);
}

// public NativePromise(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :60
void NativePromise::ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    ctor_(name);
    _futureFactory = futureFactory;
    _resultConverter = resultConverter;
}

// public NativePromise(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [instance] :46
void NativePromise::ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter)
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Scripting.FutureFactory<T>*/),
    };
    ctor_(name);
    _func = func;
    _futureFactory = uDelegate::New(__types[0], (void*)NativePromise__Factory_fn, this);
    _resultConverter = resultConverter;
}

// private Uno.Threading.Future<T> Factory(object[] args) [instance] :53
::g::Uno::Threading::Future1* NativePromise::Factory(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Threading.Promise<T>*/),
        __type->Precalced(1/*Fuse.Scripting.FactoryClosure<T>*/),
    };
    ::g::Uno::Threading::Promise* future = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)::g::Fuse::Scripting::FactoryClosure__Run_fn, (::g::Fuse::Scripting::FactoryClosure*)::g::Fuse::Scripting::FactoryClosure::New1(__types[1], _func, args, future)))->Start();
    return future;
}

// public NativePromise New(string name, Fuse.Scripting.FutureFactory<T> futureFactory, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :60
NativePromise* NativePromise::New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter)
{
    NativePromise* obj2 = (NativePromise*)uNew(__type);
    obj2->ctor_1(name, futureFactory, resultConverter);
    return obj2;
}

// public NativePromise New(string name, Fuse.Scripting.ResultFactory<T> func, [Fuse.Scripting.ResultConverter<T, TJSResult> resultConverter]) [static] :46
NativePromise* NativePromise::New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter)
{
    NativePromise* obj1 = (NativePromise*)uNew(__type);
    obj1->ctor_2(name, func, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeProperty.uno
// ---------------------------------------------------------------------

// public class NativeProperty<T, TJSValue> :8
// {
static void NativeProperty_build(uType* type)
{
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[51] = ::g::Uno::Func_typeof();
    ::TYPES[52] = ::g::Uno::Action1_typeof();
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL),
        ::g::Uno::Func_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(3,
        ::TYPES[52/*Uno.Action`1*/]->MakeType(type->T(1), NULL), offsetof(NativeProperty, _setHandler), 0,
        ::TYPES[51/*Uno.Func`1*/]->MakeType(type->T(0), NULL), offsetof(NativeProperty, _getHandler), 0,
        ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativeProperty, _valueConverter), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(NativeProperty, _isReadonly), 0);
}

NativeProperty_type* NativeProperty_typeof()
{
    static uSStrong<NativeProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeMember_typeof();
    options.FieldCount = 8;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(NativeProperty);
    options.TypeSize = sizeof(NativeProperty_type);
    type = (NativeProperty_type*)uClassType::New("Fuse.Scripting.NativeProperty`2", options);
    type->fp_build_ = NativeProperty_build;
    type->fp_CreateObject = (void(*)(::g::Fuse::Scripting::NativeMember*, uObject**))NativeProperty__CreateObject_fn;
    type->fp_GetProperty = NativeProperty__GetProperty_fn;
    type->fp_SetProperty1 = NativeProperty__SetProperty1_fn;
    return type;
}

// public NativeProperty(string name) :16
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name)
{
    __this->ctor_1(name);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    __this->ctor_2(name, getHandler, setHandler, valueConverter);
}

// public NativeProperty(string name, TJSValue value) :19
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value)
{
    __this->ctor_2(name, NULL, NULL, NULL);
    __this->_isReadonly = true;
    __this->_readonlyValue() = value;
}

// protected override sealed object CreateObject() :33
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval)
{
    if (__this->_isReadonly)
        uPtr(__this->Context())->ObjectDefineProperty1(__this->ModuleObject(), __this->Name(), uBoxPtr(__this->__type->GetBase(NativeProperty_typeof())->T(1), __this->_readonlyValue()), false, false);
    else
        uPtr(__this->Context())->ObjectDefineProperty(__this->ModuleObject(), __this->Name(), uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)NativeProperty__GetProperty1_fn, __this), uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)NativeProperty__SetProperty_fn, __this), false, false);

    return *__retval = NULL, void();
}

// protected virtual T GetProperty() :63
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->__type->GetBase(NativeProperty_typeof())->T(0), uT(__this->__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize))), void();
}

// private object GetProperty(object[] args) :53
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetProperty1(args);
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) :25
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval)
{
    *__retval = NativeProperty::New2(__type, name, getHandler, setHandler, valueConverter);
}

// public NativeProperty New(string name, TJSValue value) :19
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval)
{
    NativeProperty* obj2 = (NativeProperty*)uNew(__type);
    NativeProperty__ctor_3_fn(obj2, name, value);
    return *__retval = obj2, void();
}

// private object SetProperty(object[] args) :43
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->SetProperty(args);
}

// protected virtual void SetProperty(TJSValue value) :51
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value)
{
}

// public NativeProperty(string name) [instance] :16
void NativeProperty::ctor_1(uString* name)
{
    ctor_2(name, NULL, NULL, NULL);
}

// public NativeProperty(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [instance] :25
void NativeProperty::ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    ctor_(name);
    _setHandler = setHandler;
    _getHandler = getHandler;
    _valueConverter = valueConverter;
}

// private object GetProperty(object[] args) [instance] :53
uObject* NativeProperty::GetProperty1(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(1/*Uno.Func<T>*/),
    };
    uT ret4(__type->GetBase(NativeProperty_typeof())->T(1), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(1)->ValueSize));
    uT ret5(__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize));
    uT ret6(__type->GetBase(NativeProperty_typeof())->T(0), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(0)->ValueSize));

    if (::g::Uno::Delegate::op_Equality(_getHandler, NULL))
        _getHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_GetProperty));

    if (::g::Uno::Delegate::op_Inequality(_valueConverter, NULL))
        return uBoxPtr(__type->GetBase(NativeProperty_typeof())->T(1), (uPtr(_valueConverter)->Invoke(&ret4, 2, (::g::Fuse::Scripting::Context*)Context(), (uPtr(_getHandler)->Invoke(&ret5), (void*)ret5)), ret4));

    return uBoxPtr(__type->GetBase(NativeProperty_typeof())->T(0), (uPtr(_getHandler)->Invoke(&ret6), ret6));
}

// private object SetProperty(object[] args) [instance] :43
uObject* NativeProperty::SetProperty(uArray* args)
{
    uType* __types[] = {
        __type->GetBase(NativeProperty_typeof())->Precalced(0/*Uno.Action<TJSValue>*/),
    };

    if (::g::Uno::Delegate::op_Equality(_setHandler, NULL))
        _setHandler = uDelegate::New(__types[0], this, offsetof(NativeProperty_type, fp_SetProperty1));

    uPtr(_setHandler)->InvokeVoid(((uPtr(args)->Length() > 0) && uIs((uObject*)uPtr(args)->Strong<uObject*>(0), __type->GetBase(NativeProperty_typeof())->T(1))) ? (void*)uUnboxAny(__type->GetBase(NativeProperty_typeof())->T(1), uPtr(args)->Strong<uObject*>(0)) : (void*)uT(__type->GetBase(NativeProperty_typeof())->T(1), U_ALLOCA(__type->GetBase(NativeProperty_typeof())->T(1)->ValueSize)));
    return NULL;
}

// public NativeProperty New(string name, [Uno.Func<T> getHandler], [Uno.Action<TJSValue> setHandler], [Fuse.Scripting.ValueConverter<T, TJSValue> valueConverter]) [static] :25
NativeProperty* NativeProperty::New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter)
{
    NativeProperty* obj3 = (NativeProperty*)uNew(__type);
    obj3->ctor_2(name, getHandler, setHandler, valueConverter);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.NewAll :487
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[53] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Scripting::ArrayMirror_typeof(), offsetof(Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAll, _origin), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) :492
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) :492
void Observable__NewAll__New1_fn(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :503
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[53/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), (uObject*)__this->_newValues);
}

// protected override sealed void Unsubscribe() :498
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) [instance] :492
void Observable__NewAll::ctor_1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Scripting.Observable obs, Fuse.Scripting.ArrayMirror newValues, int origin) [static] :492
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Scripting::Observable* obs, ::g::Fuse::Scripting::ArrayMirror* newValues, int origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.NewAt :457
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(Observable__NewAt, _value), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Scripting.Observable obs, int index, object newValue) :462
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Scripting.Observable obs, int index, object newValue) :462
void Observable__NewAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :474
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :468
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Scripting.Observable obs, int index, object newValue) [instance] :462
void Observable__NewAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Scripting.Observable obs, int index, object newValue) [static] :462
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Scripting::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/JSCallback.uno
// -----------------------------------------------------------------

// public static class JSCallback.NumberConverter :163
// {
static void JSCallback__NumberConverter_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[54] = ::g::Uno::Short_typeof();
    ::TYPES[55] = ::g::Uno::Int_typeof();
    ::TYPES[56] = ::g::Uno::Long_typeof();
    ::TYPES[57] = ::g::Uno::Float_typeof();
    ::TYPES[58] = ::g::Uno::Double_typeof();
    ::TYPES[33] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Convert<TValue>*/, type->MethodTypes[1]->U(0), NULL));
}

uClassType* JSCallback__NumberConverter_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.JSCallback.NumberConverter", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->fp_build_ = JSCallback__NumberConverter_build;
    return type;
}

// private static object Convert(double value, Uno.Type targetType) :228
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert(*value, targetType);
}

// private static object Convert(float value, Uno.Type targetType) :219
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert1(*value, targetType);
}

// private static object Convert(int value, Uno.Type targetType) :201
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert2(*value, targetType);
}

// private static object Convert(long value, Uno.Type targetType) :210
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert3(*value, targetType);
}

// private static object Convert(short value, Uno.Type targetType) :192
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert4(*value, targetType);
}

// public static object Convert(Uno.Type targetType, object value) :182
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval)
{
    *__retval = JSCallback__NumberConverter::Convert5(targetType, value);
}

// public static TValue Convert<TValue>(object value) :177
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval)
{
    return __retval.Store(__type->U(0), uUnboxAny(__type->U(0), JSCallback__NumberConverter::Convert5(__type->U(0), value))), void();
}

// public static bool TryConvert<TValue>(object value, TValue& convertedValue) :165
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Scripting.JSCallback.NumberConverter.Convert<TValue>*/),
    };
    uT ret1(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    convertedValue.Default(__type->U(0));

    try
    {
        {
            convertedValue.Store((JSCallback__NumberConverter__Convert6_fn(__types[0], value, &ret1), ret1));
            return *__retval = true, void();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception_ = __t.Exception;
    }

    return *__retval = false, void();
}

// private static object Convert(double value, Uno.Type targetType) [static] :228
uObject* JSCallback__NumberConverter::Convert(double value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*short*/]))
        return uBox<int16_t>(::TYPES[54/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*int*/]))
        return uBox<int>(::TYPES[55/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[56/*long*/]))
        return uBox<int64_t>(::TYPES[56/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[57/*float*/]))
        return uBox(::TYPES[57/*float*/], (float)value);

    return uBox(::TYPES[58/*double*/], value);
}

// private static object Convert(float value, Uno.Type targetType) [static] :219
uObject* JSCallback__NumberConverter::Convert1(float value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*short*/]))
        return uBox<int16_t>(::TYPES[54/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*int*/]))
        return uBox<int>(::TYPES[55/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[56/*long*/]))
        return uBox<int64_t>(::TYPES[56/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[58/*double*/]))
        return uBox(::TYPES[58/*double*/], (double)value);

    return uBox(::TYPES[57/*float*/], value);
}

// private static object Convert(int value, Uno.Type targetType) [static] :201
uObject* JSCallback__NumberConverter::Convert2(int value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*short*/]))
        return uBox<int16_t>(::TYPES[54/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[56/*long*/]))
        return uBox<int64_t>(::TYPES[56/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[57/*float*/]))
        return uBox(::TYPES[57/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[58/*double*/]))
        return uBox(::TYPES[58/*double*/], (double)value);

    return uBox<int>(::TYPES[55/*int*/], value);
}

// private static object Convert(long value, Uno.Type targetType) [static] :210
uObject* JSCallback__NumberConverter::Convert3(int64_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[54/*short*/]))
        return uBox<int16_t>(::TYPES[54/*short*/], (int16_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*int*/]))
        return uBox<int>(::TYPES[55/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[57/*float*/]))
        return uBox(::TYPES[57/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[58/*double*/]))
        return uBox(::TYPES[58/*double*/], (double)value);

    return uBox<int64_t>(::TYPES[56/*long*/], value);
}

// private static object Convert(short value, Uno.Type targetType) [static] :192
uObject* JSCallback__NumberConverter::Convert4(int16_t value, uType* targetType)
{
    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[55/*int*/]))
        return uBox<int>(::TYPES[55/*int*/], (int)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[56/*long*/]))
        return uBox<int64_t>(::TYPES[56/*long*/], (int64_t)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[57/*float*/]))
        return uBox(::TYPES[57/*float*/], (float)value);

    if (::g::Uno::Type::op_Equality(targetType, ::TYPES[58/*double*/]))
        return uBox(::TYPES[58/*double*/], (double)value);

    return uBox<int16_t>(::TYPES[54/*short*/], value);
}

// public static object Convert(Uno.Type targetType, object value) [static] :182
uObject* JSCallback__NumberConverter::Convert5(uType* targetType, uObject* value)
{
    if (uIs(value, ::TYPES[54/*short*/]))
        return JSCallback__NumberConverter::Convert4(uUnbox<int16_t>(::TYPES[54/*short*/], value), targetType);

    if (uIs(value, ::TYPES[55/*int*/]))
        return JSCallback__NumberConverter::Convert2(uUnbox<int>(::TYPES[55/*int*/], value), targetType);

    if (uIs(value, ::TYPES[56/*long*/]))
        return JSCallback__NumberConverter::Convert3(uUnbox<int64_t>(::TYPES[56/*long*/], value), targetType);

    if (uIs(value, ::TYPES[57/*float*/]))
        return JSCallback__NumberConverter::Convert1(uUnbox<float>(::TYPES[57/*float*/], value), targetType);

    if (uIs(value, ::TYPES[58/*double*/]))
        return JSCallback__NumberConverter::Convert(uUnbox<double>(::TYPES[58/*double*/], value), targetType);

    return value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public abstract class Object :32
// {
static void Object_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IObject_typeof(), offsetof(Object_type, interface0));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Fuse.Scripting.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// protected generated Object() :32
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// public override sealed bool Equals(object o) :42
void Object__Equals_fn(Object* __this, uObject* o, bool* __retval)
{
    Object* a = uAs<Object*>(o, Object_typeof());
    return *__retval = (a != NULL) && __this->Equals2(a), void();
}

// public override int GetHashCode() :48
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    int ret1;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret1), ret1), void();
}

// protected generated Object() [instance] :32
void Object::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObjectMirror.uno
// ------------------------------------------------------------------------------

// internal sealed class ObjectMirror :6
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[37] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::IMirror_typeof();
    ::TYPES[59] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::ValueMirror_typeof();
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(6/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(ObjectMirror_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ObjectMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[37/*Uno.Collections.Dictionary<string, object>*/], offsetof(ObjectMirror, _props), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ValueMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Scripting.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal ObjectMirror(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) :13
void ObjectMirror__ctor_2_fn(ObjectMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_2(mirror, obj);
}

// public bool ContainsKey(string key) :38
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :45
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :50
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// internal ObjectMirror New(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) :13
void ObjectMirror__New1_fn(uObject* mirror, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(mirror, obj);
}

// internal void Set(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) :18
void ObjectMirror__Set_fn(ObjectMirror* __this, uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    __this->Set(mirror, obj);
}

// public override sealed void Unsubscribe() :29
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret5;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret5), ret5);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                ::g::Fuse::Scripting::ValueMirror* d = uAs< ::g::Fuse::Scripting::ValueMirror*>(p.Value(::TYPES[13/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[7/*Fuse.Scripting.ValueMirror*/]);

                if (d != NULL)
                    uPtr(d)->Unsubscribe();
            }
        }
        {
            enum1.Dispose(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        }
                throw __t;
    }
}

// internal ObjectMirror(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) [instance] :13
void ObjectMirror::ctor_2(uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[37/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_1(obj);
    Set(mirror, obj);
}

// public bool ContainsKey(string key) [instance] :38
bool ObjectMirror::ContainsKey(uString* key)
{
    bool ret4;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret4), ret4);
}

// public object get_Item(string key) [instance] :45
uObject* ObjectMirror::Item(uString* key)
{
    uObject* ret6;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret6), ret6);
}

// public string[] get_Keys() [instance] :50
uArray* ObjectMirror::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[60/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// internal void Set(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) [instance] :18
void ObjectMirror::Set(uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    uPtr(_props)->Clear();
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, ::g::Fuse::Scripting::IMirror::Reflect(uInterface(uPtr(mirror), ::TYPES[6/*Fuse.Scripting.IMirror*/]), uPtr(obj)->Item(s)));
    }
}

// internal ObjectMirror New(Fuse.Scripting.IMirror mirror, Fuse.Scripting.Object obj) [static] :13
ObjectMirror* ObjectMirror::New1(uObject* mirror, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj3 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj3->ctor_2(mirror, obj);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// internal sealed class Observable :6
// {
static void Observable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(Observable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface2),
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(Observable_type, interface3));
    type->SetFields(1,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Observable, _values), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL), offsetof(Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _usingObservers), 0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(Observable, _worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Observable, _observeChange), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _isUnsubscribed), 0);
}

Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ListMirror_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Scripting.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Scripting::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Scripting::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface3.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__FuseReactiveIObservableArraySubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))::g::Fuse::Scripting::ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// internal Observable(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :229
void Observable__ctor_3_fn(Observable* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback)
{
    __this->ctor_3(worker, obj, *suppressCallback);
}

// internal static Fuse.Scripting.Observable Create(Fuse.Scripting.ThreadWorker worker) :237
void Observable__Create_fn(::g::Fuse::Scripting::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(worker);
}

// private Uno.IDisposable Fuse.Reactive.IObservableArray.Subscribe(Fuse.Reactive.IObserver observer) :217
void Observable__FuseReactiveIObservableArraySubscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    return *__retval = __this->Subscribe(observer), void();
}

// public bool get_IsUnsubscribed() :305
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :13
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :9
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :229
void Observable__New1_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, *suppressCallback);
}

// internal Fuse.Scripting.Object get_Object() :225
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :251
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void ObserversCleanup() :25
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber(Fuse.Scripting.Context context) :328
void Observable__RemoveSubscriber_fn(Observable* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->RemoveSubscriber(context);
}

// public void SetValue(int index, object value) :17
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :212
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// private int ToInt(object obj) :242
void Observable__ToInt_fn(Observable* __this, uObject* obj, int* __retval)
{
    *__retval = __this->ToInt(obj);
}

// public override sealed void Unsubscribe() :308
void Observable__Unsubscribe_fn(Observable* __this)
{
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :319
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [instance] :229
void Observable::ctor_3(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<object>*/]));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL)));
    ctor_2(obj);
    _worker = worker;
    _observable = obj;
    _observeChange = uPtr(uPtr(worker)->Context())->CallbackToFunction(uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(uString::Const("addSubscriber"), uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::g::Uno::Bool_typeof(), suppressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :305
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :225
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :251
uObject* Observable::ObserveChange(uArray* args)
{
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[64/*string*/]);
    int origin = ToInt(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, uString::Const("set")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Set::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), origin)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[7/*"clear"*/]))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Clear::New1(this, origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAll::New1(this, uCast< ::g::Fuse::Scripting::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::g::Fuse::Scripting::ArrayMirror_typeof()), origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("add")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Add::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeRange")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveRange::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), ToInt(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAll::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uCast< ::g::Fuse::Scripting::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)), ::g::Fuse::Scripting::ArrayMirror_typeof()))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("failed")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Failed::New1(this, uAs<uString*>(uPtr(args)->Strong<uObject*>(3), ::TYPES[64/*string*/]))));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Unhandled observable operation: "), op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :25
void Observable::ObserversCleanup()
{
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber(Fuse.Scripting.Context context) [instance] :328
void Observable::RemoveSubscriber(::g::Fuse::Scripting::Context* context)
{
    uPtr(_observable)->CallMethod(uString::Const("removeSubscriber"), uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :17
void Observable::SetValue(int index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :212
uObject* Observable::Subscribe(uObject* observer)
{
    return (uObject*)Observable__Subscription::New2(this, observer);
}

// private int ToInt(object obj) [instance] :242
int Observable::ToInt(uObject* obj)
{
    if (uIs(obj, ::TYPES[55/*int*/]))
        return uUnbox<int>(::TYPES[55/*int*/], obj);

    if (uIs(obj, ::TYPES[58/*double*/]))
        return (int)uUnbox<double>(::TYPES[58/*double*/], obj);

    return -1;
}

// private void UnsubscribeValues() [instance] :319
void Observable::UnsubscribeValues()
{
    uObject* ret3;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Scripting::ValueMirror* vm = uAs< ::g::Fuse::Scripting::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret3), ret3), ::TYPES[7/*Fuse.Scripting.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Scripting.Observable Create(Fuse.Scripting.ThreadWorker worker) [static] :237
Observable* Observable::Create(::g::Fuse::Scripting::ThreadWorker* worker)
{
    return Observable::New1(worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(worker)->Observable())->Call(uArray::New(::TYPES[16/*object[]*/], 0)), ::TYPES[21/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [static] :229
Observable* Observable::New1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_3(worker, obj, suppressCallback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObservableProperty.uno
// ------------------------------------------------------------------------------------

// internal class ObservableProperty :26
// {
static void ObservableProperty_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(ObservableProperty, _worker), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(ObservableProperty, _property), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(ObservableProperty, _obj), 0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(ObservableProperty, _observable), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(ObservableProperty, _subscription), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Scripting.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :95
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnClear() :77
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this)
{
    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject1(NULL, (uObject*)__this);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :107
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :103
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :83
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::g::Fuse::IArray_typeof())) == 1)
        __this->Set(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::g::Fuse::IArray_typeof()), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :87
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :99
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :91
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    __this->Set(newValue);
}

// internal Fuse.Scripting.Observable GetObservable() :43
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Scripting::Observable** __retval)
{
    *__retval = __this->GetObservable();
}

// public ObservableProperty New(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__New1_fn(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(w, obj, p);
}

// private void PushValue(object val) :145
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val)
{
    __this->PushValue(val);
}

// public void Reset() :61
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :112
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :54
void ObservableProperty__Subscribe_fn(ObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :119
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::TYPES[52/*Uno.Action`1*/]->MakeType(uObject_typeof(), NULL), (void*)ObservableProperty__PushValue_fn, __this), uPtr(__this->_property)->GetAsObject1())));
}

// public ObservableProperty(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :32
void ObservableProperty::ctor_(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _worker = w;
    _property = p;
}

// internal Fuse.Scripting.Observable GetObservable() [instance] :43
::g::Fuse::Scripting::Observable* ObservableProperty::GetObservable()
{
    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Scripting::Observable::Create(_worker);
        Subscribe();
    }

    return _observable;
}

// private void PushValue(object val) [instance] :145
void ObservableProperty::PushValue(uObject* val)
{
    if (val != NULL)
        ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(_subscription), ::g::Fuse::Reactive::ISubscription_typeof()), val);
    else
        ::g::Fuse::Reactive::ISubscription::ClearExclusive(uInterface(uPtr(_subscription), ::g::Fuse::Reactive::ISubscription_typeof()));
}

// public void Reset() [instance] :61
void ObservableProperty::Reset()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[14/*Uno.IDisposable*/]));
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :112
void ObservableProperty::Set(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &res, this))
        uPtr(_property)->SetAsObject1(res, (uObject*)this);
}

// private void Subscribe() [instance] :54
void ObservableProperty::Subscribe()
{
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    PushValue(uPtr(_property)->GetAsObject1());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Scripting.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :32
ObservableProperty* ObservableProperty::New1(::g::Fuse::Scripting::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeEventEmitterModule.uno
// -------------------------------------------------------------------------------

// private sealed class NativeEventEmitterModule.OnClosure :210
// {
static void NativeEventEmitterModule__OnClosure_build(uType* type)
{
    ::STRINGS[35] = uString::Const("on");
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _eventName), 0,
        ::g::Fuse::Scripting::Callback_typeof(), offsetof(NativeEventEmitterModule__OnClosure, _listener), 0);
}

uType* NativeEventEmitterModule__OnClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(NativeEventEmitterModule__OnClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativeEventEmitterModule.OnClosure", options);
    type->fp_build_ = NativeEventEmitterModule__OnClosure_build;
    return type;
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__ctor__fn(NativeEventEmitterModule__OnClosure* __this, uObject* eventName, uDelegate* listener)
{
    __this->ctor_(eventName, listener);
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) :215
void NativeEventEmitterModule__OnClosure__New1_fn(uObject* eventName, uDelegate* listener, NativeEventEmitterModule__OnClosure** __retval)
{
    *__retval = NativeEventEmitterModule__OnClosure::New1(eventName, listener);
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) :221
void NativeEventEmitterModule__OnClosure__On_fn(NativeEventEmitterModule__OnClosure* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    __this->On(c, o);
}

// public OnClosure(object eventName, Fuse.Scripting.Callback listener) [instance] :215
void NativeEventEmitterModule__OnClosure::ctor_(uObject* eventName, uDelegate* listener)
{
    _eventName = eventName;
    _listener = listener;
}

// public void On(Fuse.Scripting.Context c, Fuse.Scripting.Object o) [instance] :221
void NativeEventEmitterModule__OnClosure::On(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Object* o)
{
    uPtr(o)->CallMethod(::STRINGS[35/*"on"*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, (uObject*)_eventName, (uDelegate*)_listener));
}

// public OnClosure New(object eventName, Fuse.Scripting.Callback listener) [static] :215
NativeEventEmitterModule__OnClosure* NativeEventEmitterModule__OnClosure::New1(uObject* eventName, uDelegate* listener)
{
    NativeEventEmitterModule__OnClosure* obj1 = (NativeEventEmitterModule__OnClosure*)uNew(NativeEventEmitterModule__OnClosure_typeof());
    obj1->ctor_(eventName, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// public abstract class Observable.Operation :335
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(Observable__Operation, _observable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Operation, _isPerformed), 0);
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Scripting.Observable observable) :341
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Scripting.Observable get_Observable() :346
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Scripting::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :348
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :370
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Scripting.Observable observable) [instance] :341
void Observable__Operation::ctor_(::g::Fuse::Scripting::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Scripting.Observable get_Observable() [instance] :346
::g::Fuse::Scripting::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :348
void Observable__Operation::Perform()
{
    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    try
    {
        {
            uPtr(_observable)->_usingObservers = true;
            OnPerform((uObject*)uPtr(Observable())->_observers);
            uPtr(_observable)->ObserversCleanup();
        }
        {
            uPtr(_observable)->_usingObservers = false;
        }
    }

    catch (const uThrowable& __t)
    {
        {
            uPtr(_observable)->_usingObservers = false;
        }
                throw __t;
    }

    _isPerformed = true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// private sealed class NativePromise<T, TJSResult>.PromiseClosure :90
// {
static void NativePromise__PromiseClosure_build(uType* type)
{
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[61] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[52] = ::g::Uno::Action1_typeof();
    ::TYPES[62] = ::TYPES[52/*Uno.Action`1*/]->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(NativePromise__PromiseClosure, _c), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(0), NULL), offsetof(NativePromise__PromiseClosure, _promise), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(NativePromise__PromiseClosure, _resolve), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(NativePromise__PromiseClosure, _reject), 0,
        ::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(NativePromise__PromiseClosure, _converter), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Exception_typeof(), offsetof(NativePromise__PromiseClosure, _reason), 0);
}

uType* NativePromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(NativePromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.NativePromise`2.PromiseClosure", options);
    type->fp_build_ = NativePromise__PromiseClosure_build;
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :100
void NativePromise__PromiseClosure__ctor__fn(NativePromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    __this->ctor_(context, promise, converter);
}

// private void InternalReject() :142
void NativePromise__PromiseClosure__InternalReject_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalReject();
}

// private void InternalResolve() :127
void NativePromise__PromiseClosure__InternalResolve_fn(NativePromise__PromiseClosure* __this)
{
    __this->InternalResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) :100
void NativePromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter, NativePromise__PromiseClosure** __retval)
{
    *__retval = NativePromise__PromiseClosure::New1(__type, context, promise, converter);
}

// private void Reject(Uno.Exception reason) :135
void NativePromise__PromiseClosure__Reject_fn(NativePromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(T result) :120
void NativePromise__PromiseClosure__Resolve_fn(NativePromise__PromiseClosure* __this, void* result)
{
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_c)->Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalResolve_fn, __this));
}

// public object Run(object[] args) :107
void NativePromise__PromiseClosure__Run_fn(NativePromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [instance] :100
void NativePromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    _c = context;
    _promise = promise;
    _converter = converter;
}

// private void InternalReject() [instance] :142
void NativePromise__PromiseClosure::InternalReject()
{
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void InternalResolve() [instance] :127
void NativePromise__PromiseClosure::InternalResolve()
{
    uT ret2(__type->T(1), U_ALLOCA(__type->T(1)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(_converter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBoxPtr(__type->T(1), (uPtr(_converter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_c, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBoxPtr(__type->T(0), _result())));
}

// private void Reject(Uno.Exception reason) [instance] :135
void NativePromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_c)->Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)NativePromise__PromiseClosure__InternalReject_fn, this));
}

// public object Run(object[] args) [instance] :107
uObject* NativePromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<T>*/),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (uPtr(args)->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[28/*Fuse.Scripting.Function*/]);

    uPtr(_promise)->Then1(uDelegate::New(__types[0], (void*)NativePromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[62/*Uno.Action<Uno.Exception>*/], (void*)NativePromise__PromiseClosure__Reject_fn, this));
    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Uno.Threading.Future<T> promise, Fuse.Scripting.ResultConverter<T, TJSResult> converter) [static] :100
NativePromise__PromiseClosure* NativePromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, ::g::Uno::Threading::Future1* promise, uDelegate* converter)
{
    NativePromise__PromiseClosure* obj1 = (NativePromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, promise, converter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// private sealed class ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure :235
// {
static void ScriptPromise__PromiseClosure_build(uType* type)
{
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[52] = ::g::Uno::Action1_typeof();
    ::TYPES[62] = ::TYPES[52/*Uno.Action`1*/]->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[61] = ::g::Uno::Threading::IDispatcher_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    type->SetPrecalc(
        ::g::Uno::Action1_typeof()->MakeType(type->T(1), NULL));
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptPromise__PromiseClosure, _context), 0,
        ::g::Fuse::Scripting::ScriptPromise__ResultConverter_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(1), type->T(2), NULL), offsetof(ScriptPromise__PromiseClosure, _resultConverter), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(ScriptPromise__PromiseClosure, _resolve), 0,
        ::TYPES[28/*Fuse.Scripting.Function*/], offsetof(ScriptPromise__PromiseClosure, _reject), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(type->T(1), NULL), offsetof(ScriptPromise__PromiseClosure, _future), 0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Exception_typeof(), offsetof(ScriptPromise__PromiseClosure, _reason), 0);
}

uType* ScriptPromise__PromiseClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.GenericCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptPromise__PromiseClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptPromise`3.PromiseClosure", options);
    type->fp_build_ = ScriptPromise__PromiseClosure_build;
    return type;
}

// public PromiseClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) :240
void ScriptPromise__PromiseClosure__ctor__fn(ScriptPromise__PromiseClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    __this->ctor_(context, resultConverter);
}

// private void DispatchReject() :294
void ScriptPromise__PromiseClosure__DispatchReject_fn(ScriptPromise__PromiseClosure* __this)
{
    __this->DispatchReject();
}

// private void DispatchResolve() :286
void ScriptPromise__PromiseClosure__DispatchResolve_fn(ScriptPromise__PromiseClosure* __this)
{
    __this->DispatchResolve();
}

// public PromiseClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) :240
void ScriptPromise__PromiseClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter, ScriptPromise__PromiseClosure** __retval)
{
    *__retval = ScriptPromise__PromiseClosure::New1(__type, context, resultConverter);
}

// public void OnFutureReady(Uno.Threading.Future<TResult> future) :263
void ScriptPromise__PromiseClosure__OnFutureReady_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Threading::Future1* future)
{
    __this->OnFutureReady(future);
}

// private void Reject(Uno.Exception reason) :279
void ScriptPromise__PromiseClosure__Reject_fn(ScriptPromise__PromiseClosure* __this, ::g::Uno::Exception* reason)
{
    __this->Reject(reason);
}

// private void Resolve(TResult result) :271
void ScriptPromise__PromiseClosure__Resolve_fn(ScriptPromise__PromiseClosure* __this, void* result)
{
    __this->_result() = result;

    if (__this->_resolve != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(__this->_context)->Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ScriptPromise__PromiseClosure__DispatchResolve_fn, __this));
}

// public object Run(object[] args) :248
void ScriptPromise__PromiseClosure__Run_fn(ScriptPromise__PromiseClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Run(args);
}

// public PromiseClosure(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) [instance] :240
void ScriptPromise__PromiseClosure::ctor_(::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    _context = context;
    _resultConverter = resultConverter;
}

// private void DispatchReject() [instance] :294
void ScriptPromise__PromiseClosure::DispatchReject()
{
    uPtr(_reject)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, (uString*)uPtr(_reason)->Message()));
}

// private void DispatchResolve() [instance] :286
void ScriptPromise__PromiseClosure::DispatchResolve()
{
    uT ret2(__type->T(2), U_ALLOCA(__type->T(2)->ValueSize));

    if (::g::Uno::Delegate::op_Inequality(_resultConverter, NULL))
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBoxPtr(__type->T(2), (uPtr(_resultConverter)->Invoke(&ret2, 2, (::g::Fuse::Scripting::Context*)_context, (void*)_result()), ret2))));
    else
        uPtr(_resolve)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uBoxPtr(__type->T(1), _result())));
}

// public void OnFutureReady(Uno.Threading.Future<TResult> future) [instance] :263
void ScriptPromise__PromiseClosure::OnFutureReady(::g::Uno::Threading::Future1* future)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TResult>*/),
    };
    _future = future;

    if ((_resolve != NULL) || (_reject != NULL))
        uPtr(_future)->Then1(uDelegate::New(__types[0], (void*)ScriptPromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[62/*Uno.Action<Uno.Exception>*/], (void*)ScriptPromise__PromiseClosure__Reject_fn, this));
}

// private void Reject(Uno.Exception reason) [instance] :279
void ScriptPromise__PromiseClosure::Reject(::g::Uno::Exception* reason)
{
    _reason = reason;

    if (_reject != NULL)
        ::g::Uno::Threading::IDispatcher::Invoke(uInterface(uPtr(uPtr(_context)->Dispatcher()), ::TYPES[61/*Uno.Threading.IDispatcher*/]), uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ScriptPromise__PromiseClosure__DispatchReject_fn, this));
}

// public object Run(object[] args) [instance] :248
uObject* ScriptPromise__PromiseClosure::Run(uArray* args)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Action<TResult>*/),
    };

    if (uPtr(args)->Length() > 0)
        _resolve = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (uPtr(args)->Length() > 1)
        _reject = uAs< ::g::Fuse::Scripting::Function*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (_future != NULL)
        uPtr(_future)->Then1(uDelegate::New(__types[0], (void*)ScriptPromise__PromiseClosure__Resolve_fn, this), uDelegate::New(::TYPES[62/*Uno.Action<Uno.Exception>*/], (void*)ScriptPromise__PromiseClosure__Reject_fn, this));

    return NULL;
}

// public PromiseClosure New(Fuse.Scripting.Context context, Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult> resultConverter) [static] :240
ScriptPromise__PromiseClosure* ScriptPromise__PromiseClosure::New1(uType* __type, ::g::Fuse::Scripting::Context* context, uDelegate* resultConverter)
{
    ScriptPromise__PromiseClosure* obj1 = (ScriptPromise__PromiseClosure*)uNew(__type);
    obj1->ctor_(context, resultConverter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno
// ------------------------------------------------------------------------------------------

// private sealed class ThreadWorker.PropertyClosure :118
// {
static void ThreadWorker__PropertyClosure_build(uType* type)
{
    ::STRINGS[36] = uString::Const("this._raw_");
    ::STRINGS[37] = uString::Const("this._");
    ::STRINGS[38] = uString::Const(" (ScriptProperty)");
    ::STRINGS[39] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[40] = uString::Const("', ");
    ::STRINGS[41] = uString::Const("{");
    ::STRINGS[42] = uString::Const("get: function() { ");
    ::STRINGS[43] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[44] = uString::Const("if (");
    ::STRINGS[45] = uString::Const(" != obs) {");
    ::STRINGS[46] = uString::Const(" = obs;");
    ::STRINGS[47] = uString::Const(" = obs");
    ::STRINGS[48] = uString::Const(";");
    ::STRINGS[49] = uString::Const("}");
    ::STRINGS[50] = uString::Const("return ");
    ::STRINGS[51] = uString::Const("})");
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    ::TYPES[31] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[63] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(ThreadWorker__PropertyClosure, _worker), 0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(ThreadWorker__PropertyClosure, _p), 0);
}

uType* ThreadWorker__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ThreadWorker__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ThreadWorker.PropertyClosure", options);
    type->fp_build_ = ThreadWorker__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.ThreadWorker worker) :123
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    __this->ctor_(cl, p, worker);
}

// private object GetObservable(object[] args) :151
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(args);
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.ThreadWorker worker) :123
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval)
{
    *__retval = ThreadWorker__PropertyClosure::New1(cl, p, worker);
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.ThreadWorker worker) [instance] :123
void ThreadWorker__PropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    _worker = worker;
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[36/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[37/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[38/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[39/*"(function(c...*/], p->Name), ::STRINGS[40/*"', "*/]), ::STRINGS[41/*"{"*/]), ::STRINGS[42/*"get: functi...*/]), ::STRINGS[43/*"var obs = g...*/]), ::STRINGS[44/*"if ("*/]), rawField), ::STRINGS[45/*" != obs) {"*/]), rawField), ::STRINGS[46/*" = obs;"*/]), propField), ::STRINGS[47/*" = obs"*/]), p->Modifier), ::STRINGS[48/*";"*/]), ::STRINGS[49/*"}"*/]), ::STRINGS[50/*"return "*/]), propField), ::STRINGS[49/*"}"*/]), ::STRINGS[51/*"})"*/]), ::STRINGS[51/*"})"*/])), ::TYPES[28/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, cl, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(object[] args) [instance] :151
uObject* ThreadWorker__PropertyClosure::GetObservable(uArray* args)
{
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(::g::Fuse::Scripting::ThreadWorker::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[63/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Scripting::ClassInstance* ci = uPtr(_worker)->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Scripting.ThreadWorker worker) [static] :123
ThreadWorker__PropertyClosure* ThreadWorker__PropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    ThreadWorker__PropertyClosure* obj1 = (ThreadWorker__PropertyClosure*)uNew(ThreadWorker__PropertyClosure_typeof());
    obj1->ctor_(cl, p, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ObservableProperty.uno
// ------------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :128
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ObservableProperty__PushCapture, _push), 0,
        uObject_typeof(), offsetof(ObservableProperty__PushCapture, _arg), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<object> push, object arg) :133
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) :133
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run(Fuse.Scripting.Context context) :139
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Run(context);
}

// public PushCapture(Uno.Action<object> push, object arg) [instance] :133
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run(Fuse.Scripting.Context context) [instance] :139
void ObservableProperty__PushCapture::Run(::g::Fuse::Scripting::Context* context)
{
    uPtr(_push)->InvokeVoid(_arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) [static] :133
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.ScriptClass.uno
// ------------------------------------------------------------------------------------------

// private sealed class ThreadWorker.ReadonlyPropertyClosure :96
// {
static void ThreadWorker__ReadonlyPropertyClosure_build(uType* type)
{
    ::STRINGS[52] = uString::Const(" (ScriptReadonlyProperty)");
    ::STRINGS[53] = uString::Const("(function(cl,propValue){Object.defineProperty(cl.prototype,'");
    ::STRINGS[54] = uString::Const("',");
    ::STRINGS[41] = uString::Const("{");
    ::STRINGS[55] = uString::Const("value: propValue,");
    ::STRINGS[56] = uString::Const("writable: false,");
    ::STRINGS[57] = uString::Const("enumerable: true,");
    ::STRINGS[58] = uString::Const("configurable: false");
    ::STRINGS[49] = uString::Const("}");
    ::STRINGS[59] = uString::Const(");");
    ::STRINGS[51] = uString::Const("})");
    ::TYPES[28] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
}

uType* ThreadWorker__ReadonlyPropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadWorker__ReadonlyPropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ThreadWorker.ReadonlyPropertyClosure", options);
    type->fp_build_ = ThreadWorker__ReadonlyPropertyClosure_build;
    return type;
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Scripting.ThreadWorker worker) :98
void ThreadWorker__ReadonlyPropertyClosure__ctor__fn(ThreadWorker__ReadonlyPropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    __this->ctor_(cl, constant, worker);
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Scripting.ThreadWorker worker) :98
void ThreadWorker__ReadonlyPropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker, ThreadWorker__ReadonlyPropertyClosure** __retval)
{
    *__retval = ThreadWorker__ReadonlyPropertyClosure::New1(cl, constant, worker);
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Scripting.ThreadWorker worker) [instance] :98
void ThreadWorker__ReadonlyPropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(constant)->Name, ::STRINGS[52/*" (ScriptRea...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[53/*"(function(c...*/], uPtr(constant)->Name), ::STRINGS[54/*"',"*/]), ::STRINGS[41/*"{"*/]), ::STRINGS[55/*"value: prop...*/]), ::STRINGS[56/*"writable: f...*/]), ::STRINGS[57/*"enumerable:...*/]), ::STRINGS[58/*"configurabl...*/]), ::STRINGS[49/*"}"*/]), ::STRINGS[59/*");"*/]), ::STRINGS[51/*"})"*/])), ::TYPES[28/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, cl, (uObject*)worker->Unwrap(constant->Value)));
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Scripting.ThreadWorker worker) [static] :98
ThreadWorker__ReadonlyPropertyClosure* ThreadWorker__ReadonlyPropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Scripting::ThreadWorker* worker)
{
    ThreadWorker__ReadonlyPropertyClosure* obj1 = (ThreadWorker__ReadonlyPropertyClosure*)uNew(ThreadWorker__ReadonlyPropertyClosure_typeof());
    obj1->ctor_(cl, constant, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :539
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveAt, _index), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Scripting.Observable obs, int index) :543
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Scripting::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Scripting.Observable obs, int index) :543
void Observable__RemoveAt__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :548
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Scripting.Observable obs, int index) [instance] :543
void Observable__RemoveAt::ctor_1(::g::Fuse::Scripting::Observable* obs, int index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Scripting.Observable obs, int index) [static] :543
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Scripting::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :561
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _index), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _count), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Scripting.Observable obs, int index, int count) :566
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Scripting::Observable* obs, int* index, int* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Scripting.Observable obs, int index, int count) :566
void Observable__RemoveRange__New1_fn(::g::Fuse::Scripting::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :572
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;

    for (int i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Scripting.Observable obs, int index, int count) [instance] :566
void Observable__RemoveRange::ctor_1(::g::Fuse::Scripting::Observable* obs, int index, int count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Scripting.Observable obs, int index, int count) [static] :566
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Scripting::Observable* obs, int index, int count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Subscription.ReplaceAllExclusiveOperation :129
// {
static void Observable__Subscription__ReplaceAllExclusiveOperation_build(uType* type)
{
    ::STRINGS[60] = uString::Const("replaceAllWithOrigin");
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Object), 0,
        ::TYPES[16/*object[]*/], offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, NewValues), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__ReplaceAllExclusiveOperation, Origin), 0);
}

uType* Observable__Subscription__ReplaceAllExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Subscription__ReplaceAllExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Observable.Subscription.ReplaceAllExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__ReplaceAllExclusiveOperation_build;
    return type;
}

// public ReplaceAllExclusiveOperation(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) :131
void Observable__Subscription__ReplaceAllExclusiveOperation__ctor__fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int* origin)
{
    __this->ctor_(worker, obj, newValues, *origin);
}

// public ReplaceAllExclusiveOperation New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) :131
void Observable__Subscription__ReplaceAllExclusiveOperation__New1_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int* origin, Observable__Subscription__ReplaceAllExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__ReplaceAllExclusiveOperation::New1(worker, obj, newValues, *origin);
}

// public void Perform(Fuse.Scripting.Context context) :145
void Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn(Observable__Subscription__ReplaceAllExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public ReplaceAllExclusiveOperation(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) [instance] :131
void Observable__Subscription__ReplaceAllExclusiveOperation::ctor_(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int origin)
{
    Worker = worker;
    Object = obj;
    NewValues = newValues;
    Origin = origin;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :145
void Observable__Subscription__ReplaceAllExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    for (int i = 0; i < uPtr(NewValues)->Length(); i++)
        uPtr(NewValues)->Strong<uObject*>(i) = uPtr(Worker)->Unwrap(uPtr(NewValues)->Strong<uObject*>(i));

    uPtr(Object)->CallMethod(::STRINGS[60/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, (::g::Fuse::Scripting::Array*)uPtr(uPtr(Worker)->Context())->NewArray(NewValues), uBox<int>(::TYPES[55/*int*/], Origin)));
}

// public ReplaceAllExclusiveOperation New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object[] newValues, int origin) [static] :131
Observable__Subscription__ReplaceAllExclusiveOperation* Observable__Subscription__ReplaceAllExclusiveOperation::New1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uArray* newValues, int origin)
{
    Observable__Subscription__ReplaceAllExclusiveOperation* obj1 = (Observable__Subscription__ReplaceAllExclusiveOperation*)uNew(Observable__Subscription__ReplaceAllExclusiveOperation_typeof());
    obj1->ctor_(worker, obj, newValues, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptModule.Require.uno
// ---------------------------------------------------------------------------

// private sealed class ScriptModule.RequireContext :14
// {
static void ScriptModule__RequireContext_build(uType* type)
{
    ::STRINGS[61] = uString::Const("require(): accepts exactly one argument, ");
    ::STRINGS[62] = uString::Const(" provided");
    ::STRINGS[63] = uString::Const("require(): argument must be a string");
    ::STRINGS[64] = uString::Const("ux:");
    ::STRINGS[65] = uString::Const("require(): unable to resolve ux: prefixes: ");
    ::STRINGS[66] = uString::Const("require(): ux name not found: ");
    ::STRINGS[67] = uString::Const("require(): module not found: ");
    ::STRINGS[68] = uString::Const("JavaScript error in ");
    ::STRINGS[69] = uString::Const(" was fixed!");
    ::STRINGS[70] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptModule.Require.uno");
    ::STRINGS[71] = uString::Const("Require");
    ::STRINGS[72] = uString::Const(" line ");
    ::STRINGS[73] = uString::Const(". ");
    ::STRINGS[28] = uString::Const("exports");
    ::TYPES[64] = ::g::Uno::String_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Scripting::ScriptModule_typeof());
    type->SetFields(0,
        ::g::Fuse::Scripting::Context_typeof(), offsetof(ScriptModule__RequireContext, _c), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(ScriptModule__RequireContext, _dependant), 0,
        ::g::Fuse::Scripting::ScriptModule_typeof(), offsetof(ScriptModule__RequireContext, _m), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[64/*string*/], uObject_typeof(), NULL), offsetof(ScriptModule__RequireContext, _rt), 0,
        ::TYPES[64/*string*/], (uintptr_t)&ScriptModule__RequireContext::_lastErrorPath_, uFieldFlagsStatic);
}

uType* ScriptModule__RequireContext_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ScriptModule__RequireContext);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptModule.RequireContext", options);
    type->fp_build_ = ScriptModule__RequireContext_build;
    return type;
}

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) :21
void ScriptModule__RequireContext__ctor__fn(ScriptModule__RequireContext* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    __this->ctor_(c, m, dependant, rt);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) :21
void ScriptModule__RequireContext__New1_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt, ScriptModule__RequireContext** __retval)
{
    *__retval = ScriptModule__RequireContext::New1(c, m, dependant, rt);
}

// public object Require(object[] args) :29
void ScriptModule__RequireContext__Require_fn(ScriptModule__RequireContext* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Require(args);
}

// public object Require(string id) :41
void ScriptModule__RequireContext__Require1_fn(ScriptModule__RequireContext* __this, uString* id, uObject** __retval)
{
    *__retval = __this->Require1(id);
}

uSStrong<uString*> ScriptModule__RequireContext::_lastErrorPath_;

// public RequireContext(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) [instance] :21
void ScriptModule__RequireContext::ctor_(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    _c = c;
    _m = m;
    _dependant = dependant;
    _rt = rt;
}

// public object Require(object[] args) [instance] :29
uObject* ScriptModule__RequireContext::Require(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[61/*"require(): ...*/], uBox<int>(::TYPES[55/*int*/], uPtr(args)->Length())), ::STRINGS[62/*" provided"*/])));

    uString* id = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[64/*string*/]);

    if (::g::Uno::String::op_Equality(id, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[63/*"require(): ...*/]));

    return Require1(id);
}

// public object Require(string id) [instance] :41
uObject* ScriptModule__RequireContext::Require1(uString* id)
{
    bool ret2;
    bool isFile;
    uString* path = uPtr(_m)->ComputePath(id, &isFile);
    ::g::Fuse::Scripting::ModuleResult* module = uPtr(_c)->TryGetGlobalModuleResult(path);

    if (module == NULL)
    {
        uString* uxPrefix = ::STRINGS[64/*"ux:"*/];

        if (::g::Uno::String::StartsWith(uPtr(id), ::STRINGS[64/*"ux:"*/]))
        {
            if (_rt == NULL)
                U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[65/*"require(): ...*/], id)));

            uObject* res;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_rt), ::g::Uno::String::Substring(uPtr(id), uPtr<uString*>(::STRINGS[64/*"ux:"*/])->Length()), (void**)(&res), &ret2), ret2))
                return res;

            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[66/*"require(): ...*/], id)));
        }

        ::g::Fuse::Scripting::Module* mod = uPtr(_m)->TryResolve(path, isFile);

        if (mod == NULL)
            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::STRINGS[67/*"require(): ...*/], id)));

        module = uPtr(mod)->Evaluate1(_c, path);
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

        if (module->Error() == NULL)
        {
            if (::g::Uno::String::op_Equality(ScriptModule__RequireContext::_lastErrorPath_, path))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[68/*"JavaScript ...*/], path), ::STRINGS[69/*" was fixed!"*/]), this, ::STRINGS[70/*"/usr/local/...*/], 73, ::STRINGS[71/*"Require"*/]);
                ScriptModule__RequireContext::_lastErrorPath_ = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* e = uPtr(module)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(e)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_))
            {
                ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[68/*"JavaScript ...*/], path), ::STRINGS[72/*" line "*/]), uBox<int>(::TYPES[55/*int*/], uPtr(e)->LineNumber())), ::STRINGS[73/*". "*/]), uPtr(e)->ErrorMessage()), this, ::STRINGS[70/*"/usr/local/...*/], 83, ::STRINGS[71/*"Require"*/], NULL);
                ScriptModule__RequireContext::_lastErrorPath_ = path;
            }

            U_THROW(::g::Fuse::Scripting::Error::New4(::g::Uno::String::op_Addition2(::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_, id)));
        }
    }
    else
        uPtr(module)->AddDependency(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)::g::Fuse::Scripting::ModuleResult__Invalidate_fn, uPtr(_dependant)));

    return uPtr(uPtr(module)->Object)->Item(::STRINGS[28/*"exports"*/]);
}

// public RequireContext New(Fuse.Scripting.Context c, Fuse.Scripting.ScriptModule m, Fuse.Scripting.ModuleResult dependant, Uno.Collections.Dictionary<string, object> rt) [static] :21
ScriptModule__RequireContext* ScriptModule__RequireContext::New1(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ScriptModule* m, ::g::Fuse::Scripting::ModuleResult* dependant, ::g::Uno::Collections::Dictionary* rt)
{
    ScriptModule__RequireContext* obj1 = (ScriptModule__RequireContext*)uNew(ScriptModule__RequireContext_typeof());
    obj1->ctor_(c, m, dependant, rt);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// public delegate TJSResult ResultConverter<T, TJSResult>(Fuse.Scripting.Context context, T result) :8
uDelegateType* ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public delegate TJSResult ScriptPromise<TSelf, TResult, TJSResult>.ResultConverter<TResult, TJSResult>(Fuse.Scripting.Context context, TResult result) :152
uDelegateType* ScriptPromise__ResultConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ScriptPromise`3.ResultConverter`2", 2, 5);
    type->SetSignature(type->T(4),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativePromise.uno
// --------------------------------------------------------------------

// public delegate T ResultFactory<T>(object[] args) :6
uDelegateType* ResultFactory_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ResultFactory`1", 1, 1);
    type->SetSignature(type->T(0),
        uObject_typeof()->Array());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/RootableScriptModule.uno
// --------------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :10
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[74] = uString::Const(", ");
    ::TYPES[59] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(RootableScriptModule, _worker), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(RootableScriptModule, _names), 0,
        ::g::Fuse::Scripting::ClassInstance_typeof(), offsetof(RootableScriptModule, _classInstance), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(RootableScriptModule, Dependencies), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Scripting.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->fp_GenerateRequireTable = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Uno::Collections::Dictionary**))RootableScriptModule__GenerateRequireTable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Scripting.ThreadWorker worker, Uno.UX.NameTable names) :16
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :54
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :28
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :22
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :41
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret3), ret3);
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Dependencies), &ret4), ret4);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > dep = enum1.Current(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
                argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[74/*", "*/], dep.Key(::TYPES[13/*Uno.Collections.KeyValuePair<string, object>*/])));
                ::g::Uno::Collections::List__Add_fn(uPtr(args), dep.Value(::TYPES[13/*Uno.Collections.KeyValuePair<string, object>*/]));
            }
        }
        {
            enum1.Dispose(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[59/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        }
                throw __t;
    }

    return *__retval = argsString, void();
}

// protected override sealed Uno.Collections.Dictionary<string, object> GenerateRequireTable(Fuse.Scripting.Context c) :36
void RootableScriptModule__GenerateRequireTable_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval)
{
    return *__retval = __this->Dependencies, void();
}

// public RootableScriptModule New(Fuse.Scripting.ThreadWorker worker, Uno.UX.NameTable names) :16
void RootableScriptModule__New2_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Scripting.ThreadWorker worker, Uno.UX.NameTable names) [instance] :16
void RootableScriptModule::ctor_2(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :28
void RootableScriptModule::EnsureClassInstanceRooted()
{
    if (_classInstance == NULL)
        _classInstance = uPtr(_worker)->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Scripting.ThreadWorker worker, Uno.UX.NameTable names) [static] :16
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj2 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj2->ctor_2(worker, names);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptClass :301
// {
// static generated ScriptClass() :301
static void ScriptClass__cctor__fn(uType* __type)
{
    ScriptClass::_unoTypeToScriptClass_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[65/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/]));
}

static void ScriptClass_build(uType* type)
{
    ::TYPES[65] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), type, NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(ScriptClass, _unoType), 0,
        ::g::Fuse::Scripting::ScriptMember_typeof()->Array(), offsetof(ScriptClass, _members), 0,
        ::TYPES[65/*Uno.Collections.Dictionary<Uno.Type, Fuse.Scripting.ScriptClass>*/], (uintptr_t)&ScriptClass::_unoTypeToScriptClass_, uFieldFlagsStatic);
}

uType* ScriptClass_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScriptClass);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptClass", options);
    type->fp_build_ = ScriptClass_build;
    type->fp_cctor_ = ScriptClass__cctor__fn;
    return type;
}

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__ctor__fn(ScriptClass* __this, uType* unoType, uArray* members)
{
    __this->ctor_(unoType, members);
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) :313
void ScriptClass__Get_fn(uType* t, ScriptClass** __retval)
{
    *__retval = ScriptClass::Get(t);
}

// public Fuse.Scripting.ScriptMember[] get_Members() :328
void ScriptClass__get_Members_fn(ScriptClass* __this, uArray** __retval)
{
    *__retval = __this->Members();
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :330
void ScriptClass__New1_fn(uType* unoType, uArray* members, ScriptClass** __retval)
{
    *__retval = ScriptClass::New1(unoType, members);
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) :336
void ScriptClass__Register_fn(uType* unoType, uArray* members)
{
    ScriptClass::Register(unoType, members);
}

// public Fuse.Scripting.ScriptClass get_SuperType() :307
void ScriptClass__get_SuperType_fn(ScriptClass* __this, ScriptClass** __retval)
{
    *__retval = __this->SuperType();
}

// public Uno.Type get_Type() :304
void ScriptClass__get_Type_fn(ScriptClass* __this, uType** __retval)
{
    *__retval = __this->Type();
}

uSStrong< ::g::Uno::Collections::Dictionary*> ScriptClass::_unoTypeToScriptClass_;

// private ScriptClass(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [instance] :330
void ScriptClass::ctor_(uType* unoType, uArray* members)
{
    _unoType = unoType;
    _members = members;
}

// public Fuse.Scripting.ScriptMember[] get_Members() [instance] :328
uArray* ScriptClass::Members()
{
    return _members;
}

// public Fuse.Scripting.ScriptClass get_SuperType() [instance] :307
ScriptClass* ScriptClass::SuperType()
{
    return ScriptClass::Get(::g::Uno::Type::BaseType(uPtr(_unoType)));
}

// public Uno.Type get_Type() [instance] :304
uType* ScriptClass::Type()
{
    return _unoType;
}

// public static Fuse.Scripting.ScriptClass Get(Uno.Type t) [static] :313
ScriptClass* ScriptClass::Get(uType* t)
{
    bool ret2;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        ScriptClass* sc;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ScriptClass::_unoTypeToScriptClass_), t, (void**)(&sc), &ret2), ret2))
            return sc;

        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    return NULL;
}

// private ScriptClass New(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :330
ScriptClass* ScriptClass::New1(uType* unoType, uArray* members)
{
    ScriptClass* obj1 = (ScriptClass*)uNew(ScriptClass_typeof());
    obj1->ctor_(unoType, members);
    return obj1;
}

// public static void Register(Uno.Type unoType, Fuse.Scripting.ScriptMember[] members) [static] :336
void ScriptClass::Register(uType* unoType, uArray* members)
{
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ScriptClass::_unoTypeToScriptClass_), unoType, ScriptClass::New1(unoType, members));
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptException.uno
// ----------------------------------------------------------------------

// public sealed class ScriptException :4
// {
static void ScriptException_build(uType* type)
{
    ::STRINGS[75] = uString::Const("Name: ");
    ::STRINGS[76] = uString::Const("Error message: ");
    ::STRINGS[77] = uString::Const("File name: ");
    ::STRINGS[78] = uString::Const("Line number: ");
    ::STRINGS[79] = uString::Const("Source line: ");
    ::STRINGS[80] = uString::Const("JS stack trace: ");
    ::TYPES[55] = ::g::Uno::Int_typeof();
    type->SetFields(4,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _ErrorMessage), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _FileName), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _JSStackTrace), 0,
        ::TYPES[55/*int*/], offsetof(ScriptException, _LineNumber), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _Name), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptException, _SourceLine), 0);
}

::g::Uno::Exception_type* ScriptException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(ScriptException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Fuse.Scripting.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    type->fp_get_Message = (void(*)(::g::Uno::Exception*, uString**))ScriptException__get_Message_fn;
    return type;
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :13
void ScriptException__ctor_3_fn(ScriptException* __this, uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace)
{
    __this->ctor_3(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_ErrorMessage() :7
void ScriptException__get_ErrorMessage_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->ErrorMessage();
}

// private generated void set_ErrorMessage(string value) :7
void ScriptException__set_ErrorMessage_fn(ScriptException* __this, uString* value)
{
    __this->ErrorMessage(value);
}

// public generated string get_FileName() :8
void ScriptException__get_FileName_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// private generated void set_FileName(string value) :8
void ScriptException__set_FileName_fn(ScriptException* __this, uString* value)
{
    __this->FileName(value);
}

// public generated string get_JSStackTrace() :11
void ScriptException__get_JSStackTrace_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->JSStackTrace();
}

// private generated void set_JSStackTrace(string value) :11
void ScriptException__set_JSStackTrace_fn(ScriptException* __this, uString* value)
{
    __this->JSStackTrace(value);
}

// public generated int get_LineNumber() :9
void ScriptException__get_LineNumber_fn(ScriptException* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// private generated void set_LineNumber(int value) :9
void ScriptException__set_LineNumber_fn(ScriptException* __this, int* value)
{
    __this->LineNumber(*value);
}

// public override sealed string get_Message() :31
void ScriptException__get_Message_fn(ScriptException* __this, uString** __retval)
{
    ::g::Uno::Text::StringBuilder* stringBuilder = ::g::Uno::Text::StringBuilder::New1();

    if (!::g::Uno::String::IsNullOrEmpty(__this->Name()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[75/*"Name: "*/]);
        stringBuilder->AppendLine(__this->Name());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->ErrorMessage()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[76/*"Error messa...*/]);
        stringBuilder->AppendLine(__this->ErrorMessage());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->FileName()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[77/*"File name: "*/]);
        stringBuilder->AppendLine(__this->FileName());
    }

    if (__this->LineNumber() >= 0)
    {
        uPtr(stringBuilder)->Append2(::STRINGS[78/*"Line number: "*/]);
        stringBuilder->AppendLine(::g::Uno::Int::ToString(__this->LineNumber(), ::TYPES[55/*int*/]));
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->SourceLine()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[79/*"Source line: "*/]);
        stringBuilder->AppendLine(__this->SourceLine());
    }

    if (!::g::Uno::String::IsNullOrEmpty(__this->JSStackTrace()))
    {
        uPtr(stringBuilder)->Append2(::STRINGS[80/*"JS stack tr...*/]);
        stringBuilder->AppendLine(__this->JSStackTrace());
    }

    return *__retval = stringBuilder->ToString(), void();
}

// public generated string get_Name() :6
void ScriptException__get_Name_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :6
void ScriptException__set_Name_fn(ScriptException* __this, uString* value)
{
    __this->Name(value);
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) :13
void ScriptException__New4_fn(uString* name, uString* errorMessage, uString* fileName, int* lineNumber, uString* sourceLine, uString* stackTrace, ScriptException** __retval)
{
    *__retval = ScriptException::New4(name, errorMessage, fileName, *lineNumber, sourceLine, stackTrace);
}

// public generated string get_SourceLine() :10
void ScriptException__get_SourceLine_fn(ScriptException* __this, uString** __retval)
{
    *__retval = __this->SourceLine();
}

// private generated void set_SourceLine(string value) :10
void ScriptException__set_SourceLine_fn(ScriptException* __this, uString* value)
{
    __this->SourceLine(value);
}

// public ScriptException(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [instance] :13
void ScriptException::ctor_3(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ctor_();
    Name(name);
    ErrorMessage(errorMessage);
    FileName(fileName);
    LineNumber(lineNumber);
    SourceLine(sourceLine);
    JSStackTrace(stackTrace);
}

// public generated string get_ErrorMessage() [instance] :7
uString* ScriptException::ErrorMessage()
{
    return _ErrorMessage;
}

// private generated void set_ErrorMessage(string value) [instance] :7
void ScriptException::ErrorMessage(uString* value)
{
    _ErrorMessage = value;
}

// public generated string get_FileName() [instance] :8
uString* ScriptException::FileName()
{
    return _FileName;
}

// private generated void set_FileName(string value) [instance] :8
void ScriptException::FileName(uString* value)
{
    _FileName = value;
}

// public generated string get_JSStackTrace() [instance] :11
uString* ScriptException::JSStackTrace()
{
    return _JSStackTrace;
}

// private generated void set_JSStackTrace(string value) [instance] :11
void ScriptException::JSStackTrace(uString* value)
{
    _JSStackTrace = value;
}

// public generated int get_LineNumber() [instance] :9
int ScriptException::LineNumber()
{
    return _LineNumber;
}

// private generated void set_LineNumber(int value) [instance] :9
void ScriptException::LineNumber(int value)
{
    _LineNumber = value;
}

// public generated string get_Name() [instance] :6
uString* ScriptException::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :6
void ScriptException::Name(uString* value)
{
    _Name = value;
}

// public generated string get_SourceLine() [instance] :10
uString* ScriptException::SourceLine()
{
    return _SourceLine;
}

// private generated void set_SourceLine(string value) [instance] :10
void ScriptException::SourceLine(uString* value)
{
    _SourceLine = value;
}

// public ScriptException New(string name, string errorMessage, string fileName, int lineNumber, string sourceLine, string stackTrace) [static] :13
ScriptException* ScriptException::New4(uString* name, uString* errorMessage, uString* fileName, int lineNumber, uString* sourceLine, uString* stackTrace)
{
    ScriptException* obj1 = (ScriptException*)uNew(ScriptException_typeof());
    obj1->ctor_3(name, errorMessage, fileName, lineNumber, sourceLine, stackTrace);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMember :15
// {
static void ScriptMember_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ScriptMember, Name), 0);
}

uType* ScriptMember_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ScriptMember);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptMember", options);
    type->fp_build_ = ScriptMember_build;
    return type;
}

// protected ScriptMember(string name) :19
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name)
{
    __this->ctor_(name);
}

// protected ScriptMember(string name) [instance] :19
void ScriptMember::ctor_(uString* name)
{
    Name = name;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptMethod :59
// {
static void ScriptMethod_build(uType* type)
{
    type->SetFields(1,
        ::g::Fuse::Scripting::ExecutionThread_typeof(), offsetof(ScriptMethod, Thread), 0);
}

ScriptMethod_type* ScriptMethod_typeof()
{
    static uSStrong<ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptMethod);
    options.TypeSize = sizeof(ScriptMethod_type);
    type = (ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod", options);
    type->fp_build_ = ScriptMethod_build;
    return type;
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) :63
void ScriptMethod__ctor_1_fn(ScriptMethod* __this, uString* name, int* thread)
{
    __this->ctor_1(name, *thread);
}

// protected ScriptMethod(string name, Fuse.Scripting.ExecutionThread thread) [instance] :63
void ScriptMethod::ctor_1(uString* name, int thread)
{
    ctor_(name);
    Thread = thread;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethod<T> :86
// {
static void ScriptMethod1_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetPrecalc(
        ScriptMethod1__CallClosure_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(2,
        ::g::Uno::Func3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), uObject_typeof(), NULL), offsetof(ScriptMethod1, _method), 0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type->T(0), uObject_typeof()->Array(), NULL), offsetof(ScriptMethod1, _voidMethod), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ScriptMethod1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethod`1", options);
    type->fp_build_ = ScriptMethod1_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethod1__Call_fn;
    return type;
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_2(name, method, *thread);
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__ctor_3_fn(ScriptMethod1* __this, uString* name, uDelegate* method, int* thread)
{
    __this->ctor_3(name, method, *thread);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :101
void ScriptMethod1__Call_fn(ScriptMethod1* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Scripting.ScriptMethod<T>.CallClosure*/),
    };

    if (__this->Thread == 2)
    {
        if (::g::Uno::Delegate::op_Equality(__this->_voidMethod, NULL))
        {
            ::g::Fuse::Diagnostics::InternalError(uString::Const("Cannot call a non-void method asynchronously"), __this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno"), 107, uString::Const("Call"));
            return *__retval = NULL, void();
        }

        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ScriptMethod1__CallClosure__Run_fn, ScriptMethod1__CallClosure::New1(__types[0], __this->_voidMethod, c, obj, args)));
        return *__retval = NULL, void();
    }

    if (::g::Uno::Delegate::op_Inequality(__this->_voidMethod, NULL))
    {
        uPtr(__this->_voidMethod)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args);
        return *__retval = NULL, void();
    }
    else
        return *__retval = uPtr(__this->_method)->Invoke(3, c, (void*)uUnboxAny(__this->__type->T(0), obj), args), void();
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) :96
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New1(__type, name, method, *thread);
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) :91
void ScriptMethod1__New2_fn(uType* __type, uString* name, uDelegate* method, int* thread, ScriptMethod1** __retval)
{
    *__retval = ScriptMethod1::New2(__type, name, method, *thread);
}

// public ScriptMethod(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [instance] :96
void ScriptMethod1::ctor_2(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _voidMethod = method;
}

// public ScriptMethod(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [instance] :91
void ScriptMethod1::ctor_3(uString* name, uDelegate* method, int thread)
{
    ctor_1(name, thread);
    _method = method;
}

// public ScriptMethod New(string name, Uno.Action<Fuse.Scripting.Context, T, object[]> method, Fuse.Scripting.ExecutionThread thread) [static] :96
ScriptMethod1* ScriptMethod1::New1(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj2 = (ScriptMethod1*)uNew(__type);
    obj2->ctor_2(name, method, thread);
    return obj2;
}

// public ScriptMethod New(string name, Uno.Func<Fuse.Scripting.Context, T, object[], object> method, Fuse.Scripting.ExecutionThread thread) [static] :91
ScriptMethod1* ScriptMethod1::New2(uType* __type, uString* name, uDelegate* method, int thread)
{
    ScriptMethod1* obj1 = (ScriptMethod1*)uNew(__type);
    obj1->ctor_3(name, method, thread);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptMethodInline :71
// {
static void ScriptMethodInline_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(ScriptMethodInline, Code), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ScriptMethodInline);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptMethodInline", options);
    type->fp_build_ = ScriptMethodInline_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptMethodInline__Call_fn;
    return type;
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__ctor_2_fn(ScriptMethodInline* __this, uString* name, int* thread, uString* code)
{
    __this->ctor_2(name, *thread, code);
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :80
void ScriptMethodInline__Call_fn(ScriptMethodInline* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New1());
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) :75
void ScriptMethodInline__New1_fn(uString* name, int* thread, uString* code, ScriptMethodInline** __retval)
{
    *__retval = ScriptMethodInline::New1(name, *thread, code);
}

// public ScriptMethodInline(string name, Fuse.Scripting.ExecutionThread thread, string code) [instance] :75
void ScriptMethodInline::ctor_2(uString* name, int thread, uString* code)
{
    ctor_1(name, thread);
    Code = code;
}

// public ScriptMethodInline New(string name, Fuse.Scripting.ExecutionThread thread, string code) [static] :75
ScriptMethodInline* ScriptMethodInline::New1(uString* name, int thread, uString* code)
{
    ScriptMethodInline* obj1 = (ScriptMethodInline*)uNew(ScriptMethodInline_typeof());
    obj1->ctor_2(name, thread, code);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptModule.Evaluate.uno
// ----------------------------------------------------------------------------

// public partial class ScriptModule :10
// {
// static generated ScriptModule() :10
static void ScriptModule__cctor__fn(uType* __type)
{
    ScriptModule::ModuleContainsAnErrorMessage_ = uString::Const("require(): module contains an error: ");
}

static void ScriptModule_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScriptModule_type, interface0));
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ScriptModule, _file), 0,
        ::g::Uno::IO::Bundle_typeof(), offsetof(ScriptModule, _bundle), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _code), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _fileName), 0,
        ::g::Uno::Int_typeof(), offsetof(ScriptModule, _lineNumberOffset), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _Postamble), 0,
        ::g::Uno::String_typeof(), offsetof(ScriptModule, _Preamble), 0,
        ::g::Uno::String_typeof(), (uintptr_t)&ScriptModule::ModuleContainsAnErrorMessage_, uFieldFlagsStatic);
}

ScriptModule_type* ScriptModule_typeof()
{
    static uSStrong<ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Module_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ScriptModule);
    options.TypeSize = sizeof(ScriptModule_type);
    type = (ScriptModule_type*)uClassType::New("Fuse.Scripting.ScriptModule", options);
    type->fp_build_ = ScriptModule_build;
    type->fp_cctor_ = ScriptModule__cctor__fn;
    type->fp_CallModuleFunc = ScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))ScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = ScriptModule__GenerateArgs_fn;
    type->fp_GenerateRequireTable = ScriptModule__GenerateRequireTable_fn;
    type->fp_GetFile = (void(*)(::g::Fuse::Scripting::Module*, ::g::Uno::UX::FileSource**))ScriptModule__GetFile_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public generated ScriptModule() :10
void ScriptModule__ctor_1_fn(ScriptModule* __this)
{
    __this->ctor_1();
}

// private bool Acceptor(object obj) :190
void ScriptModule__Acceptor_fn(ScriptModule* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// public Uno.IO.Bundle get_Bundle() :32
void ScriptModule__get_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle** __retval)
{
    *__retval = __this->Bundle();
}

// public void set_Bundle(Uno.IO.Bundle value) :37
void ScriptModule__set_Bundle_fn(ScriptModule* __this, ::g::Uno::IO::Bundle* value)
{
    __this->Bundle(value);
}

// protected virtual void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :78
void ScriptModule__CallModuleFunc_fn(ScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(moduleFunc)->Call(args);
}

// public string get_Code() :49
void ScriptModule__get_Code_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :54
void ScriptModule__set_Code_fn(ScriptModule* __this, uString* value)
{
    __this->Code(value);
}

// private string ComputePath(string moduleId, bool& isFile) :121
void ScriptModule__ComputePath_fn(ScriptModule* __this, uString* moduleId, bool* isFile, uString** __retval)
{
    *__retval = __this->ComputePath(moduleId, isFile);
}

// private static string ComputePath(string sourcePath, string moduleId) :148
void ScriptModule__ComputePath1_fn(uString* sourcePath, uString* moduleId, uString** __retval)
{
    *__retval = ScriptModule::ComputePath1(sourcePath, moduleId);
}

// public override void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :36
void ScriptModule__Evaluate_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    int offset = ::g::Uno::Math::Max8(0, __this->LineNumberOffset() - (1 + __this->GetPreambleNewlines()));
    uArray* newlines = uArray::New(::g::Uno::Char_typeof()->Array(), offset);

    for (int i = 0; i < offset; ++i)
        uPtr(newlines)->Item<uChar>(i) = 10;

    ::g::Uno::Collections::List* args = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[5/*Uno.Collections.List<object>*/]);
    uString* wrappedCode = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("(function("), __this->GenerateArgs(c, result, args)), uString::Const(") { ")), uString::CharArray(newlines)), __this->GetEffectiveCode()), uString::Const("\n"
        " })"));
    ::g::Fuse::Scripting::Function* moduleFunc = uCast< ::g::Fuse::Scripting::Function*>(uPtr(c)->Evaluate(__this->FileName(), wrappedCode), ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (moduleFunc == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Could not evaluate module '"), __this->FileName()), uString::Const("': JavaScript code contains errors"))));

    __this->CallModuleFunc(moduleFunc, (uArray*)args->ToArray());
}

// public Uno.UX.FileSource get_File() :20
void ScriptModule__get_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :21
void ScriptModule__set_File_fn(ScriptModule* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :63
void ScriptModule__get_FileName_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :68
void ScriptModule__set_FileName_fn(ScriptModule* __this, uString* value)
{
    __this->FileName(value);
}

// protected virtual string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :65
void ScriptModule__GenerateArgs_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    ::g::Fuse::Scripting::Object* module = uPtr(result)->Object;
    ::g::Uno::Collections::Dictionary* rt = __this->GenerateRequireTable(c);
    ::g::Uno::Collections::List__Add_fn(uPtr(args), module);
    ::g::Uno::Collections::List__Add_fn(args, uPtr(module)->Item(::STRINGS[28/*"exports"*/]));
    ::g::Uno::Collections::List__Add_fn(args, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)ScriptModule__RequireContext__Require_fn, ScriptModule__RequireContext::New1(c, __this, result, rt)));
    return *__retval = uString::Const("module, exports, require"), void();
}

// protected virtual Uno.Collections.Dictionary<string, object> GenerateRequireTable(Fuse.Scripting.Context c) :60
void ScriptModule__GenerateRequireTable_fn(ScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval)
{
    return *__retval = NULL, void();
}

// private string GetEffectiveCode() :12
void ScriptModule__GetEffectiveCode_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetEffectiveCode();
}

// public override sealed Uno.UX.FileSource GetFile() :27
void ScriptModule__GetFile_fn(ScriptModule* __this, ::g::Uno::UX::FileSource** __retval)
{
    return *__retval = __this->_file, void();
}

// private int GetPreambleNewlines() :25
void ScriptModule__GetPreambleNewlines_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->GetPreambleNewlines();
}

// private string GetSourcePath() :142
void ScriptModule__GetSourcePath_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->GetSourcePath();
}

// private static bool IsPathEqual(string src, string path) :182
void ScriptModule__IsPathEqual_fn(uString* src, uString* path, bool* __retval)
{
    *__retval = ScriptModule::IsPathEqual(src, path);
}

// public int get_LineNumberOffset() :77
void ScriptModule__get_LineNumberOffset_fn(ScriptModule* __this, int* __retval)
{
    *__retval = __this->LineNumberOffset();
}

// public void set_LineNumberOffset(int value) :82
void ScriptModule__set_LineNumberOffset_fn(ScriptModule* __this, int* value)
{
    __this->LineNumberOffset(*value);
}

// private Uno.IO.BundleFile LookForFile(string path) :164
void ScriptModule__LookForFile_fn(ScriptModule* __this, uString* path, ::g::Uno::IO::BundleFile** __retval)
{
    *__retval = __this->LookForFile(path);
}

// public generated string get_Postamble() :44
void ScriptModule__get_Postamble_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Postamble();
}

// public generated void set_Postamble(string value) :44
void ScriptModule__set_Postamble_fn(ScriptModule* __this, uString* value)
{
    __this->Postamble(value);
}

// public generated string get_Preamble() :43
void ScriptModule__get_Preamble_fn(ScriptModule* __this, uString** __retval)
{
    *__retval = __this->Preamble();
}

// public generated void set_Preamble(string value) :43
void ScriptModule__set_Preamble_fn(ScriptModule* __this, uString* value)
{
    __this->Preamble(value);
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) :100
void ScriptModule__TryResolve_fn(ScriptModule* __this, uString* path, bool* isFile, ::g::Fuse::Scripting::Module** __retval)
{
    *__retval = __this->TryResolve(path, *isFile);
}

uSStrong<uString*> ScriptModule::ModuleContainsAnErrorMessage_;

// public generated ScriptModule() [instance] :10
void ScriptModule::ctor_1()
{
    ctor_();
}

// private bool Acceptor(object obj) [instance] :190
bool ScriptModule::Acceptor(uObject* obj)
{
    return uIs(obj, ::g::Fuse::Scripting::IModuleProvider_typeof());
}

// public Uno.IO.Bundle get_Bundle() [instance] :32
::g::Uno::IO::Bundle* ScriptModule::Bundle()
{
    ::g::Uno::UX::BundleFileSource* bfs = uAs< ::g::Uno::UX::BundleFileSource*>(File(), ::g::Uno::UX::BundleFileSource_typeof());
    return (bfs != NULL) ? (::g::Uno::IO::Bundle*)uPtr(uPtr(bfs)->BundleFile)->Bundle() : (::g::Uno::IO::Bundle*)_bundle;
}

// public void set_Bundle(Uno.IO.Bundle value) [instance] :37
void ScriptModule::Bundle(::g::Uno::IO::Bundle* value)
{
    _bundle = value;
}

// public string get_Code() [instance] :49
uString* ScriptModule::Code()
{
    if (File() != NULL)
        return uPtr(File())->ReadAllText();

    return _code;
}

// public void set_Code(string value) [instance] :54
void ScriptModule::Code(uString* value)
{
    _code = value;
}

// private string ComputePath(string moduleId, bool& isFile) [instance] :121
uString* ScriptModule::ComputePath(uString* moduleId, bool* isFile)
{
    if (::g::Uno::String::EndsWith(uPtr(moduleId), uString::Const(".js")))
        moduleId = ::g::Uno::String::Replace1(uPtr(moduleId), uString::Const(".js"), ::STRINGS[14/*""*/]);

    if (::g::Uno::String::StartsWith(uPtr(moduleId), uString::Const(".")))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(GetSourcePath(), moduleId);
    }
    else if (::g::Uno::String::StartsWith(uPtr(moduleId), uString::Const("/")))
    {
        *isFile = true;
        return ScriptModule::ComputePath1(::STRINGS[14/*""*/], moduleId);
    }

    *isFile = false;
    return moduleId;
}

// public Uno.UX.FileSource get_File() [instance] :20
::g::Uno::UX::FileSource* ScriptModule::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :21
void ScriptModule::File(::g::Uno::UX::FileSource* value)
{
    _file = value;
}

// public string get_FileName() [instance] :63
uString* ScriptModule::FileName()
{
    if (File() != NULL)
        return uPtr(_file)->Name;
    else
        return _fileName;
}

// public void set_FileName(string value) [instance] :68
void ScriptModule::FileName(uString* value)
{
    _fileName = value;
}

// private string GetEffectiveCode() [instance] :12
uString* ScriptModule::GetEffectiveCode()
{
    uString* code = Code();

    if (!::g::Uno::String::IsNullOrEmpty(Preamble()))
        code = ::g::Uno::String::op_Addition2(Preamble(), code);

    if (!::g::Uno::String::IsNullOrEmpty(Postamble()))
        code = ::g::Uno::String::op_Addition2(code, Postamble());

    return code;
}

// private int GetPreambleNewlines() [instance] :25
int ScriptModule::GetPreambleNewlines()
{
    if (::g::Uno::String::IsNullOrEmpty(Preamble()))
        return 0;

    int index = -1, count = 0;

    while ((index = ::g::Uno::String::IndexOf(uPtr(Preamble()), 10, index + 1)) >= 0)
        count++;

    return count;
}

// private string GetSourcePath() [instance] :142
uString* ScriptModule::GetSourcePath()
{
    if (::g::Uno::String::op_Inequality(FileName(), NULL))
        return ::g::Uno::String::Trim1(uPtr(::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(FileName())), '\\', '/')), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, '/'));
    else
        return ::STRINGS[14/*""*/];
}

// public int get_LineNumberOffset() [instance] :77
int ScriptModule::LineNumberOffset()
{
    if (File() != NULL)
        return 0;

    return _lineNumberOffset;
}

// public void set_LineNumberOffset(int value) [instance] :82
void ScriptModule::LineNumberOffset(int value)
{
    _lineNumberOffset = value;
}

// private Uno.IO.BundleFile LookForFile(string path) [instance] :164
::g::Uno::IO::BundleFile* ScriptModule::LookForFile(uString* path)
{
    ::g::Uno::IO::BundleFile* ret4;
    ::g::Uno::IO::BundleFile* ret5;

    if (Bundle() != NULL)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle())->Files()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::IO::BundleFile* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret4), ret4);

                    if (ScriptModule::IsPathEqual(uPtr(f)->SourcePath(), path))
                    {
                        ::g::Uno::IO::BundleFile* __uno_retval = f;
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
                        return __uno_retval;
                    }
                }
            }
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[14/*Uno.IDisposable*/]));
            }
                        throw __t;
        }
    }

    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[11/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Uno::IO::BundleFile* f1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret5), ret5);

                if (ScriptModule::IsPathEqual(uPtr(f1)->SourcePath(), path))
                {
                    ::g::Uno::IO::BundleFile* __uno_retval = f1;
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
                    return __uno_retval;
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[14/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    return NULL;
}

// public generated string get_Postamble() [instance] :44
uString* ScriptModule::Postamble()
{
    return _Postamble;
}

// public generated void set_Postamble(string value) [instance] :44
void ScriptModule::Postamble(uString* value)
{
    _Postamble = value;
}

// public generated string get_Preamble() [instance] :43
uString* ScriptModule::Preamble()
{
    return _Preamble;
}

// public generated void set_Preamble(string value) [instance] :43
void ScriptModule::Preamble(uString* value)
{
    _Preamble = value;
}

// private Fuse.Scripting.Module TryResolve(string path, bool isFile) [instance] :100
::g::Fuse::Scripting::Module* ScriptModule::TryResolve(uString* path, bool isFile)
{
    ::g::Uno::IO::BundleFile* file = LookForFile(path);

    if (file != NULL)
        return ::g::Fuse::Scripting::FileModule::New2(::g::Uno::UX::BundleFileSource::New1(file));

    if (!isFile)
    {
        uObject* res;

        if (::g::Uno::UX::Resource::TryFindGlobal(path, uDelegate::New(::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL), (void*)ScriptModule__Acceptor_fn, this), &res))
        {
            uObject* mp = (uObject*)res;
            return ::g::Fuse::Scripting::IModuleProvider::GetModule(uInterface(uPtr(mp), ::g::Fuse::Scripting::IModuleProvider_typeof()));
        }
    }

    return NULL;
}

// private static string ComputePath(string sourcePath, string moduleId) [static] :148
uString* ScriptModule::ComputePath1(uString* sourcePath, uString* moduleId)
{
    uArray* parts = ::g::Uno::String::Split(uPtr(moduleId), uArray::Init<int>(::g::Uno::Char_typeof()->Array(), 1, '/'));

    for (int i = 0; i < uPtr(parts)->Length(); i++)
        if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), ::STRINGS[14/*""*/]))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), uString::Const(".")))
            continue;
        else if (::g::Uno::String::op_Equality(uPtr(parts)->Strong<uString*>(i), uString::Const("..")))
            sourcePath = ::g::Uno::String::Replace(uPtr(::g::Uno::IO::Path::GetDirectoryName(sourcePath)), '\\', '/');
        else if (uPtr(sourcePath)->Length() > 0)
            sourcePath = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(sourcePath, uString::Const("/")), uPtr(parts)->Strong<uString*>(i));
        else
            sourcePath = uPtr(parts)->Strong<uString*>(i);

    return sourcePath;
}

// private static bool IsPathEqual(string src, string path) [static] :182
bool ScriptModule::IsPathEqual(uString* src, uString* path)
{
    if (::g::Uno::String::op_Equality(src, path))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, uString::Const(".js"))))
        return true;

    if (::g::Uno::String::op_Equality(src, ::g::Uno::String::op_Addition2(path, uString::Const("/index.js"))))
        return true;

    return false;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptPromise<TSelf, TResult, TJSResult> :149
// {
static void ScriptPromise_build(uType* type)
{
    type->SetPrecalc(
        ScriptPromise__FutureClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL),
        ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL),
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->T(1), NULL),
        ScriptPromise__PromiseClosure_typeof()->MakeType(type->T(0), type->T(1), type->T(2), NULL));
    type->SetFields(2,
        ScriptPromise__FutureFactory_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(0), type->T(1), NULL), offsetof(ScriptPromise, _futureFactory), 0,
        ScriptPromise__ResultConverter_typeof()->MakeType(type->T(0), type->T(1), type->T(2), type->T(1), type->T(2), NULL), offsetof(ScriptPromise, _resultConverter), 0);
}

::g::Fuse::Scripting::ScriptMethod_type* ScriptPromise_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptMethod_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMethod_typeof();
    options.FieldCount = 4;
    options.GenericCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(ScriptPromise);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptMethod_type);
    type = (::g::Fuse::Scripting::ScriptMethod_type*)uClassType::New("Fuse.Scripting.ScriptPromise`3", options);
    type->fp_build_ = ScriptPromise_build;
    type->fp_Call = (void(*)(::g::Fuse::Scripting::ScriptMethod*, ::g::Fuse::Scripting::Context*, uObject*, uArray*, uObject**))ScriptPromise__Call_fn;
    return type;
}

// public override sealed object Call(Fuse.Scripting.Context c, object obj, object[] args) :186
void ScriptPromise__Call_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.PromiseClosure*/),
        __this->__type->Precalced(0/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureClosure*/),
        __this->__type->Precalced(1/*Fuse.Scripting.ScriptPromise<TSelf, TResult, TJSResult>.FutureFactory<TSelf, TResult>*/),
    };
    uT self(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ScriptPromise__FutureClosure* ret2;
    ::g::Uno::Threading::Future1* ret3;
    ::g::Fuse::Scripting::Function* promise = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[18/*"Promise"*/]), ::TYPES[28/*Fuse.Scripting.Function*/]);
    ScriptPromise__PromiseClosure* promiseClosure = ScriptPromise__PromiseClosure::New1(__types[0], c, __this->_resultConverter);
    self = uUnboxAny(__this->__type->T(0), obj);

    if (__this->Thread == 2)
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ScriptPromise__FutureClosure__Run_fn, (ScriptPromise__FutureClosure__New1_fn(__types[1], c, uDelegate::New(__types[2], (void*)ScriptPromise__InvokeFutureFactory_fn, __this), promiseClosure, self, args, &ret2), ret2)));
    else
        uPtr(promiseClosure)->OnFutureReady((ScriptPromise__InvokeFutureFactory_fn(__this, c, self, args, &ret3), ret3));

    return *__retval = uPtr(promise)->Construct(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, uDelegate::New(::TYPES[31/*Fuse.Scripting.Callback*/], (void*)ScriptPromise__PromiseClosure__Run_fn, promiseClosure))), void();
}

// private Uno.Threading.Future<TResult> InvokeFutureFactory(Fuse.Scripting.Context context, TSelf self, object[] args) :167
void ScriptPromise__InvokeFutureFactory_fn(ScriptPromise* __this, ::g::Fuse::Scripting::Context* context, void* self, uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Uno.Threading.Promise<TResult>*/),
    };

    if (::g::Uno::Delegate::op_Equality(__this->_futureFactory, NULL))
    {
        ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
        p->Reject(::g::Uno::Exception::New2(uString::Const("FutureFactory is null")));
        return *__retval = p, void();
    }

    ::g::Uno::Threading::Future1* future = (::g::Uno::Threading::Future1*)uPtr(__this->_futureFactory)->Invoke(3, context, self, args);

    if (future == NULL)
    {
        ::g::Uno::Threading::Promise* p1 = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
        p1->Reject(::g::Uno::Exception::New2(uString::Const("FutureFactory returned null")));
        return *__retval = p1, void();
    }

    return *__retval = future, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public abstract class ScriptProperty :35
// {
static void ScriptProperty_build(uType* type)
{
    ::STRINGS[14] = uString::Const("");
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(ScriptProperty, Modifier), 0);
}

ScriptProperty_type* ScriptProperty_typeof()
{
    static uSStrong<ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptProperty);
    options.TypeSize = sizeof(ScriptProperty_type);
    type = (ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty", options);
    type->fp_build_ = ScriptProperty_build;
    return type;
}

// protected ScriptProperty(string name, [string modifier]) :38
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier)
{
    __this->ctor_1(name, modifier);
}

// protected ScriptProperty(string name, [string modifier]) [instance] :38
void ScriptProperty::ctor_1(uString* name, uString* modifier)
{
    ctor_(name);
    Modifier = ((modifier != NULL) ? modifier : ::STRINGS[14/*""*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptProperty<TOwner, TValue> :45
// {
static void ScriptProperty1_build(uType* type)
{
    ::STRINGS[81] = uString::Const("ScriptProperty: incorrect owner type");
    type->SetFields(2,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), ::g::Uno::UX::Property1_typeof()->MakeType(type->T(1), NULL), NULL), offsetof(ScriptProperty1, _getter), 0);
}

::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptProperty_typeof();
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.ObjectSize = sizeof(ScriptProperty1);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptProperty_type);
    type = (::g::Fuse::Scripting::ScriptProperty_type*)uClassType::New("Fuse.Scripting.ScriptProperty`2", options);
    type->fp_build_ = ScriptProperty1_build;
    type->fp_GetProperty = (void(*)(::g::Fuse::Scripting::ScriptProperty*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Property**))ScriptProperty1__GetProperty_fn;
    return type;
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__ctor_2_fn(ScriptProperty1* __this, uString* name, uDelegate* getter, uString* modifier)
{
    __this->ctor_2(name, getter, modifier);
}

// public override sealed Uno.UX.Property GetProperty(Uno.UX.PropertyObject owner) :48
void ScriptProperty1__GetProperty_fn(ScriptProperty1* __this, ::g::Uno::UX::PropertyObject* owner, ::g::Uno::UX::Property** __retval)
{
    if (!uIs(owner, __this->__type->T(0)))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[81/*"ScriptPrope...*/]));

    return *__retval = (::g::Uno::UX::Property1*)uPtr(__this->_getter)->Invoke(1, (void*)uUnboxAny(__this->__type->T(0), owner)), void();
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) :53
void ScriptProperty1__New1_fn(uType* __type, uString* name, uDelegate* getter, uString* modifier, ScriptProperty1** __retval)
{
    *__retval = ScriptProperty1::New1(__type, name, getter, modifier);
}

// public ScriptProperty(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [instance] :53
void ScriptProperty1::ctor_2(uString* name, uDelegate* getter, uString* modifier)
{
    ctor_1(name, modifier);
    _getter = getter;
}

// public ScriptProperty New(string name, Uno.Func<TOwner, Uno.UX.Property<TValue>> getter, [string modifier]) [static] :53
ScriptProperty1* ScriptProperty1::New1(uType* __type, uString* name, uDelegate* getter, uString* modifier)
{
    ScriptProperty1* obj1 = (ScriptProperty1*)uNew(__type);
    obj1->ctor_2(name, getter, modifier);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/ScriptClass.uno
// ------------------------------------------------------------------

// public sealed class ScriptReadonlyProperty :25
// {
static void ScriptReadonlyProperty_build(uType* type)
{
    type->SetFields(1,
        uObject_typeof(), offsetof(ScriptReadonlyProperty, Value), 0);
}

uType* ScriptReadonlyProperty_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptMember_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScriptReadonlyProperty);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.ScriptReadonlyProperty", options);
    type->fp_build_ = ScriptReadonlyProperty_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Set :382
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Scripting::Observable__Subscription_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(Observable__Set, _value), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Set, _origin), 0);
}

::g::Fuse::Scripting::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Scripting::Observable__Operation_type);
    type = (::g::Fuse::Scripting::Observable__Operation_type*)uClassType::New("Fuse.Scripting.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Scripting::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Scripting::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Scripting.Observable obs, object value, int origin) :387
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Scripting.Observable obs, object value, int origin) :387
void Observable__Set__New1_fn(::g::Fuse::Scripting::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Scripting.Observable.Subscription> sub) :398
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    ::g::Fuse::Scripting::Observable__Subscription* ret2;
    ::g::Fuse::Scripting::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Scripting.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[3/*Uno.Collections.IList<Fuse.Scripting.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[4/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :393
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Scripting.Observable obs, object value, int origin) [instance] :387
void Observable__Set::ctor_1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Scripting.Observable obs, object value, int origin) [static] :387
Observable__Set* Observable__Set::New1(::g::Fuse::Scripting::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// private sealed class Observable.Subscription.SetExclusiveOperation :79
// {
static void Observable__Subscription__SetExclusiveOperation_build(uType* type)
{
    ::STRINGS[82] = uString::Const("setValueWithOrigin");
    ::TYPES[15] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[16] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Worker), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Object), 0,
        uObject_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, NewValue), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, Origin), 0,
        ::g::Fuse::Scripting::DiagnosticSubject_typeof(), offsetof(Observable__Subscription__SetExclusiveOperation, DiagnosticSubject), 0);
}

uType* Observable__Subscription__SetExclusiveOperation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Observable__Subscription__SetExclusiveOperation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.Observable.Subscription.SetExclusiveOperation", options);
    type->fp_build_ = Observable__Subscription__SetExclusiveOperation_build;
    return type;
}

// public SetExclusiveOperation(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) :81
void Observable__Subscription__SetExclusiveOperation__ctor__fn(Observable__Subscription__SetExclusiveOperation* __this, ::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    __this->ctor_(worker, obj, newValue, *origin, diagnosticSubject);
}

// public SetExclusiveOperation New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) :81
void Observable__Subscription__SetExclusiveOperation__New1_fn(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int* origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject, Observable__Subscription__SetExclusiveOperation** __retval)
{
    *__retval = Observable__Subscription__SetExclusiveOperation::New1(worker, obj, newValue, *origin, diagnosticSubject);
}

// public void Perform(Fuse.Scripting.Context context) :96
void Observable__Subscription__SetExclusiveOperation__Perform_fn(Observable__Subscription__SetExclusiveOperation* __this, ::g::Fuse::Scripting::Context* context)
{
    __this->Perform(context);
}

// public SetExclusiveOperation(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) [instance] :81
void Observable__Subscription__SetExclusiveOperation::ctor_(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    Worker = worker;
    Object = obj;
    NewValue = newValue;
    Origin = origin;
    DiagnosticSubject = diagnosticSubject;
}

// public void Perform(Fuse.Scripting.Context context) [instance] :96
void Observable__Subscription__SetExclusiveOperation::Perform(::g::Fuse::Scripting::Context* context)
{
    try
    {
        {
            uObject* newValue = uPtr(Worker)->Unwrap(NewValue);
            uPtr(Object)->CallMethod(::STRINGS[82/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, newValue, uBox<int>(::TYPES[55/*int*/], Origin)));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[15/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            uPtr(DiagnosticSubject)->SetDiagnostic(ex);
        }
        else         throw __t;
    }
}

// public SetExclusiveOperation New(Fuse.Scripting.ThreadWorker worker, Fuse.Scripting.Object obj, object newValue, int origin, Fuse.Scripting.DiagnosticSubject diagnosticSubject) [static] :81
Observable__Subscription__SetExclusiveOperation* Observable__Subscription__SetExclusiveOperation::New1(::g::Fuse::Scripting::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, uObject* newValue, int origin, ::g::Fuse::Scripting::DiagnosticSubject* diagnosticSubject)
{
    Observable__Subscription__SetExclusiveOperation* obj1 = (Observable__Subscription__SetExclusiveOperation*)uNew(Observable__Subscription__SetExclusiveOperation_typeof());
    obj1->ctor_(worker, obj, newValue, origin, diagnosticSubject);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/IScriptEvent.uno
// -------------------------------------------------------------------

// public sealed class StringChangedArgs :42
// {
static void StringChangedArgs_build(uType* type)
{
    ::STRINGS[2] = uString::Const("value");
    ::TYPES[8] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetBase(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(StringChangedArgs_type, interface0));
    type->SetFields(1);
}

StringChangedArgs_type* StringChangedArgs_typeof()
{
    static uSStrong<StringChangedArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::ValueChangedArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StringChangedArgs);
    options.TypeSize = sizeof(StringChangedArgs_type);
    type = (StringChangedArgs_type*)uClassType::New("Fuse.Scripting.StringChangedArgs", options);
    type->fp_build_ = StringChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))StringChangedArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public StringChangedArgs(string newValue) :44
void StringChangedArgs__ctor_2_fn(StringChangedArgs* __this, uString* newValue)
{
    __this->ctor_2(newValue);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :46
void StringChangedArgs__FuseScriptingIScriptEventSerialize_fn(StringChangedArgs* __this, uObject* s)
{
    uString* ret2;
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[8/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[2/*"value"*/], (::g::Uno::UX::ValueChangedArgs__get_Value_fn(__this, &ret2), ret2));
}

// public StringChangedArgs New(string newValue) :44
void StringChangedArgs__New3_fn(uString* newValue, StringChangedArgs** __retval)
{
    *__retval = StringChangedArgs::New3(newValue);
}

// public StringChangedArgs(string newValue) [instance] :44
void StringChangedArgs::ctor_2(uString* newValue)
{
    ::g::Uno::UX::ValueChangedArgs__ctor_1_fn(this, newValue);
}

// public StringChangedArgs New(string newValue) [static] :44
StringChangedArgs* StringChangedArgs::New3(uString* newValue)
{
    StringChangedArgs* obj1 = (StringChangedArgs*)uNew(StringChangedArgs_typeof());
    obj1->ctor_2(newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno
// ----------------------------------------------------------------------------

// public sealed class Observable.Subscription :51
// {
// static generated Subscription() :51
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Observable__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface1));
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription, _origin), 0,
        ::g::Fuse::Scripting::Observable_typeof(), offsetof(Observable__Subscription, _om), 0,
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Observable__Subscription, _obs), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&Observable__Subscription::_counter_, uFieldFlagsStatic);
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::DiagnosticSubject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Scripting.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_ClearExclusive = (void(*)(uObject*))Observable__Subscription__ClearExclusive_fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__SetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__ReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Scripting.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    __this->ctor_1(om, obs);
}

// public void ClearExclusive() :185
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose() :197
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Scripting.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__New2_fn(::g::Fuse::Scripting::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New2(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :66
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :57
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :57
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) :154
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues)
{
    __this->ReplaceAllExclusive(newValues);
}

// public void SetExclusive(object newValue) :112
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public bool ShouldSend([int origin]) :59
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Scripting.Observable om, Fuse.Reactive.IObserver obs) [instance] :68
void Observable__Subscription::ctor_1(::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    ctor_();
    Removed(false);
    _origin = (Observable__Subscription::_counter_++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;
}

// public void ClearExclusive() [instance] :185
void Observable__Subscription::ClearExclusive()
{
    Observable__Subscription__ClearExclusiveOperation* op = Observable__Subscription__ClearExclusiveOperation::New1(uPtr(_om)->Object(), _origin);

    if (uPtr(uPtr(_om)->_worker)->CanEvaluate())
        uPtr(op)->Perform(NULL);
    else
        uPtr(uPtr(_om)->_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__Subscription__ClearExclusiveOperation__Perform_fn, uPtr(op)));
}

// public void Dispose() [instance] :197
void Observable__Subscription::Dispose()
{
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :66
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :57
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :57
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) [instance] :154
void Observable__Subscription::ReplaceAllExclusive(uObject* newValues)
{
    uArray* arr = uArray::New(::TYPES[16/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::g::Fuse::IArray_typeof())));

    for (int i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = ::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::g::Fuse::IArray_typeof()), i);

    Observable__Subscription__ReplaceAllExclusiveOperation* op = Observable__Subscription__ReplaceAllExclusiveOperation::New1(uPtr(_om)->_worker, uPtr(_om)->Object(), arr, _origin);

    if (uPtr(uPtr(_om)->_worker)->CanEvaluate())
        uPtr(op)->Perform(NULL);
    else
        uPtr(uPtr(_om)->_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__Subscription__ReplaceAllExclusiveOperation__Perform_fn, uPtr(op)));
}

// public void SetExclusive(object newValue) [instance] :112
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    ClearDiagnostic();

    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Unexpected null object"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/Observable.uno"), 118, uString::Const("SetExclusive"));
        return;
    }

    Observable__Subscription__SetExclusiveOperation* op = Observable__Subscription__SetExclusiveOperation::New1(uPtr(_om)->_worker, uPtr(_om)->Object(), newValue, _origin, this);

    if (uPtr(uPtr(_om)->_worker)->CanEvaluate())
        uPtr(op)->Perform(NULL);
    else
        uPtr(uPtr(_om)->_worker)->Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)Observable__Subscription__SetExclusiveOperation__Perform_fn, uPtr(op)));
}

// public bool ShouldSend([int origin]) [instance] :59
bool Observable__Subscription::ShouldSend(int origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Scripting.Observable om, Fuse.Reactive.IObserver obs) [static] :68
Observable__Subscription* Observable__Subscription::New2(::g::Fuse::Scripting::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_1(om, obs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/SubscriptionSubject.uno
// -------------------------------------------------------------------------------------

// internal abstract class SubscriptionSubject :8
// {
static void SubscriptionSubject_build(uType* type)
{
}

uType* SubscriptionSubject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SubscriptionSubject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Scripting.SubscriptionSubject", options);
    type->fp_build_ = SubscriptionSubject_build;
    return type;
}

// protected generated SubscriptionSubject() :8
void SubscriptionSubject__ctor__fn(SubscriptionSubject* __this)
{
    __this->ctor_();
}

// protected generated SubscriptionSubject() [instance] :8
void SubscriptionSubject::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.Mirror.uno
// -------------------------------------------------------------------------------------

// internal partial sealed class ThreadWorker :8
// {
// static ThreadWorker() :10
static void ThreadWorker__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(uObject_typeof(), uArray::New(::g::Fuse::Scripting::ScriptMember_typeof()->Array(), 0));
}

static void ThreadWorker_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Application_typeof(),
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Properties_typeof(),
        ::g::Fuse::Scripting::ScriptClass_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2),
        ::g::Fuse::Scripting::IMirror_typeof(), offsetof(ThreadWorker_type, interface3));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(ThreadWorker, _reflectionDepth), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL), offsetof(ThreadWorker, _registeredClasses), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(ThreadWorker, _setSuperclass), 0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(ThreadWorker, _classInstanceProperty), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(ThreadWorker, _thread), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _ready), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _idle), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), NULL), NULL), offsetof(ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Bool_typeof(), offsetof(ThreadWorker, _subscribedForClosing), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Scripting.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface2.fp_Wrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerWrap_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    type->interface2.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke1_fn;
    type->interface2.fp_Unwrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__Unwrap_fn;
    type->interface3.fp_Reflect = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__Reflect_fn;
    return type;
}

// public ThreadWorker() :45
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public bool get_CanEvaluate() :36
void ThreadWorker__get_CanEvaluate_fn(ThreadWorker* __this, bool* __retval)
{
    *__retval = __this->CanEvaluate();
}

// public void CheckAndThrow() :182
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :29
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :20
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// private object CreateMirror(object obj) :37
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// public void Dispose() :67
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :225
void ThreadWorker__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = ThreadWorker::FindRootTable(names);
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :17
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// private object Fuse.Scripting.IThreadWorker.Wrap(object obj) :65
void ThreadWorker__FuseScriptingIThreadWorkerWrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    return *__retval = ThreadWorker::Wrap(obj), void();
}

// public static Fuse.Reactive.FuseJS.Builtins get_FuseJS() :32
void ThreadWorker__get_FuseJS_fn(::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = ThreadWorker::FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :37
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :203
void ThreadWorker__GetClassInstance_fn(ThreadWorker* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Scripting::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :195
void ThreadWorker__GetClassInstance1_fn(ThreadWorker* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Scripting::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public void Invoke(Uno.Action action) :202
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) :196
void ThreadWorker__Invoke1_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke1(action);
}

// public ThreadWorker New() :45
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// public Fuse.Scripting.Function get_Observable() :18
void ThreadWorker__get_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->Observable();
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) :62
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int* newState)
{
    __this->OnTerminating(*newState);
}

// public object Reflect(object obj) :13
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :48
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :78
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :94
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

// private Fuse.Scripting.Array ToArray(float2 v) :92
void ThreadWorker__ToArray_fn(ThreadWorker* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray(*v);
}

// private Fuse.Scripting.Array ToArray(float3 v) :97
void ThreadWorker__ToArray1_fn(ThreadWorker* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray1(*v);
}

// private Fuse.Scripting.Array ToArray(float4 v) :102
void ThreadWorker__ToArray2_fn(ThreadWorker* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray2(*v);
}

// private Fuse.Scripting.Array ToArray(int2 v) :107
void ThreadWorker__ToArray3_fn(ThreadWorker* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray3(*v);
}

// private Fuse.Scripting.Array ToArray(int3 v) :112
void ThreadWorker__ToArray4_fn(ThreadWorker* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray4(*v);
}

// private Fuse.Scripting.Array ToArray(int4 v) :117
void ThreadWorker__ToArray5_fn(ThreadWorker* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray5(*v);
}

// public object Unwrap(object dc) :72
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :42
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :16
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :45
void ThreadWorker::ctor_()
{
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::TYPES[28/*Fuse.Scripting.Function*/], NULL)));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    _ready = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _idle = ::g::Uno::Threading::ManualResetEvent::New2(true);
    _terminate = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], NULL)));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[33/*Uno.Exception*/], NULL)));
    _thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
    uPtr(_ready)->WaitOne();
    uPtr(_ready)->Dispose();
}

// public bool get_CanEvaluate() [instance] :36
bool ThreadWorker::CanEvaluate()
{
    return ::g::Uno::Threading::Thread::CurrentThread() == _thread;
}

// public void CheckAndThrow() [instance] :182
void ThreadWorker::CheckAndThrow()
{
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(uString::Const("Skipped Exception"), prev, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.uno"), 188, uString::Const("CheckAndThrow"));

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :29
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context_;
}

// private object CreateMirror(object obj) [instance] :37
uObject* ThreadWorker::CreateMirror(uObject* obj)
{
    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.Mirror.uno"), 41, uString::Const("CreateMirror"));
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[30/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Scripting::ArrayMirror::New2((uObject*)this, a);

    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (f != NULL)
        return ::g::Fuse::Scripting::FunctionMirror::New2(f);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[21/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(Observable()))
            return ::g::Fuse::Scripting::Observable::New1(this, o, false);
        else if (uPtr(o)->InstanceOf(uPtr(ThreadWorker::FuseJS())->Date))
            return uBox(::g::Uno::DateTime_typeof(), ::g::Fuse::Scripting::DateTimeConverterHelpers::ConvertDateToDateTime(o));
        else
            return ::g::Fuse::Scripting::ObjectMirror::New1((uObject*)this, o);
    }

    return NULL;
}

// public void Dispose() [instance] :67
void ThreadWorker::Dispose()
{
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[52/*Uno.Action`1*/]->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
    uPtr(_terminate)->Set();
    uPtr(_thread)->Join();
    uPtr(_terminate)->Dispose();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :37
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :203
::g::Fuse::Scripting::ClassInstance* ThreadWorker::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uObject* n = uAs<uObject*>(obj, ::g::Fuse::IProperties_typeof());

    if (n != NULL)
    {
        ::g::Fuse::Scripting::ClassInstance* ni = uAs< ::g::Fuse::Scripting::ClassInstance*>(uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Get(_classInstanceProperty), ::g::Fuse::Scripting::ClassInstance_typeof());

        if (ni == NULL)
        {
            ni = ::g::Fuse::Scripting::ClassInstance::New1(this, obj, rootTable);
            uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Cannot use object of type '"), ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), uString::Const("' as 'this' in JavaScript module; must be 'IProperties' or 'App'"))));
}

// internal Fuse.Scripting.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :195
::g::Fuse::Scripting::ClassInstance* ThreadWorker::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    ::g::Uno::UX::NameTable* rootTable = ThreadWorker::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// public void Invoke(Uno.Action action) [instance] :202
void ThreadWorker::Invoke(uDelegate* action)
{
    Invoke1(uDelegate::New(::TYPES[19/*Uno.Action<Fuse.Scripting.Context>*/], (void*)ThreadWorker__ContextIgnoringAction__Run_fn, ThreadWorker__ContextIgnoringAction::New1(action)));
}

// public void Invoke(Uno.Action<Fuse.Scripting.Context> action) [instance] :196
void ThreadWorker::Invoke1(uDelegate* action)
{
    uPtr(_idle)->Reset();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// public Fuse.Scripting.Function get_Observable() [instance] :18
::g::Fuse::Scripting::Function* ThreadWorker::Observable()
{
    return uPtr(ThreadWorker::FuseJS())->Observable;
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) [instance] :62
void ThreadWorker::OnTerminating(int newState)
{
    Dispose();
}

// public object Reflect(object obj) [instance] :13
uObject* ThreadWorker::Reflect(uObject* obj)
{
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[36/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[21/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(uString::Const("external_object")))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(uString::Const("external_object")), ::TYPES[36/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    uObject* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :48
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), uString::Const(" (ScriptClass)")), uString::Const("(function(external_object) { this.external_object = external_object; })")), ::TYPES[28/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = GetClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(uString::Const("(set-superclass)"), uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })")), ::TYPES[28/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethodInline_typeof());

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), uString::Const(".")), uPtr(inlineMethod)->Name), ::STRINGS[25/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("(function(cl, Observable) { cl.prototype."), uPtr(inlineMethod)->Name), uString::Const(" = ")), uPtr(inlineMethod)->Code), uString::Const("; })"))), ::TYPES[28/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)Observable()));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethod_typeof());

        if (method != NULL)
        {
            ThreadWorker__MethodClosure::New1(cl, method, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptProperty_typeof());

        if (property != NULL)
        {
            ThreadWorker__PropertyClosure::New1(cl, property, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptReadonlyProperty* readonlyProperty = uAs< ::g::Fuse::Scripting::ScriptReadonlyProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptReadonlyProperty_typeof());

        if (readonlyProperty != NULL)
        {
            ThreadWorker__ReadonlyPropertyClosure::New1(cl, readonlyProperty, this);
            continue;
        }
    }

    return cl;
}

// private void Run() [instance] :78
void ThreadWorker::Run()
{
    try
    {
        {
            RunInner();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(uString::Const("ThreadWorked failed"), e, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ThreadWorker.uno"), 86, uString::Const("Run"));
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }

    if (ThreadWorker::_context_ != NULL)
        uPtr(ThreadWorker::_context_)->Dispose();
}

// private void RunInner() [instance] :94
void ThreadWorker::RunInner()
{
    bool ret4;

    try
    {
        {
            if (ThreadWorker::_context_ == NULL)
            {
                ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

                if (ThreadWorker::_context_ == NULL)
                    U_THROW(::g::Uno::Exception::New2(uString::Const("Could not create script context")));

                ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
                ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
            }
        }
        {
            uPtr(_ready)->Set();
        }
    }

    catch (const uThrowable& __t)
    {
        {
            uPtr(_ready)->Set();
        }
                throw __t;
    }

    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (true)
    {
        if (uPtr(_terminate)->WaitOne1(0))
            break;

        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current1() != NULL)
            {
                ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[52/*Uno.Action`1*/]->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uDelegate* action;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret4), ret4))
        {
            try
            {
                {
                    didAnything = true;
                    uPtr(action)->InvokeVoid(ThreadWorker::_context_);
                }
            }

            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
            }
        }
        else
            uPtr(_idle)->Set();

        try
        {
            {
                uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;
            ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// private Fuse.Scripting.Array ToArray(float2 v) [instance] :92
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(float3 v) [instance] :97
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 3, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y), uBox(::TYPES[58/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(float4 v) [instance] :102
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 4, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y), uBox(::TYPES[58/*double*/], (double)v.Z), uBox(::TYPES[58/*double*/], (double)v.W)));
}

// private Fuse.Scripting.Array ToArray(int2 v) [instance] :107
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 2, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(int3 v) [instance] :112
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 3, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y), uBox(::TYPES[58/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(int4 v) [instance] :117
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 4, uBox(::TYPES[58/*double*/], (double)v.X), uBox(::TYPES[58/*double*/], (double)v.Y), uBox(::TYPES[58/*double*/], (double)v.Z), uBox(::TYPES[58/*double*/], (double)v.W)));
}

// public object Unwrap(object dc) [instance] :72
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[64/*string*/]))
        return dc;
    else if (uIs(dc, ::g::Fuse::Scripting::IRaw_typeof()))
        return ::g::Fuse::Scripting::IRaw::ReflectedRaw(uInterface(uPtr((uObject*)dc), ::g::Fuse::Scripting::IRaw_typeof()));
    else if (uIs(dc, ::TYPES[28/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[21/*Fuse.Scripting.Object*/]))
        return dc;
    else if (uIs(dc, ::TYPES[30/*Fuse.Scripting.Array*/]))
        return dc;
    else if (uIs(dc, ::g::Uno::Float2_typeof()))
        return ToArray(uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Float3_typeof()))
        return ToArray1(uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Float4_typeof()))
        return ToArray2(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int2_typeof()))
        return ToArray3(uUnbox< ::g::Uno::Int2>(::g::Uno::Int2_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int3_typeof()))
        return ToArray4(uUnbox< ::g::Uno::Int3>(::g::Uno::Int3_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int4_typeof()))
        return ToArray5(uUnbox< ::g::Uno::Int4>(::g::Uno::Int4_typeof(), dc));
    else if (uIs(dc, ::g::Uno::DateTime_typeof()))
        return ::g::Fuse::Scripting::DateTimeConverterHelpers::ConvertDateTimeToJSDate(uUnbox< ::g::Uno::DateTime>(::g::Uno::DateTime_typeof(), dc), uPtr(ThreadWorker::FuseJS())->DateCtor);
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :16
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uObject* so = uAs<uObject*>(obj, ::g::Fuse::Scripting::IScriptObject_typeof());

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof())) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof()));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[16/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof()), res, Context());

    return res;
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :20
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::V8::Context::New1(worker);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :225
::g::Uno::UX::NameTable* ThreadWorker::FindRootTable(::g::Uno::UX::NameTable* names)
{
    ThreadWorker_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// public ThreadWorker New() [static] :45
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object Wrap(object obj) [static] :42
uObject* ThreadWorker::Wrap(uObject* obj)
{
    ThreadWorker_typeof()->Init();

    if (uIs(obj, ::TYPES[36/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[36/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[21/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[21/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->InstanceOf(uPtr(ThreadWorker::FuseJS())->Date))
            return uBox(::g::Uno::DateTime_typeof(), ::g::Fuse::Scripting::DateTimeConverterHelpers::ConvertDateToDateTime(sobj));
        else if (uPtr(sobj)->ContainsKey(uString::Const("external_object")))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(uString::Const("external_object")), ::TYPES[36/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[57/*float*/]))
        return uBox(::TYPES[58/*double*/], (double)uUnbox<float>(::TYPES[57/*float*/], obj));

    if (uIs(obj, ::TYPES[55/*int*/]))
        return uBox(::TYPES[58/*double*/], (double)uUnbox<int>(::TYPES[55/*int*/], obj));

    if (uIs(obj, ::TYPES[66/*uint*/]))
        return uBox(::TYPES[58/*double*/], (double)uUnbox<uint32_t>(::TYPES[66/*uint*/], obj));

    return obj;
}

// public static Fuse.Reactive.FuseJS.Builtins get_FuseJS() [static] :32
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    ThreadWorker_typeof()->Init();
    return ThreadWorker::_fuseJS_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/Types.uno
// ------------------------------------------------------------

// public static class Value :85
// {
static void Value_build(uType* type)
{
    ::TYPES[58] = ::g::Uno::Double_typeof();
    ::TYPES[57] = ::g::Uno::Float_typeof();
    ::TYPES[55] = ::g::Uno::Int_typeof();
    ::TYPES[66] = ::g::Uno::UInt_typeof();
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static double ToNumber(object obj) :87
void Value__ToNumber_fn(uObject* obj, double* __retval)
{
    *__retval = Value::ToNumber(obj);
}

// public static double ToNumber(object obj) [static] :87
double Value::ToNumber(uObject* obj)
{
    if (uIs(obj, ::TYPES[58/*double*/]))
        return uUnbox<double>(::TYPES[58/*double*/], obj);

    if (uIs(obj, ::TYPES[57/*float*/]))
        return (double)uUnbox<float>(::TYPES[57/*float*/], obj);

    if (uIs(obj, ::TYPES[55/*int*/]))
        return (double)uUnbox<int>(::TYPES[55/*int*/], obj);

    if (uIs(obj, ::TYPES[66/*uint*/]))
        return (double)uUnbox<uint32_t>(::TYPES[66/*uint*/], obj);

    return 0.0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting/1.4.2/NativeProperty.uno
// ---------------------------------------------------------------------

// public delegate TJSValue ValueConverter<T, TJSValue>(Fuse.Scripting.Context context, T originalValue) :6
uDelegateType* ValueConverter_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Scripting.ValueConverter`2", 2, 2);
    type->SetSignature(type->T(1),
        ::g::Fuse::Scripting::Context_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ValueMirror.uno
// -----------------------------------------------------------------------------

// internal abstract class ValueMirror :18
// {
static void ValueMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IRaw_typeof(), offsetof(ValueMirror_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(ValueMirror, _raw), 0);
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::SubscriptionSubject_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Scripting.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    type->interface0.fp_get_ReflectedRaw = (void(*)(uObject*, uObject**))ValueMirror__get_ReflectedRaw_fn;
    return type;
}

// protected ValueMirror(object raw) :26
void ValueMirror__ctor_1_fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// public object get_ReflectedRaw() :24
void ValueMirror__get_ReflectedRaw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->ReflectedRaw();
}

// public static void Unsubscribe(object obj) :31
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :26
void ValueMirror::ctor_1(uObject* raw)
{
    ctor_();
    _raw = raw;
}

// public object get_ReflectedRaw() [instance] :24
uObject* ValueMirror::ReflectedRaw()
{
    return _raw;
}

// public static void Unsubscribe(object obj) [static] :31
void ValueMirror::Unsubscribe1(uObject* obj)
{
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

}}} // ::g::Fuse::Scripting
