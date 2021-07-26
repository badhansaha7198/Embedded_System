int p=12;
int s=7;
void setup() {
  pinMode(12, OUTPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop() {
  int v;
  v = digitalRead(s);
  Serial.println(v);
  if(v==1)
  {
    digitalWrite(p,LOW);
  }
  else
  {
    digitalWrite(p,HIGH);
  }
}
