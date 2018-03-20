// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/ClassInstance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty;}}}
namespace g{namespace Fuse{namespace Scripting{struct ThreadWorker;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal sealed class ClassInstance :10
// {
uType* ClassInstance_typeof();
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args);
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this);
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this);
void ClassInstance__EnsureRooted_fn(ClassInstance* __this);
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval);
void ClassInstance__New1_fn(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval);
void ClassInstance__Unroot_fn(ClassInstance* __this, ::g::Fuse::Scripting::Context* context);

struct ClassInstance : uObject
{
    uStrong< ::g::Fuse::Scripting::ThreadWorker*> _worker;
    uStrong< ::g::Uno::UX::NameTable*> _rootTable;
    uStrong<uObject*> _obj;
    uStrong< ::g::Fuse::Scripting::Object*> _self;
    uStrong< ::g::Uno::Collections::Dictionary*> _properties;

    void ctor_(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    void CallMethod(::g::Fuse::Scripting::Function* method, uArray* args);
    void DispatchUnroot();
    void EnsureHasProperties();
    void EnsureRooted();
    ::g::Fuse::Scripting::Object* GetPropertyObservable(::g::Uno::UX::Property* p);
    void Unroot(::g::Fuse::Scripting::Context* context);
    static ClassInstance* New1(::g::Fuse::Scripting::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
};
// }

}}} // ::g::Fuse::Scripting
