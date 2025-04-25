// Faça um programa que receba um número e exiba o seu dobro.
//

//Declaracao de variaveis
int numero = 0;
int numeroEmDobro = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite um numero");//mostra a msg na tela
  while( !Serial.available() );//espera o usuario dar <Enter>
  
  //Processamento
  numero = numero * 2;
  
  //Saida
  Serial.println("Dobro do numero: " + String(numeroEmDobro) );//imprime o texto
  
  delay(1000);
}