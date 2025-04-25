//Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//DEclaracao de Variaveis
int idade = 0;
int idadeMeses = 0;
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
 
{
  //Entrada
  Serial.println("Digite a sua idade em anos");//mostra msg na tela
  while( !Serial.available() );// espera o usuario dar <Enter>
  idade = Serial.parseInt();//transforma a idade digitada em numero
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idadeDias * 24;
  idadeMinutos = idadeHoras * 60;
    
  
  //Saida
  Serial.println( "Idade em meses: " + String(idadeMeses) );//imprime o texto
  Serial.println( "Idade em dias: " + String(idadeDias) );//imprime o texto
  Serial.println( "Idade em horas: " + String(idadeHoras) );//imprime o texto
  Serial.println( "Idade em minutos: " + String(idadeMinutos) );//imprime o texto
 
  
  delay(1000);
  
  
  
}