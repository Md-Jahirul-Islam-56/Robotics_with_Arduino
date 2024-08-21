void setup() {

  Serial.begin(9600);

  String s1="Hello World!";
  
  int length=s1.length();
  char character=s1.charAt(4);
  String subString=s1.substring(6,11);
  
  String s2=" Hello World 2";
  String conca=s1+s2;
  
  String num1="10",num2="25";
  int intnum1=num1.toInt();
  int intnum2=num2.toInt();
  
  
  Serial.println(length);
  Serial.println(character);
  Serial.println(subString);
  Serial.println(conca);
  Serial.println(intnum1+intnum2);
  
  s1.toUpperCase();
  Serial.println(s1);
  
  s1.toLowerCase();
  Serial.println(s1);
  
  
}
void loop() {
}
