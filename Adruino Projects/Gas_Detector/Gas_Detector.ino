int LED = 7;
int MQ2pin = A0;
int buzz=12;


void setup() {
  Serial.begin(9600);
  pinMode(buzz,OUTPUT);
  pinMode(LED,OUTPUT);
  
}

void loop() {
  float sensorValue,MQ2pin;
sensorValue = getsensorValue(MQ2pin); // read analog input pin 0

  if(sensorValue >= 470){
    digitalWrite(LED,HIGH);
    digitalWrite(buzz,HIGH);
   // Serial.print(sensorValue);
    Serial.println(" SMOKE DETECTED");
    
  
  }
  else{
    
  	digitalWrite(LED,LOW);
    digitalWrite(buzz,LOW);
   // Serial.println("Sensor Value: ");
    //Serial.println(sensorValue);
      Serial.println(" SMOKE NOT DETECTED");
  } 
  //delay(1000);
  
  
}
	float getsensorValue(int pin){
  	return (analogRead(pin));
}