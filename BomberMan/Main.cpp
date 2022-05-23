#include "console.h"
#include "Timer.h"

int main()
{
	long long interval;
	Timer* t = new Timer(interval);
	system("pause");
	delete t;
	cout << interval << endl;
	return 0;
}