#include "Timer.h"

Timer::Timer(long long& interval) :_interval(interval)
{
	_timer = time(NULL);
	localtime_s(&_t, &_timer);
	_stime = _timer;
	_etime = 0;
}

Timer::~Timer()
{
	_timer = time(NULL);
	_etime = _timer;
	_interval = _etime - _stime;
}
