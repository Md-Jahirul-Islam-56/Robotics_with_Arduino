void setup() {

  Serial.begin(9600);
 
   Serial.println("Even numbers from 1 to 100 are:");
  for(int i=1;i<=100;i++){
    if(i%2 == 0){
    Serial.println(i);
    }
  }
   Serial.println("Odd numbers from 1 to 100 are:");
  for(int i=1;i<=100;i++){
    if(i%2 != 0){
    Serial.println(i);
    }
  }

}

void loop() {
}
