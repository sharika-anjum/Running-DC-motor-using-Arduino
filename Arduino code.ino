const int i1=5;
const int i2=7;

void setup() {
  pinMode(i1,OUTPUT);
  pinMode(i2,OUTPUT);
}

void loop() {
  digitalWrite(i1,HIGH);
  digitalWrite(i2,LOW);
  delay(5000);

  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  delay(3000);

  digitalWrite(i1,LOW);
  digitalWrite(i2,HIGH);
  delay(10000);

  digitalWrite(i1,LOW);
  digitalWrite(i2,LOW);
  delay(3000);

}