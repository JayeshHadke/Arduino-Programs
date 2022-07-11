// Potentio Meter Wapper pin connects to Analog pin A0
int led1 = 13;
int led2 = 12;

void setup()
{
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop()
{
    int var = analogRead(A0);
    int l1 = map(var, 0, 1023, 0, 255);
    analogWrite(led1, l1);
    int l2 = map(var, 0, 1023, 255, 0);
    analogWrite(led2, l2);
}
