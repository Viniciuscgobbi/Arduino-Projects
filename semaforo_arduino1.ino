// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(13, 1);
  digitalWrite(10, 0);
  digitalWrite(8, 1);
  delay(6000);
  digitalWrite(8, 0);
  digitalWrite(9, 1);
  delay(2000);
  digitalWrite(10, 1);
  digitalWrite(9, 0);
  digitalWrite(13, 0);
  digitalWrite(11, 1);
  delay(6000);
  digitalWrite(12, 1);
  digitalWrite(11, 0);
  delay(2000);
  digitalWrite(12, 0);
}
