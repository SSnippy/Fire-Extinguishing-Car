int pump=6; //declaring the pin for the pump

void setup() {
  pinMode(pump,OUTPUT); //initializing the pump pin for output.

}

void loop() {
  digitalWrite(pump,HIGH); //starts the pump;
  delay(1000); //pumps water for 1second (1000 milliseconds)
  digitalWrite(pump,LOW); // stops the pump
  delay(1000); //waits one second before loop restarts;

}
