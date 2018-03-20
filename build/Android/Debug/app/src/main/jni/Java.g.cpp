// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Java.Object.h>

namespace g{
namespace Java{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Compiler/ExportTargetInterop/Foreign/Android/Object.uno
// --------------------------------------------------------------------------------------------------------------

// public abstract extern class Object :5
// {
static void Object_build(uType* type)
{
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Java.Object", options);
    type->fp_build_ = Object_build;
    return type;
}

// protected generated Object() :5
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// protected generated Object() [instance] :5
void Object::ctor_()
{
}
// }

}} // ::g::Java
