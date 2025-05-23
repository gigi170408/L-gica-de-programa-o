// C++ code
//

int ledIntegrado = 13;
int ledIntegradoVermelho = 11;
int ledIntegradoAmarelo = 9;
void setup()
{
  pinMode(ledIntegrado, OUTPUT);
  pinMode(ledIntegradoVermelho, OUTPUT);
  pinMode(ledIntegradoAmarelo, OUTPUT);
}

void loop()
{
  digitalWrite(ledIntegrado, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledIntegrado, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledIntegradoVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledIntegradoVermelho, LOW);
  
  delay(500); // Wait for 1000 millisecond(s)
   digitalWrite(ledIntegradoAmarelo, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledIntegradoAmarelo, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}