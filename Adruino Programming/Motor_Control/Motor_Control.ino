int p=12,n=13,p2=5,n2=6;
void setup()
{
  Serial.begin(9600);
  
  pinMode(p, OUTPUT);
  pinMode(n, OUTPUT);
  
}

void loop()
{
  DirectionControl(); //For motor connected in pin 12,13
  SpeedControl(); //For motor connected in pin 5,6

}

void DirectionControl(){
    digitalWrite(p, HIGH);
    digitalWrite(n, LOW);
    delay(1000); 
    digitalWrite(p, LOW);
    digitalWrite(n, HIGH);
    delay(1000);
}

void SpeedControl(){
  analogWrite(p2,(255/2));//It is half of original speed. Where, maximum voltage is 255.
  analogWrite(n2,0);
 }