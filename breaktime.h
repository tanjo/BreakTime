#ifndef _BREAKTIME_H_
#define _BREAKTIME_H_

#include <iostream>
#include <string>
#include <vector>
#include <ctime>


class ConsoleProgressViewer {
public:
  // ŽžŠÔ‘Ò‚¿
  static void breaktime(double s) {
	  clock_t t;
	  t = clock() + s;
	  while(t > clock());
  }

  // •\Ž¦
  static void progress(std::vector<std::string> message, double delay = 100.0) {

    for (int num = 0; num < message.size(); num++) {
      for (int length = 0; length < message[num].size(); length++) {
        std::cout << message[num][length];
        breaktime(delay);
      }      
    }
    std::cout << std::endl;
  }

};


#endif // _BREAKTIME_H_