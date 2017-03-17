#include"TimerOne.h"
int count=0;
int rpm;
int datapin=2;
int motorpin=11;
void rpm_motor(){count++;}

void setup() { Serial.begin(9600);
               pinMode(datapin,INPUT);

               pinMode(motorpin,OUTPUT);
               Timer1.initialize(100000);

               attachInterrupt(0,rpm_motor,FALLING);
               Timer1.attachInterrupt(rpm_motor); 


// put your setup code here, to run once:

}

void loop() {
  analogWrite(motorpin,255);
  
     rpm=count*600;
     Serial.print(rpm);
     count=0;
 
 
    
  // put your main code here, to run repeatedly:}
