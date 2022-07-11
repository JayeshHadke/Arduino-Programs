#include <Servo.h>

Servo myservo;
/*
servo motor -
    red - vcc 5v black - gnd orange - any analog pin(11, 10, 9, 6, 5, 3) - 11

potentiometer -
    left and right legs for Vcc and GND
    middle leg for output(analog) - A0
*/

int inPin = A0;
int outPin = 11;

void setup()
{
    myservo.attach(outPin);
    Serial.begin(9600);
}
void loop()
{
    int val = analogRead(inPin);
    Serial.println("Value : %d", val);
    val = map(val, 0, 1024, 0, 180);
    Serial.println("Mapped Value : %d", val);
    myservo.write(val);
    delay(250);
}