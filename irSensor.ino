
/*

Sensor Pins - Total 3 pins
        Sensor - Board
          Vcc  -  Vcc 5v
          GND  -  GND
          OUT  -  12

*/

int sensor = 12;
int led = 13;

void setup()
{
    pinMode(sensor, INPUT);
    pinMode(led, OUTPUT);
}
void loop()
{
    if (digitalRead(sensor) == HIGH)
    {
        digitalWrite(led, LOW);
    }
    else
    {
        digialWrite(led, HIGH);
    }
}