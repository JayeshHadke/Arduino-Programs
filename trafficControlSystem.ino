int cRed = 13;
int cYellow = 12;
int cGreen = 11;

int pGreen = 10;
int pRed = 9;

int button = 8;

unsigned long crossTime = 5000;

void setup()
{
    pinMode(cRed, OUTPUT);
    pinMode(cYellow, OUTPUT);
    pinMode(cGreen, OUTPUT);

    pinMode(pGreen, OUTPUT);
    pinMode(pRed, OUTPUT);

    pinMode(button, INPUT);

    digitalWrite(cGreen, HIGH);
    digitalWrite(pRed, HIGH);
}

void loop()
{
    int state = digitalRead(button);
    if (state == HIGH && ((millis() - crossTime) > 5000))
    {
        digitalWrite(cYellow, HIGH);
        digitalWrite(cGreen, LOW);
        delay(2000);
        digitalWrite(cYellow, LOW);
        digitalWrite(cRed, HIGH);

        digitalWrite(pRed, LOW);
        digitalWrite(pGreen, HIGH);
        delay(5000);

        for (int i = 0; i < 10; i++)
        {
            digitalWrite(pGreen, LOW);
            delay(500);
            digitalWrite(pGreen, HIGH);
        }

        digitalWrite(pGreen, LOW);
        digitalWrite(pRed, HIGH);

        digitalWrite(cRed, LOW);
        digitalWrite(cGreen, HIGH);

        crossTime = millis();
    }
}