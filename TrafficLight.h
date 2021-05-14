#ifndef TrafficLight_H
#define TrafficLight_H
#include <Arduino.h>
class TrafficLight
{
  private:
  int col1[5];
  int col2[5];
  int _col1[5];
  int _col2[5];
  int temp[5];
  int delay_green=5000;
  int delay_red=1000;
  int delay_yellow=2000;
  public:
  TrafficLight(int col1[],int col2[]);
  void Run();
  void Run2();
  void pos_change();
};
#endif
