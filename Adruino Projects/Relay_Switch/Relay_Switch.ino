
void setup()
{
  pinMode(2, OUTPUT);//This bulb is connected in NO pin
  pinMode(4, OUTPUT);//This bulb is connected in NC pin
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(1000); 
  digitalWrite(2, LOW);
   digitalWrite(4, LOW);
  delay(1000); 

}