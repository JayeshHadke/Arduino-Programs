/*
PIR Sensor - Total 3 Pins
        PIR - Board
        Vcc - Vcc
        Out - 13
        GND - GND

*/

int led = 13;
int sensor = 12;

void setup()
{
    pinMode(sensor, INPUT);
    pinMode(led, OUTPUT);
}
void loop()
{
    int val = digitalRead(sensor);
    if (val == HIGH)
    {
        digitalWrite(led, HIGH);
    }
    else
    {
        digitalWrite(led, LOW);
    }
}
