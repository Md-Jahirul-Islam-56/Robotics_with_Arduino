void setup() {

  Serial.begin(9600);
   
    Serial.println("Enter a Year");
  
}

void loop() {

  if(Serial.available() > 0){
  int a=Serial.parseInt();
    
    if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 ){
     Serial.println("It is Leap Year");
    }
    else{
    Serial.println("It is not Leap Year");
    }
   
  }
}
