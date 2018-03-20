// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.2/FuseJS/Timer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct TimerManager__Timer;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// private sealed class TimerManager.Timer :244
// {
uType* TimerManager__Timer_typeof();
void TimerManager__Timer__ctor__fn(TimerManager__Timer* __this, double* ms, uDelegate* callback, bool* repeat);
void TimerManager__Timer__GetMilliseconds_fn(double* __retval);
void TimerManager__Timer__New1_fn(double* ms, uDelegate* callback, bool* repeat, TimerManager__Timer** __retval);
void TimerManager__Timer__Start_fn(TimerManager__Timer* __this);
void TimerManager__Timer__Stop_fn(TimerManager__Timer* __this);
void TimerManager__Timer__Update_fn(TimerManager__Timer* __this);

struct TimerManager__Timer : uObject
{
    static int _id_;
    static int& _id() { return _id_; }
    double _timeout;
    uStrong<uDelegate*> _callback;
    bool _repeat;
    bool _isRunning;
    double _startTime;
    int ID;
    uStrong<uDelegate*> OnStop;

    void ctor_(double ms, uDelegate* callback, bool repeat);
    void Start();
    void Stop();
    void Update();
    static double GetMilliseconds();
    static TimerManager__Timer* New1(double ms, uDelegate* callback, bool repeat);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
