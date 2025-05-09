// C++ code
//
void setup()
{
 Serial.begin (9600);
  
 Serial.println("informe um numero par");
  while(!Serial.available() ){}
  int numero = Serial.parseInt();
  
  if(numero %2 == 0){
  Serial.println("O numero digitado e par: " + String(numero));
  }

Serial.println();
Serial.println("Obrigado por ultilizar o programa PAR");
}

void loop(){

 
  delay(1000); // Wait for 1000 millisecond(s)
}