#include <Wire.h>
#include "drive.h"


drive KT(11,9,6,10,3,5);

void setup()
{}

void loop()
{
  KT.forwardFast();
  delay(5000);
  KT.backFast();
  delay(5000);

}
