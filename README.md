# Fire-Extinguishing-Car

This is a model demonstrating a vehicle to remotely drive upto a fire and extinguish it, given that it is put within certain range of the fire (still at a safe distance for humans).

Parts needed:
  1) Metal chasis
  2) 4 wheels and drive motors
  3) L298 motor drive module
  4) L293D motorr drive module and 1 5v dc pump (pipe)
  5) Arduino uno
  6) Jumpers
  7) Breadboard
  8) Servo Motors
  9) IR sensors (different from fire detectors)
  10) 3.5 Volts rechargable battery (to provide enough watts for the system to run).
  
Function:
  When a fire is lit in its feild of view (3 sensors combined), it uses its wheels to drive towards it and stop exactly when the range of the water pump is over the fire. The pumps are activated as well as the servos which sprays water in a arc of 90 degrees.
