

#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <Servo.h>
int myCounter = 0;
int x = 0;
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 1);
Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);           
  Serial.println("rack and wrist");


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




{
 {if(myCounter<3) {
    Serial.println("single coil steps");
  myMotor->step(272, FORWARD, SINGLE); 
delay(200);
 myMotor->step(563, BACKWARD, SINGLE); 
   myMotor->step(272, FORWARD, SINGLE); 
    myCounter = myCounter + 1;}

delay(6000);}


}   }
