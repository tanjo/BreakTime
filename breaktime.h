#ifndef _BREAKTIME_H_
#define _BREAKTIME_H_

#include <ctime>

// ���ԑ҂�
void breaktime(double s){
	clock_t t;

	t = clock() + s;
	while(t > clock());
}

#endif // _BREAKTIME_H_