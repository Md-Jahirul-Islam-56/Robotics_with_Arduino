void setup() {

  Serial.begin(9600);

  int a,b,count=0;
  
    Serial.println("Enter the first number:");
  while (Serial.available() == 0) {}  
  a = Serial.parseInt();
  Serial.println(a);
  
  Serial.println("Enter the second number:");
  while (Serial.available() == 0) {} 
  b = Serial.parseInt();
  Serial.println(b);
  
  
 Serial.print("Numbers divisible by 7 from ");
  Serial.print(a);
  Serial.print(" to ");
  Serial.print(b);  
  Serial.println(" are:");
  
   for(int i=a;i<=b;i++){
    if(i%7 == 0){
    Serial.println(i);
      count++;
    }
  }
  Serial.print("Total number divisible by 7: ");Serial.println(count);
 
}


void loop() {
}
