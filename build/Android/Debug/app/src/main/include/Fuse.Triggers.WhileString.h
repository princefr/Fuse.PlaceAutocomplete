// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/1.4.2/WhileString.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileString;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileString :21
// {
::g::Fuse::Triggers::WhileValue_type* WhileString_typeof();
void WhileString__get_CaseSensitive_fn(WhileString* __this, bool* __retval);
void WhileString__set_CaseSensitive_fn(WhileString* __this, bool* value);
void WhileString__get_Compare_fn(WhileString* __this, uString** __retval);
void WhileString__set_Compare_fn(WhileString* __this, uString* value);
void WhileString__get_IsOn_fn(WhileString* __this, bool* __retval);
void WhileString__get_MaxLength_fn(WhileString* __this, int* __retval);
void WhileString__set_MaxLength_fn(WhileString* __this, int* value);
void WhileString__get_MinLength_fn(WhileString* __this, int* __retval);
void WhileString__set_MinLength_fn(WhileString* __this, int* value);
void WhileString__get_Test_fn(WhileString* __this, int* __retval);
void WhileString__set_Test_fn(WhileString* __this, int* value);

struct WhileString : ::g::Fuse::Triggers::WhileValue
{
    int _test;
    uStrong<uString*> _compare;
    bool _caseSensitive;
    int _minLength;
    int _maxLength;
    bool _hasMinLength;
    bool _hasMaxLength;

    bool CaseSensitive();
    void CaseSensitive(bool value);
    uString* Compare();
    void Compare(uString* value);
    int MaxLength();
    void MaxLength(int value);
    int MinLength();
    void MinLength(int value);
    int Test();
    void Test(int value);
};
// }

}}} // ::g::Fuse::Triggers
