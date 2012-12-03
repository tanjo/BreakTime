BreakTime
=========

疑似スリープ  

    int main(void) {
      ConsoleProgressViewer::breaktime(1000);
      
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