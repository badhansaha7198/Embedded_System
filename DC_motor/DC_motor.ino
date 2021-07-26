int lm1=2;
int lm2=3;
int rm1=4;
int rm2=5;
void setup() {
  pinMode(lm1, OUTPUT);
  pinMode(lm2, OUTPUT);
  pinMode(rm1, OUTPUT);
  pinMode(rm2, OUTPUT);
}

void loop() {
  //Forward 
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);

  //Backward 
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, HIGH);
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, HIGH);

  //Right turn
  digitalWrite(lm1, HIGH);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, LOW);
  digitalWrite(rm2, LOW);

  //Left turn 
  digitalWrite(lm1, LOW);
  digitalWrite(lm2, LOW);
  digitalWrite(rm1, HIGH);
  digitalWrite(rm2, LOW);
}
