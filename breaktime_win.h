#ifndef _BREAKTIME_WIN_H_
#define _BREAKTIME_WIN_H_

#include <Windows.h>
#include <conio.h>

class BreakTimeWin
{
public:

  // 特定秒待つ
  static void wait(const unsigned int interval) {
    DWORD time = GetTickCount() + interval;
    while(GetTickCount() < time);

  }
  // GetTickCount64とGetTickCountの精度は変わらない
  static void wait(const unsigned long long int interval) {

    ULONGLONG time = GetTickCount64() + interval;
    while(GetTickCount() < time);

  }
  static void wait_second(const unsigned int interval) {

    DWORD time = GetTickCount() + interval * 1000; // 1000ms
    while(GetTickCount() < time);

  }

  /// <summary>interval秒待つ。</summary>
  /// <returns>文字もしくは-1</returns>
  static int waitkey(const unsigned int interval = 0) {

    if (interval != 0) {
      DWORD time = GetTickCount() + interval * 1000; // 1000ms

      bufferflush();

      while(GetTickCount() < time) {
        if(_kbhit()) break;
      }
      if(_kbhit()) {
        return _getch();
      } else {
        return -1;
      }

    } else {

      bufferflush();

      while(true) {
        if(_kbhit()) break;
      }
      if(_kbhit()) {
        return _getch();
      } else {
        return -1;
      }

    }

  }

  /// <summary>文字列渡すまで返さないんだから！</summary>
  /// <returns>文字もしくは-1</returns>
  static int waitkey(const std::string message) {

    std::cout << message << std::endl;
    bufferflush();
    
    while(true) {
        if(_kbhit()) break;
      }
      if(_kbhit()) {
        return _getch();
      } else {
        return -1;
    }

  }

  /// <summary>バッファがあると_kbhit()が役に立たないのでバッファを抜いてあげる(ハート)</summary>
  static void bufferflush(bool is_buffer_view = false) {

    while(true){
      if(_kbhit()){
        _getch();
      } else {
        break;
      }
    }

  }

};

#endif // _BREAKTIME_WIN_H_