// Inicialização de Variáveis

//tipoDeDado nomeDaVariavel = valorInicial;
int idade = 15.987;//declara/cria a variável idade e já inicia com o valor 15
String nome = "Gi";
String segundoNome = "Lima";
float nota = 9.5;

void setup()
  
{
  Serial.begin(9600);//inicia a serial
}

void loop()
{
  Serial.println(idade);//imprime o valor da variável
  idade = idade + 1;//15 + 1
  Serial.println(idade);//16
  
  Serial.print(nome + " ");//imprime o valor da variável nome junto com um espaço vazio
  Serial.println(segundoNome);
  
  delay(1000);
}