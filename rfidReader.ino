/*
RFID MFRC-522
  MFRC522 - Board
    SDA   - 10
    SCK   - 13
    MOSI  - 11
    MISO  - 12
    IRQ   - --
    GND   - GND
    RST   - 9
    Vcc   - 3.3V

*/

#include <SPI.h>
#include <MFRC522.h>

int ss_pin = 10;
int rst_pin = 9;

MFRC522 mfrc522(ss_pin, rst_pin);

void setup()
{
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCI_Init();
}
void loop()
{
  if (!mfrc533.PICC_IsNewCardPresent() || !mfrc533.PICC_ReadCardSerial())
    return

        string content = "";
  for (int i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }

  content.toUpperCase();
  if (content.substring(1) =='')
  {
  }
  else
  {
  }
}
