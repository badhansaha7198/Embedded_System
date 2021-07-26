#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //rs,en,db4,db5,db6,db7
int t=0;  
            
void setup() {
  pinMode(t, INPUT);  
  lcd.begin(16,2);
}

void loop() {
  float v, mv, cel, fah;
  v = analogRead(t);
  mv = (v/1024.0)*5000;
  cel = mv/10; 
  fah = (cel*(9/5))+32;
  lcd.setCursor(0,0);
  lcd.print(cel);
  lcd.setCursor(7,0);
  lcd.print("deg Celcuis");
  lcd.setCursor(0,1);
  lcd.print(fah);
  lcd.setCursor(7,1);
  lcd.print("deg Fah");
}
