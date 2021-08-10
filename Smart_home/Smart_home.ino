#include<Servo.h>
Servo servoMain;
#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //rs,en,db4,db5,db6,db7
int t=0;  
int lm1=6; //in1 dc motor
int lm2=7; //in2 dc motor 
int sensor=9; 
int state=LOW;
int value=0;
int ldr=A1;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(t, INPUT);  
  lcd.begin(16,2);
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(sensor, INPUT);
  servoMain.attach(10);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  //temperature sensor
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
  
  // dc motor
  if(cel>=25.00)
  {
    digitalWrite(lm1, LOW);
    digitalWrite(lm2, HIGH);
  }
  else
  {
    digitalWrite(lm1, LOW);
    digitalWrite(lm2, LOW);
  }
  //pir sensor & servo motor
  value=digitalRead(sensor);
  if(value == HIGH){
    if(state == LOW){
      servoMain.write(90);
      delay(1000);
      state = HIGH;
      }
    }
  else {
    if(state == HIGH){
      servoMain.write(0);
      delay(1000);
      state = LOW;
      }
    } 
  
  //led and ldr sensor
  int ldrstatus= analogRead(ldr);
  if(ldrstatus<=300)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000); 
  }
  else
  {
   digitalWrite(LED_BUILTIN, LOW);    
   delay(1000);
  }
}
