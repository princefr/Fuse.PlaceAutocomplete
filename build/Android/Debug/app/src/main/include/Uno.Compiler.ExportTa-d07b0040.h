// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/ForeignDataView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{struct ForeignDataView;}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// public static extern class ForeignDataView :65
// {
uClassType* ForeignDataView_typeof();
void ForeignDataView__Create_fn(uArray* unoArray, ::g::Java::Object** __retval);
void ForeignDataView__CreateInner_fn(jobject* directBuffer, uObject* unoObj, ::g::Java::Object** __retval);
void ForeignDataView__CreateInnerJava_fn(::g::Java::Object* directBuffer, uObject* unoObj, ::g::Java::Object** __retval);

struct ForeignDataView : uObject
{
    static ::g::Java::Object* Create(uArray* unoArray);
    static ::g::Java::Object* CreateInner(jobject directBuffer, uObject* unoObj);
    static ::g::Java::Object* CreateInnerJava(::g::Java::Object* directBuffer, uObject* unoObj);
};
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
