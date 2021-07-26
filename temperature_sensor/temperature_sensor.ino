int t=0;
void setup() {
  pinMode(t,INPUT);
  Serial.begin(9600);
}

void loop() {
  float v, mv, cel;
  v = analogRead(t);
  mv = (v / 1024.0) * 5000; 
  cel = mv / 10;
  Serial.print("The temperature is ");
  Serial.print(cel);
  Serial.print(" Degree Centigrade.");
  Serial.println();
  delay(1000);
}
