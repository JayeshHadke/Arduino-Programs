/*
Bluetooth HC05 have 6pins
connect HC05 - Board
        Vcc  -  Vcc
        GND  -  GND
        RX   -  TX
        TX   -  RX

avoid the first and last pins of HC05

*/

int led = 13;
void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}
void loop()
{
    while (Serial.available() > 0)
    {
        char val = Serial.read();
        if (val == 'Z')
        {
            digitalWrite(led, HIGH);
        }
        else if (val == 'z')
        {
            digitalWrite(led, LOW);
        }
    }
}