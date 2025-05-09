// Faça um programa receba dois valores e imprima qual é o maior número
//digitado.
//
float N1 = 0;
float N2 = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite um valor");
  while (!Serial.available());
  N1 = Serial.parseFloat();
  
  Serial.println("Digite outro valor");
  while (!Serial.available());
  N2 = Serial.parseFloat();
  
  if(N1>N2)
  Serial.println ("O primeiro numero eh maior");
 else {
  Serial.println ("O segundo numero eh maior");
}
  
  delay(1000);
}