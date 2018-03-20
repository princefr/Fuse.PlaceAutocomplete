// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/DiagnosticSubject.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct DiagnosticSubject;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptException;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal class DiagnosticSubject :6
// {
uType* DiagnosticSubject_typeof();
void DiagnosticSubject__ctor__fn(DiagnosticSubject* __this);
void DiagnosticSubject__ClearDiagnostic_fn(DiagnosticSubject* __this);
void DiagnosticSubject__New1_fn(DiagnosticSubject** __retval);
void DiagnosticSubject__SetDiagnostic_fn(DiagnosticSubject* __this, ::g::Fuse::Scripting::ScriptException* se);

struct DiagnosticSubject : uObject
{
    uStrong<uObject*> _diagnostic;

    void ctor_();
    void ClearDiagnostic();
    void SetDiagnostic(::g::Fuse::Scripting::ScriptException* se);
    static DiagnosticSubject* New1();
};
// }

}}} // ::g::Fuse::Scripting
