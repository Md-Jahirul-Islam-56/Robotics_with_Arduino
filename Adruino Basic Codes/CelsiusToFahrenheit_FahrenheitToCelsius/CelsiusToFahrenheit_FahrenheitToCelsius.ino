
void setup()
{
  Serial.begin(9600);
  
  float c=32;
  
  float f=(c*9/5)+32;
  

  Serial.println(f);

  float f2=105;
  
  float c2=(f2-32)*(5.00/9.00);
  
  Serial.println(c2);
}

void loop()
{
  
}