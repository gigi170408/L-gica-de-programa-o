//Faça um programa que receba o nome, o peso e a altura de uma
//pessoa. Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso
//(altura * altura).

String nome = " ";
float peso = 0;
float altura = 0;
float IMC =0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println ("Qual e o seu nome?");//mostre a msg na tela
  while ( !Serial.available() );// espera o usuario dar <Enter>
  nome = Serial.readStringUntil('\n');//transforma o nome em texto
  
  Serial.println ("Digite o seu peso");//mostre a msg na tela
  while ( !Serial.available() );//espera o usuario dar <Enter>
  peso = Serial.parseFloat();
  
    
  Serial.println ("Digite a sua altura");//mostre a msg na tela
  while ( !Serial.available() );//espera o usuario dar <Enter>
  altura = Serial.parseFloat();
  
  
 //Processamento
  IMC = peso / (altura * altura);
    
 //Saida
  Serial.println("nome: " + String(nome) );//imprime o texto 
  Serial.println("peso: " + String(peso) );//imprime o texto 
  Serial.println("altura: " + String(altura) );//imprime o texto 
  Serial.println("IMC: " + String(IMC) );//imprime o texto 
  
  
  delay(1000);
  
}
