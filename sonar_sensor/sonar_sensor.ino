int trig=2;
int echo=3;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  long duration;
  float distance;
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = (duration / 2) / 29.1; //cm
  Serial.print("Distance is = ");
  Serial.print(distance);
  Serial.print("cm.");
  Serial.println();
}
