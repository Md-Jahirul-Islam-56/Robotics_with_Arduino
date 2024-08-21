// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int a=50,b=30;
  
  a=a+b;
  b=a-b;
  a=a-b;
  
  Serial.println(a);
  Serial.println(b);

}

void loop()
{
  
}