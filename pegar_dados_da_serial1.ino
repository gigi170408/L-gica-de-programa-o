// C++ code
//Variaveis
String nome = "";
String sobrenome = "";
int idade = 0;

void setup()
{
  Serial.begin(9600);
} 

void loop()
{
  //pedir os dados para o usuario
  //nome
  Serial.println("Qual e o seu nome?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuario digitar
  nome = Serial.readString();//guarda o texto que o usuario digitou na variavel nome
  
    Serial.println("Qual e o seu sobrenome?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuario digitar
  sobrenome = Serial.readString();//guarda o texto que o usuario digitou na variavel nome
  
   Serial.println("Qual e a sua idade?");//mostra uma mensagem na tela (via serial)
  while( ! Serial.available() );// espera o usuario digitar
  idade = Serial.parseInt();//converte o texto que o usuario digitou para inteiro, antes de guardar na variavel
  
  //exibir os dados na serial
  Serial.println("Nome Informado: " + nome);
  Serial.println("Sobrenome Informado: " + sobrenome);
  Serial.println("Idade Informada: " + String(idade));
  Serial.println();//escreve uma linha vazia
}