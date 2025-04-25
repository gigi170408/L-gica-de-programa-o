//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:
//a. A idade dessa pessoa
//b. Essa idade convertida em semana

//Declaracao de Variaveis
int idade = 0;
int anoDeNascimento = 0;
int anoAtual = 0;
int idadeSemanas = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite o ano de nascimento");//mostra a msg na tela
  while ( !Serial.available() );// espera o usuario dar <Enter>
  anoDeNascimento = Serial.parseInt();//Transforma o ano digitado em numero
  
  Serial.println("Digite o ano atual");//mostra a msg na tela
  while ( !Serial.available() );// espera o usuario dar <Enter>
  anoAtual = Serial.parseInt();//Transforma o ano digitado em numero
   
 //Processamento
  idade = anoAtual - anoDeNascimento; 
  idadeSemanas = idade * 52;
  
 //Saida
  Serial.println("Idade: " + String(idade) );//imprime o texto 
  Serial.println("Idade em semanas: " + String(idadeSemanas) );//imprime o texto 
  
  delay(1000);
}