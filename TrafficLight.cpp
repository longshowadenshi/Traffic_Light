#include <TrafficLight.h>

TrafficLight::TrafficLight(int col1[],int col2[])
{
 for(int i=0;i<5;i++)
 {
  pinMode(col1[i],OUTPUT);
  pinMode(col2[i],OUTPUT);
  _col1[i]=col1[i];
  _col2[i]=col2[i];
 } 
}

void TrafficLight::Run()
{
  //round 1 //
  digitalWrite(_col1[0],HIGH);
  digitalWrite(_col2[2],HIGH);
  digitalWrite(_col1[4],HIGH);
  digitalWrite(_col2[3],HIGH);
  delay(delay_green);
  digitalWrite(_col2[3],LOW);
  for(int i=0;i<20;i++)
  {
    digitalWrite(_col2[3],digitalRead(_col2[3])==HIGH?LOW:HIGH);
    delay(100);
  }
  digitalWrite(_col2[4],HIGH);
  delay(1000);
  digitalWrite(_col1[0],LOW);
  

  digitalWrite(_col1[1],HIGH);
  delay(delay_yellow);
  digitalWrite(_col1[1],LOW);


  digitalWrite(_col1[2],HIGH);
  delay(delay_red);
  digitalWrite(_col2[2],LOW);
  digitalWrite(_col1[2],LOW);
  digitalWrite(_col2[4],LOW);
  digitalWrite(_col1[4],LOW);
}
void TrafficLight::Run2()
{
  //round 1 //
  digitalWrite(_col1[0],HIGH);
  digitalWrite(_col2[2],HIGH);
  delay(delay_green);
  digitalWrite(_col1[0],LOW);
  

  digitalWrite(_col1[1],HIGH);
  delay(delay_yellow);
  digitalWrite(_col1[1],LOW);


  digitalWrite(_col1[2],HIGH);
  delay(delay_red);
  digitalWrite(_col2[2],LOW);
  digitalWrite(_col1[2],LOW);
}

void TrafficLight::pos_change()
{
   for(int i=0;i<5;i++)
 {
  temp[i]=_col1[i];
  _col1[i]=_col2[i];
  _col2[i]=temp[i];
 } 
}
