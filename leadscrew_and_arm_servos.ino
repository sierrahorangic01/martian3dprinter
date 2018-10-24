

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <Servo.h>
#include <math.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 2);
Servo servo1;
Servo servo2;

int x = 0;
int myCounter = 0;

void setup() {
  Serial.begin(9600);        
  int x = 0;   
  Serial.println("lead and arm");


  AFMS.begin();  
  servo1.attach(10);
  servo2.attach(9);
  myMotor->setSpeed(10);  
 servo1.write(180); // set servos to original position
servo2.write(0);
delay (500);
servo1.detach();
servo2.detach();


}

void loop() {
  
  if(myCounter<6) {
  
    Serial.println("single coil steps");
    delay(196 00);
  myMotor->step(200, BACKWARD, SINGLE); 
    myCounter = myCounter + 1;
    delay(19600);}
 
    }
   
