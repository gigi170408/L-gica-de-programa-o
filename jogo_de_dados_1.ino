/*
	Função que desenha o cabaçalho, pula uma linha e aguarda 
    500 milissegundos a finalizar
*/

int ledVerde = 10;
int ledVermelho = 7;
int ledAzul1 = 4;
int ledAzul2 = 3;
int ledAzul3 = 2;
int numeroDeAcertos = 0;

void desenhaCabecalho()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);
  pinMode(ledAzul3, OUTPUT);


  Serial.println("--- PROGRAMA JOGO DE DADOS ---");
  Serial.println();
  delay(500);
}

/*
	Desenha quantos pontinhos o usuário quiser
    se o usuário não passar nada, desenha 5 pontinhos
    o tempo também é opcional, caso não passar assune 700 milessegundos
*/
void desenhaPontinhos(int qtdPontos = 5, int tempo = 700)
{
  for(int i = 1; i <= qtdPontos; i++)
  {
    Serial.print(".");
    delay(tempo);
  }
}

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));//inicia e normaliza a porta randômica para evitar pega o mesmo valor
}

void loop()
{


  desenhaCabecalho();//desenha o cabeçalho na tela

  //solicita o palpite do usuário
  Serial.println("Digite um palpite entre 1 e 6:");
  while(!Serial.available());//espera o usuário digitar
  int palpite = Serial.parseInt();//guarda o palpite do usuário

  //jogar o dado - sorteia um número randômico/aleatório de 1 até 7 - 1, ou seja, 6
  int numeroSorteado = random(1, 7);//número entre 1 e 6

  Serial.print("Jogando o dado ");

  desenhaPontinhos();

  Serial.println();
  Serial.println();
  Serial.println("Seu palpite: " + String(palpite));//exibir o palpite do usuário 
  Serial.println("Numero Sorteado: " + String(numeroSorteado));//exibir o número sorteado

  //valida o resultado
  if(palpite == numeroSorteado)

  {
    Serial.println("Parabens, voce acertou!!");
    digitalWrite(ledVerde, HIGH);
    delay(700);
    digitalWrite(ledVerde, LOW);

    numeroDeAcertos++;
  }else{
    Serial.println("Que pena, tente outra vez!!");
    digitalWrite(ledVermelho, HIGH);
    delay(700);
    digitalWrite(ledVermelho, LOW);

  }


  if(numeroDeAcertos == 1){
    digitalWrite(ledAzul1, HIGH);
  }
  else if(numeroDeAcertos == 2){
    digitalWrite(ledAzul2, HIGH);
  }
  else if (numeroDeAcertos == 3){
    digitalWrite(ledAzul3, HIGH);
  }
  delay(5000);
  digitalWrite(ledAzul1, LOW);
  digitalWrite(ledAzul2,LOW);
  digitalWrite(ledAzul3, LOW);


  Serial.println("PARABENS, A PORTA DO REINO SE ABRIU!");
  Serial.println("Reiniciando o programa");

  Serial.println();
  delay(700);
}
/*

  else if(numeroDeAcertos == 3{
    //acende o led 3
    //pausa 4 segundos
    //apaga todos os 3 leds azuis
    //fecha a porta
    //Serial.println("Reiniciando o programa");
  }

  */

// Logica para acender o led azul








