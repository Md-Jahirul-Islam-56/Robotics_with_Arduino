void setup() {

  Serial.begin(9600);
   
    Serial.println("Enter a character");
  
}

void loop() {

  if(Serial.available() > 0){
  char a=Serial.read();
    
    if(a=='r' || a=='R'){
     Serial.println("It is Rainy Day");
    }
    else if(a=='s' || a=='S'){
     Serial.println("It is Sunny Day");
    }
    else{
     Serial.println("Character input failed");
    }
    
  }
}
