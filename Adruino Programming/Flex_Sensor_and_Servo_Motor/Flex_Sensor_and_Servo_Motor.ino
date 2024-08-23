#include<Servo.h>
int s=6;

Servo myServo;
void setup()
{
  Serial.begin(9600);
  
  myServo.attach(s);
  
}

void loop()
{
  int angle=flexAngle();
  myServo.write(angle);
}

int flexAngle(){
int flex=analogRead(A0);
  // Serial.print(flex);Serial.print(" ");
  
  int flexV=map(flex,716,307,0,180);
  //Serial.println(flexV);
  return flexV;
}