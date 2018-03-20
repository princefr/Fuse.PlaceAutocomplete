// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.2/Subscription/DataSubscription.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Node.DataFinder.h>
#include <Fuse.Node.IDataEnumerator.h>
#include <Fuse.Node.IDataListener.h>
#include <Fuse.Reactive.IProper-fa34e162.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct DataSubscription;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class DataSubscription :6
// {
struct DataSubscription_type : ::g::Fuse::Node__DataFinder_type
{
    ::g::Uno::IDisposable interface1;
    ::g::Fuse::Node__IDataListener interface2;
    ::g::Fuse::Reactive::IPropertyObserver interface3;
    ::g::Fuse::Reactive::IWriteable interface4;
};

DataSubscription_type* DataSubscription_typeof();
void DataSubscription__ctor_1_fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this);
void DataSubscription__Dispose_fn(DataSubscription* __this);
void DataSubscription__DisposeSubscription_fn(DataSubscription* __this);
void DataSubscription__FindData_fn(DataSubscription* __this);
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this);
void DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn(DataSubscription* __this, uObject* newValue, bool* __retval);
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval);
void DataSubscription__Resolve_fn(DataSubscription* __this, uObject* provider, uObject* data);
void DataSubscription__ResolveInner_fn(DataSubscription* __this, uObject* data);

struct DataSubscription : ::g::Fuse::Node__DataFinder
{
    uStrong<uObject*> _source;
    uStrong< ::g::Fuse::Node*> _origin;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _diag;
    bool _isResolved;
    uStrong<uObject*> _currentData;
    uStrong<uObject*> _sub;

    void ctor_1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
    void ClearDiagnostic();
    void Dispose();
    void DisposeSubscription();
    void FindData();
    void ResolveInner(uObject* data);
    static DataSubscription* New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
