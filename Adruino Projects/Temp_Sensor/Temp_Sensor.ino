
int red=13,blue=12,green=11;

void setup()
{
  Serial.begin(9600);
  
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop()
{
 tempSensor(); 
}

void tempSensor(){
  int temp=analogRead(A0);
  int tempV=map(temp,358,20,125,-40);
   //Serial.print(temp);Serial.print(" ");
   //Serial.println(tempV);
  if(tempV>45){
  RedLight();
  }else if(tempV<=45 && tempV>=0){
  GreenLight();
  }
  else{
  BlueLight();
  }
}


void RedLight(){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  }
void BlueLight(){
  digitalWrite(red,LOW);
  digitalWrite(blue,HIGH);
  digitalWrite(green,LOW);
  }
void GreenLight(){
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
  }
void LightOff(){
digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
}