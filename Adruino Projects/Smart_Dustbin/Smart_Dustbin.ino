#include<Servo.h>

void u_sonic_3_pin();
void u_sonic_4_pin();
int SIG=9,echo=4,trig=5;

Servo s;
void setup()
{
  Serial.begin(9600);
 
  s.attach(2);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop()
{
  
  //Uncomment the function that you want to use
  
// u_sonic_3_pin();
  
  u_sonic_4_pin();
  
}

void u_sonic_3_pin(){

  pinMode(SIG,OUTPUT);
  digitalWrite(SIG,LOW);
 digitalWrite(SIG,HIGH);
  delayMicroseconds(2);
  digitalWrite(SIG,LOW);
  delayMicroseconds(5);
  
  pinMode(SIG, INPUT);
  
 float duration=pulseIn(SIG,HIGH);
  
  float distance=(duration*0.034)/2.00;
 Serial.print("1 "); Serial.println(distance);  
  
  if(distance>=30 && distance<=200){
    s.write(90);  
  }
  else{
  s.write(0);
  }
}

void u_sonic_4_pin(){
 
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
 digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  
  
 float duration=pulseIn(echo,HIGH);
  
  float distance=(duration*0.034)/2.00;
  Serial.print("2 "); Serial.println(distance);
  
   if(distance>=30 && distance<=200){
    s.write(90);  
  }
  else{
  s.write(0);
  }
}