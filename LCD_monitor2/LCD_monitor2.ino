#include <LiquidCrystal.h>
char names[4][25] = {"Pritom","Shafiqul","Sunit","Badhan"};
LiquidCrystal led(12, 11, 5, 4, 3, 2);
                 //RS, EN, DB4, DB5, BD6, DB7
void setup() {
  led.begin(16,2);
}

void loop() {
  for(int j=0; j<=4; j++){
    for(int i=0; i<16; i++){
      led.setCursor(3,0);
      led.print("Rectangle");
      led.setCursor(i,1);
      led.print(names[j]);
      delay(200);
      led.clear();
      }
    }
}
