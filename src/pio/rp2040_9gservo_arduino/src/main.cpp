#include <Arduino.h>
#include <Servo.h>

Servo myservo;
int angle = 10;
int pinInput = 28;
int opPin = 4;
int maxOp = 90;
int delaytime = 10;
int input = 0;
void setup() {
  Serial.begin(115200);
  myservo.attach(opPin);
}
void loop() 
{ 
  if (Serial.available()) {
      input = Serial.parseInt();
    if (input >= 0 && input <= 280) {
      //angle = input;
      myservo.write(input);
    }
  }
  //myservo.write(angle);
  //Serial.println(analogRead(pinInput));
  delay(delaytime);
}