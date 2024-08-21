int a=55,b=10,c=7;

void setup() {

  Serial.begin(9600);
  
  if (a>b && a>c){
  Serial.println("a is largest.");
  }
   else if (b>c){
  Serial.println("b is largest.");
  }
   else{
  Serial.println("c is largest.");
  }
  
}

void loop() {
}
