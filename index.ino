// C++ code
int redLED = 13;
int dit = 100;
int dat = 300;
int longW = 1000;



void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    delay(dit);
    digitalWrite(redLED, LOW);
    delay(dit);
  }
  
  for (int i = 0; i < 3; i++) {
    digitalWrite(redLED, HIGH);
    delay(dat);
    digitalWrite(redLED, LOW);
    delay(dat);
  }
  
  delay(longW);


}