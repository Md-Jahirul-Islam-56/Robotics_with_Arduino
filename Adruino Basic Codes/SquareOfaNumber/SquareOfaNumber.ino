void setup() {

  Serial.begin(9600);
 
  Serial.println("Enter a number:");
}

void loop() {

  if (Serial.available() > 0) {
 
    int num = Serial.parseInt();

    int square = num * num;

    Serial.print(square);
 
    delay(1000);

  }
}
