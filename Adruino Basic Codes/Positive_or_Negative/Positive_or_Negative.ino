
void setup()
{
  Serial.begin(9600);
  
  int a=70;
  
  if(a>0){
  Serial.println("a is positive");
  }
  else if(a<0){
  Serial.println("a is negative");
  }
  else{
  Serial.println("a is zero");
  }

}

void loop()
{
  
}