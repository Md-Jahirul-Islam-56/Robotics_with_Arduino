void setup() {

  Serial.begin(9600);
   
    Serial.println("Enter a number:");
  
}

void loop() {

  if (Serial.available() > 0) {
  
 
   int num = Serial.parseInt();

    if (num % 3 == 0){
      Serial.println("The number is divisible by 3.");
    }
    else if(num % 5 == 0){
      Serial.println("The number is divisible by 5");
    }

    else{
    Serial.println("The number is not divisible by 3 or 5");
    }
 
    delay(1000);

  }
}
