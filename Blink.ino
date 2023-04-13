int buttonVal;

#include <Servo.h>

Servo myservo; //creating servo variable
const int buttonPin= 10;

void setup() {
 myservo.attach(9); //attaching servo to pin 9 or wtv pin
 pinMode(buttonPin, INPUT);
}

void loop() {
  buttonVal = digitalRead(buttonPin);

 if(digitalRead(buttonPin)== HIGH){
   myservo.write(90); //telling servo what angle to turn

 } else {
   myservo.write(0);
 }

}
