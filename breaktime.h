#ifndef _BREAKTIME_H_
#define _BREAKTIME_H_

#include <iostream>
#include <ctime>

class BreakTime {
public:

  // wait time
  static void breaktime(const unsigned int interval) {
	  clock_t t;
	  t = clock() + interval;
	  while(t > clock());
  }

  template<class T>
  static void breaktime_second(const T interval) {
    clock_t t;
    t = clock() + interval * CLOCKS_PER_SEC;
    while(t > clock());
  }

};


#endif // _BREAKTIME_H_