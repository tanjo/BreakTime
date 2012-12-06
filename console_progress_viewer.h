#ifndef CONSOLE_PROGRESS_VIEWER_H_
#define CONSOLE_PROGRESS_VIEWER_H_

#include <iostream>
#include <string>
#include <vector>

#include "breaktime.h"

class console_progress_viewer
{
public:

  // show message
  static void progress(std::vector<std::string> message, double delay = 100.0) {

    for (int num = 0; num < message.size(); num++) {
      for (int length = 0; length < message[num].size(); length++) {
        std::cout << message[num][length];
        BreakTime::breaktime(delay);
      }      
    }
    std::cout << std::endl;
  }

  // one line show message (Win & Linux)
  static void progressWithOneLine(std::vector<std::string> message, double delay = 100.0) {

    for (int num = 0; num < message.size(); num++) {
      for (int length = 0; length < message[num].size(); length++) {
        std::cout << message[num][length];
        BreakTime::breaktime(delay);
      }
      BreakTime::breaktime(delay);
      std::cout << "\r";
      for (int i = 0; i < message[num].size(); i++) {
        std::cout << "@";
      }
      std::cout << "\r";
    }
    std::cout << std::endl;

  }
  
};

#endif // CONSOLE_PROGRESS_VIEWER_H_