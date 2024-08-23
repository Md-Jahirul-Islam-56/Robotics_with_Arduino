
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
 forceSensor(); 
}

void forceSensor(){
  int force=analogRead(A0);
   Serial.println(force);
  if(force<800){
  RedLight();
  }else if(force>=800 && force<995){
  YellowLight();
  }
  else{
  GreenLight();
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