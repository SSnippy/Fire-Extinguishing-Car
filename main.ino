#include <Servo.h>

Servo myservo;
int deg = 0;
int motor_speed = 70;  
boolean fire = false;
#define Left 10      // left sensor
#define Right 9    // right sensor
#define Forward 8   //front sensor
#define left_motor1 12       // left motor
#define left_motor2 4       // left motor
#define right_motor1 2       // right motor
#define right_motor2 7       // right motor
#define pump 6

void setup() {
  
  pinMode(left_motor1, OUTPUT);
  pinMode(left_motor2, OUTPUT);
  pinMode(right_motor1, OUTPUT);
  pinMode(right_motor2, OUTPUT);
  pinMode(pump, OUTPUT);

  pinMode(Left, INPUT);
  pinMode(Right, INPUT);
  pinMode(Forward, INPUT);
  
  myservo.attach(12);
  myservo.write(90);
}

void put_off_fire() {
  delay (500);  
  digitalWrite(left_motor1, HIGH);
  digitalWrite(left_motor2, HIGH);
  digitalWrite(right_motor1, HIGH);
  digitalWrite(right_motor2, HIGH);
  digitalWrite(pump, HIGH);
  delay(500);
  for (deg = 50; deg <= 130; deg += 1) {
    myservo.write(deg);
    delay(10);  
  }
  for (deg = 130; deg >= 50; deg -= 1) {
    myservo.write(deg);
    delay(10);
  }
  digitalWrite(pump,LOW);
  myservo.write(90);
  fire=false;
  delay(10000);
} 

void loop() {
  myservo.write(90);
  if (digitalRead(Left) ==1 && digitalRead(Right)==1 && digitalRead(Forward) ==1) {   
    digitalWrite(left_motor1, HIGH);
    digitalWrite(left_motor2, HIGH);
    digitalWrite(right_motor1, HIGH);
    digitalWrite(right_motor2, HIGH);
  } else if (digitalRead(Forward) ==0) {
    digitalWrite(left_motor1, HIGH);
    digitalWrite(left_motor2, LOW);
    digitalWrite(right_motor1, HIGH);
    digitalWrite(right_motor2, LOW);
    fire = true;
  } else if (digitalRead(Left) ==0) {
    digitalWrite(left_motor1, HIGH);
    digitalWrite(left_motor2, LOW);
    digitalWrite(right_motor1, HIGH);
    digitalWrite(right_motor2, HIGH);
  } else if (digitalRead(Right) ==0) {
    digitalWrite(left_motor1, HIGH);
    digitalWrite(left_motor2, HIGH);
    digitalWrite(right_motor1, HIGH);
    digitalWrite(right_motor2, LOW);
  }
  delay(300); 
    while (fire == true) {
      put_off_fire();
    }
}