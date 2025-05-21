/*
Faca um programa para simular a organizacao 
de uma festa para o cadstro dos convidados,
registrando as seguintes infos:

* Nome
* email
* idade

O programa deve solicitar os dados via monitoramento serial,
armazena-los em vetores, e ao final do cadastro exibir uma listagem completa 
dos convidados
OBS: A festa sera vip para apenas 7 convidados
*/
String nome[7];
String email[7];
int idade[7];

void setup()
{
  Serial.begin(9600);
  Serial.println("****** PROGRAMA CADASTRO DE COVIDADOS ******");
}

void loop()
{
  for(int i = 0; i < 7; i++) 
  { //cadastra um nome
    Serial.println("Digite o nome");
    while(!Serial.available());
    nome[i] = Serial.readString();

    //cadastra o email
    Serial.println("Digite o email");
    while(!Serial.available());
    email[i] = Serial.readString();

    //cadastra a idade
    Serial.println("Digite a idade");
    while(!Serial.available());
    idade[i] = Serial.parseInt();

  }

  Serial.println("****** Listagem dos convidados ******");
  Serial.println();

  for(int i = 0; i < 7; i++){
    Serial.println("Nome: " + String(nome[i]));
    Serial.println("E-Mail: " + String(email[i]));
    Serial.println("Idade: " + String(idade[i]));
    Serial.println("___");
  }
}