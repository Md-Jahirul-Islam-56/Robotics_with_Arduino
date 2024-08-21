void setup() {

  Serial.begin(9600);


  while (1) {
    Serial.println("Enter a number:");
    while (Serial.available() == 0) {}
    int a = Serial.parseInt();
    Serial.println(a);
    if (a == 0) {
      Serial.println(1);
    } else {
      unsigned long fact = 1;

      for (int i = a; i >= 1; i--) {
        fact = fact * i;
        Serial.println(i);
      }
      Serial.println(fact);
    }
  }
}
void loop() {
}
