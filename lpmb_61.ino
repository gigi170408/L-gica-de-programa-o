//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.
//
//Declaracao de variaveis

float centimetros = 0;
float polegadas = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
 Serial.println("Digite as polegadas: ");//mostre a msg na tela
 while ( !Serial.available() );// espera o usuario dar <Enter>
 polegadas = Serial.parseFloat();//Transforma os polegadas digitadas em numero
  
 //Processamento
  centimetros = polegadas * 2.54;
    
  //Saida
  Serial.println ("centimetros: " + String(centimetros));
  
  delay(1000); // Wait for 1000 millisecond(s)
}