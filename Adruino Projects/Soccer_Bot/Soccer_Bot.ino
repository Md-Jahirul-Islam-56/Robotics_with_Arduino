int speed = 50;
char data ='';

//For Right side
#define rm_ren 10
#define rm_len 11
#define rm_rpwm 5
#define rm_lpwm 6

//For Left side
#define lm_ren 7
#define lm_len 8
#define lm_rpwm 9
#define lm_lpwm 10

void forward();
void backward();
void right();
void left();
void stop();



void setup() {

  pinMode(rm_ren, OUTPUT);
  pinMode(rm_len, OUTPUT);
  pinMode(rm_rpwm, OUTPUT);
  pinMode(rm_lpwm, OUTPUT);


  pinMode(lm_ren, OUTPUT);
  pinMode(lm_len, OUTPUT);
  pinMode(lm_rpwm, OUTPUT);
  pinMode(lm_lpwm, OUTPUT);
}

void loop() {

  if (Serial.available()) {

    data = Serial.read();
    if (data == 'T' && speed <= 100) {
      speed = speed + 25;
    }

    if (data == 'G' && speed >= 0) {

      speed = speed - 25;
    }


    if (data == 'F') {
      forward();
    }
    if (data == 'B') {
      backward();
    }
    if (data == 'L') {
      left();
    }
    if (data == 'R') {
      right();
    }
    if (data == 'S') {
      stop();
    }
  }
}




void forward() {
//for right side motors
  digitalWrite(rm_ren, HIGH);
  digitalWrite(rm_ren, HIGH);
  analogWrite(rm_rpwm, 0);
  analogWrite(rm_lpwm, speed);
//for left side motors
  digitalWrite(lm_ren, HIGH);
  digitalWrite(lm_ren, HIGH);
  analogWrite(lm_rpwm, 0);
  analogWrite(lm_lpwm, speed);
}
void backward() {
//for right side motors
  digitalWrite(rm_ren, HIGH);
  digitalWrite(rm_ren, HIGH);
  analogWrite(rm_rpwm, speed);
  analogWrite(rm_lpwm, 0);
//for left side motors
  digitalWrite(lm_ren, HIGH);
  digitalWrite(lm_ren, HIGH);
  analogWrite(lm_rpwm, speed);
  analogWrite(lm_lpwm, 0);
}
void right() {
//for right side motors
  digitalWrite(rm_ren, HIGH);
  digitalWrite(rm_ren, HIGH);
  analogWrite(rm_rpwm, speed);
  analogWrite(rm_lpwm, 0);
//for left side motors
  digitalWrite(lm_ren, HIGH);
  digitalWrite(lm_ren, HIGH);
  analogWrite(lm_rpwm, 0);
  analogWrite(lm_lpwm, speed);
}
void left() {
//for right side motors
  digitalWrite(rm_ren, HIGH);
  digitalWrite(rm_ren, HIGH);
  analogWrite(rm_rpwm, 0);
  analogWrite(rm_lpwm, speed);
//for left side motors
  digitalWrite(lm_ren, HIGH);
  digitalWrite(lm_ren, HIGH);
  analogWrite(lm_rpwm, speed);
  analogWrite(lm_lpwm, 0);
}
void stop() {
  //for right side motors
  digitalWrite(rm_ren, LOW);
  digitalWrite(rm_ren, LOW);

//for left side motors
  digitalWrite(lm_ren, LOW);
  digitalWrite(lm_ren, LOW);
}