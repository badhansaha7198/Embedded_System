int p=12;
void setup() {
  pinMode(12,OUTPUT);
}

void loop() {
/*
  analogWrite(p,255);
  delay(1000);
  analogWrite(p,200);
  delay(1000);
  analogWrite(p,150);
  delay(1000);
  analogWrite(p,100);
  delay(1000);
  analogWrite(p,50);
  delay(1000);
  analogWrite(p,0);
  delay(1000);
*/
  for(int i=0; i<=1000; i=i+10)
  {
    analogWrite(p,i);
    delay(1000);
  }   
}
