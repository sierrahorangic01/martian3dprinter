#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include <Servo.h>
#include <math.h>
Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 

Servo servo1;
Servo servo2;

int x = 0;


void setup() {
  Serial.begin(9600);        
   
  Serial.println("dog");


  AFMS.begin();  
  servo1.attach(10);
  servo2.attach(9);

 servo1.write(90); // set servos to original position
servo2.write(90);
delay (8000);
servo2.write (120);
servo1.write (60);
delay(600);
servo1.detach();
servo2.detach();
}
void loop() {
  delay (2000000);
  }


 
 
    
   
