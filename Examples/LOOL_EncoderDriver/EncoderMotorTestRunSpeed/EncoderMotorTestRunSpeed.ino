#include "LOOL_Smart.h"
#include <Wire.h>
#include <SoftwareSerial.h>

LOOL_EncoderMotor motor2(0x09, SLOT2);   //  motor at slot2

void setup()
{
  motor2.begin();
  Serial.begin(9600);
}

void loop()
{
  motor2.runSpeed(-150);
  delay(3000);
  motor2.runSpeed(0);
  delay(2000);
}

