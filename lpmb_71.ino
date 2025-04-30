//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o
//salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.
//
//Declaracao de variaveis

String nome = " ";
String cargo = " ";
float salario = 0;
float salarioNovo = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
 Serial.println("Qual o seu nome?");//mostra a msg na tela
 while ( !Serial.available() );// espera o usuario dar <Enter>
 nome = Serial.readString();//Transforma o nome digitados em texto
  
 Serial.println("Qual o seu cargo?");//mostra a msg na tela
 while ( !Serial.available() );// espera o usuario dar <Enter>
 cargo = Serial.readString();//Transforma o nome digitados em texto
  
 Serial.println("Qual o valor do seu salario?");//mostra a msg na tela
 while ( !Serial.available() );// espera o usuario dar <Enter>
 salario = Serial.parseFloat();//Transforma o numero digitados em numero
  
 //Processamento
  
 (salarioNovo = salario * 1.10);
  
 //Saida 
  Serial.println ("nome: " + String(nome));
  Serial.println ("cargo: " + String(cargo));
  Serial.print ("salarioNovo: ");
  Serial.println (salarioNovo, 2);
  
  delay(1000); // Wait for 1000 millisecond(s)
   
}