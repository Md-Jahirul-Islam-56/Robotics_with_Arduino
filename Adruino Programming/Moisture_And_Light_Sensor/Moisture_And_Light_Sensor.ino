int red=2,blue=3,green=4,buzz=13,redLED=5;

void setup()
{
  Serial.begin(9600);
   // VoltageValue();//Where the orange wire is connected
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(redLED,OUTPUT);
}

void loop()
{
  
  photoSensor();
  moistureSensor();

}
void photoSensor(){
int autoLight=analogRead(A0);
  //Serial.println(autoLight);
  if(autoLight<350){
  digitalWrite(redLED,HIGH);
  }
  else{
  digitalWrite(redLED,LOW);
  }
}


void moistureSensor(){
int soilSensor=analogRead(A1);
  if(soilSensor<200){
  RedLight();
    digitalWrite(buzz,HIGH);
  }
  else{
  GreenLight();
    digitalWrite(buzz,LOW);
  }
}

void RedLight(){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  }
void YellowLight(){
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(green,HIGH);
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

void VoltageValue(){
int R=analogRead(A0);
  float v=(R/1023.00)*5;
 Serial.println(v);
  Serial.println(R);
  
}