#include <Servo.h>

Servo myservo; //declare servo


void setup() {
  myservo.attach(12); //tell the system where the servo is on arduino
  myservo.write(90); //set servo to mean position

}

void loop() {
  //test the motion the servos will follow
  for (pos = 50; pos <= 130; pos += 1) {
    myservo.write(pos);
    delay(10);  
  }
  for (pos = 130; pos >= 50; pos -= 1) {
    myservo.write(pos);
    delay(10);
  }
  delay(5000); //repeat above procedure at five second intervals

}
