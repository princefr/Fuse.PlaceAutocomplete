// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.4.2/Android/InputDispatch.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct JavaMap;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class JavaMap :214
// {
uType* JavaMap_typeof();
void JavaMap__ctor__fn(JavaMap* __this);
void JavaMap__ContainsKey_fn(JavaMap* __this, ::g::Java::Object* key, bool* __retval);
void JavaMap__ContainsKey1_fn(::g::Java::Object* handle, ::g::Java::Object* key, bool* __retval);
void JavaMap__Create_fn(::g::Java::Object** __retval);
void JavaMap__Get_fn(JavaMap* __this, ::g::Java::Object* key, uObject** __retval);
void JavaMap__Get1_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject** __retval);
void JavaMap__New1_fn(JavaMap** __retval);
void JavaMap__Put_fn(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value);
void JavaMap__Put1_fn(JavaMap* __this, ::g::Java::Object* key, uObject* value);
void JavaMap__Remove_fn(JavaMap* __this, ::g::Java::Object* key);
void JavaMap__Remove1_fn(::g::Java::Object* handle, ::g::Java::Object* key);

struct JavaMap : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_();
    bool ContainsKey(::g::Java::Object* key);
    uObject* Get(::g::Java::Object* key);
    void Put1(::g::Java::Object* key, uObject* value);
    void Remove(::g::Java::Object* key);
    static bool ContainsKey1(::g::Java::Object* handle, ::g::Java::Object* key);
    static ::g::Java::Object* Create();
    static uObject* Get1(::g::Java::Object* handle, ::g::Java::Object* key);
    static JavaMap* New1();
    static void Put(::g::Java::Object* handle, ::g::Java::Object* key, uObject* value);
    static void Remove1(::g::Java::Object* handle, ::g::Java::Object* key);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
