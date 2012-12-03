#ifndef _BREAKTIME_H_
#define _BREAKTIME_H_

#include <iostream>
#include <string>
#include <vector>
#include <ctime>


class ConsoleProgressViewer {
public:
  // wait time
  static void breaktime(double s) {
	  clock_t t;
	  t = clock() + s;
	  while(t > clock());
  }

  // show message
  static void progress(std::vector<std::string> message, double delay = 100.0) {

    for (int num = 0; num < message.size(); num++) {
      for (int length = 0; length < message[num].size(); length++) {
        std::cout << message[num][length];
        breaktime(delay);
      }      
    }
    std::cout << std::endl;
  }

  // one line show message (Win & Linux)
  static void progressWithOneLine(std::vector<std::string> message, double delay = 100.0) {

    for (int num = 0; num < message.size(); num++) {
      for (int length = 0; length < message[num].size(); length++) {
        std::cout << message[num][length];
        breaktime(delay);
      }
      breaktime(delay);
      std::cout << "\r";
      for (int i = 0; i < message[num].size(); i++) {
        std::cout << "@";
      }
      std::cout << "\r";
    }
    std::cout << std::endl;

  }

};


#endif // _BREAKTIME_H_