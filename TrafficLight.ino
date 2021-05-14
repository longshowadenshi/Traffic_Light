#include <TrafficLight.h>

#define g1 D4
#define y1 D5
#define r1 D6
#define g2 D9
#define y2 D10
#define r2 D11
#define g1_ped D7 //pedestrain(ped)
#define r1_ped D8
#define g2_ped D12
#define r2_ped D13

int col1[]={g1,y1,r1,g1_ped,r1_ped};
int col2[]={g2,y2,r2,g2_ped,r2_ped};

TrafficLight light(col1,col2);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  light.Run();
  light.pos_change();
}
