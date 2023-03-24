//declare motors
#define left_motor1 12       // left motor
#define left_motor2 4       // left motor
#define right_motor1 2       // right motor
#define right_motor2 7       // right motor

void setup() {
  pinMode(left_motor1, OUTPUT);
  pinMode(left_motor2, OUTPUT);
  pinMode(right_motor1, OUTPUT);
  pinMode(right_motor2, OUTPUT);
  pinMode(pump, OUTPUT);

}

void loop() {
  //this sequence runs the wheels, stops then and runs then in reverse in 1s intervals
  digitalWrite(left_motor1, HIGH);
  digitalWrite(left_motor2, LOW);
  digitalWrite(right_motor1, HIGH);
  digitalWrite(right_motor2, LOW);
  delay(1000);
  digitalWrite(left_motor1, HIGH);
  digitalWrite(left_motor2, HIGH);
  digitalWrite(right_motor1, HIGH);
  digitalWrite(right_motor2, HIGH);
  delay(1000);
  digitalWrite(left_motor1, LOW);
  digitalWrite(left_motor2, HIGH);
  digitalWrite(right_motor1, LOW);
  digitalWrite(right_motor2, HIGH);
  delay(1000);
  digitalWrite(left_motor1, HIGH);
  digitalWrite(left_motor2, HIGH);
  digitalWrite(right_motor1, HIGH);
  digitalWrite(right_motor2, HIGH);
}
