/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 28 May 2015
 by Michael C. Miller
 modified 8 Nov 2013
 by Scott Fitzgerald

 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo myservo,myservo2;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 

void setup() 
{ 
  myservo.attach(2);  // attaches the servo on GIO2 to the servo object = D4
  myservo2.attach(4); //D2
  
} 
 
void loop() 
{ 
  int pos;
//  myservo.write(0);
//
  for(pos = 20; pos <= 90; pos += 1) // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(pos);  
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 90; pos>=20; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    myservo2.write(pos);  
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 

