int button1Val;
int button2Val;
int button3Val;
int button4Val;

#include <Servo.h>

Servo myservo1; //creating first servo variable
const int button1Pin= 10;

Servo myservo2; //second servo
const int button2Pin= 11;

Servo myservo3; //third servo
const int button3Pin= 12;

Servo myservo4; //fourth servo
const int button4Pin= 13;

void setup() {
 myservo1.attach(9); //attaching servo 1 to pin 9
 pinMode(button1Pin, INPUT);  
 myservo2.attach(8); //attaching servo 2 to pin 8
 pinMode(button2Pin, INPUT);   
 myservo3.attach(7); //attaching servo 3 to pin 7
 pinMode(button3Pin, INPUT);  
 myservo4.attach(6); //attaching servo 4 to pin 6
 pinMode(button4Pin, INPUT);                                           
}

void loop() {
  // let down your hair interaction
  button1Val = digitalRead(button1Pin);

 if(digitalRead(button1Pin)== HIGH){
   myservo1.write(90); //telling servo what angle to turn

 } else {
   myservo1.write(0);
 }

 //prince love interaction
  button2Val = digitalRead(button2Pin);

  if(digitalRead(button2Pin)== HIGH){
    myservo2.write(180); // prince falls off board

  }else {
    myservo2.write(90);
  }

 //axe interaction
 button3Val = digitalRead(button3Pin);

 if(digitalRead(button3Pin)==HIGH) {
   myservo3.write(0); //pull string to pull prince down

 }else {
   myservo3.write(90);
 }

 //face change interaction
 button4Val = digitalRead(button4Pin);

 if(digitalRead(button4Pin)== HIGH) {
   myservo4.write(180); //face spins 

 }else { 
   myservo4.write(0);
 }
}
