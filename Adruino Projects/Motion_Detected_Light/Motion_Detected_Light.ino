int relay=7,PIR_pin=13;

void setup()
{
  Serial.begin(9600);
  pinMode(relay,OUTPUT);
  pinMode(PIR_pin,INPUT);
}

void loop()
{
  int PIR_sensor=digitalRead(PIR_pin);
  if(PIR_sensor){
  digitalWrite(relay, HIGH);
  //delay(1000); 
  }
  else{
     digitalWrite(relay, LOW);
  //delay(1000);
  }
}