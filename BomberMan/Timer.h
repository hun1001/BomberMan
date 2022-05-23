#pragma once
#include "console.h"

class Timer
{
private:
	time_t _timer;
	struct tm _t;
	long long _stime, _etime;
	long long& _interval;

public:
	Timer(long long& interval);
	~Timer();
};
