#include <LiquidCrystal.h>
LiquidCrystal led(12, 11, 5, 4, 3, 2);
                 //RS, EN, DB4, DB5, BD6, DB7
void setup() {
  led.begin(16,2);
}

void loop() {
  led.setCursor(0,0);
  led.print("My name is");
  led.setCursor(0,1);
  led.print("Badhan Saha.");
}
