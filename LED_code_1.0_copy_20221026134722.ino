const int transistorW = 6;
const int transistorR = 2;

void setup()
{
  pinMode (transistorW, OUTPUT);
  pinMode (transistorR, OUTPUT);
}

void loop()
{
  digitalWrite (transistorR, HIGH);

  digitalWrite (transistorW, HIGH);
  delay(500);
  digitalWrite (transistorW, LOW);
  delay(500);
  digitalWrite (transistorW, HIGH);
  delay(500);
  digitalWrite (transistorW, LOW);
  delay(500);
  digitalWrite (transistorW, HIGH);
  delay(500);
  digitalWrite (transistorW, LOW);
  delay(1500);


}
