BreakTime
=========

疑似スリープ  

    #include "BreakTime/breaktime.h"
    #include "BreakTime/console_progress_viewer.h"

    int main(void) {
      
      BreakTime::breaktime(1000);
      
      std::vector<std::string> message;
      
      message.push_back("問題です！");
      message.push_back("これは一体何でしょう？");
      message.push_back("1");
      message.push_back("2");
      message.push_back("3");
      message.push_back("はい終了！");
      message.push_back("答えは■■■でした！");
      
      ConsoleProgressViewer::progress(message, 10);
      ConsoleProgressViewer::progressWithOneLine(message, 100);
      
      return 0;
    }
    
Windows版のbreaktime_win.hが大変便利