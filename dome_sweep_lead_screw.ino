#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <Servo.h>
#include <math.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 2);
Servo servo1;
Servo servo2;

int x = 1;
int myCounter = 0;

void setup() {
  Serial.begin(9600);        
  int x = 0;   
  Serial.println("dog");


  AFMS.begin();  
  servo1.attach(10);
  servo2.attach(9);
  myMotor->setSpeed(10);  
 servo1.write(180); // set servos to original position
servo2.write(0);


}

void loop() {

 if(x<10) {
    Serial.println("single coil steps");
  myMotor->step(56, BACKWARD, SINGLE); 
    myCounter = myCounter + 1;
  servo2.write (((atan((2.20*x/13.652))*180/PI)));
servo1.write (180-((atan((2.20*x/13.652))*180/PI)));
 x = x + 1;}

 
    }
   
