// C++ code
//

int ledVerde = 13;
int ledAmarelo = 11;
int ledVermelho = 9;
int escolhaDaOperacao;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledVerde, OUTPUT);
  pinMode( ledAmarelo, OUTPUT);
  pinMode( ledVermelho, OUTPUT);
  
   do{
    Serial.println("Bem-vindo(a) estrutura de LED");
    Serial.println("Escolha uma das opcoes abaixo");
    Serial.println("1 - Ligar Led Verde");
    Serial.println("2 - Desligar Led Verde");
    Serial.println("3 - Ligar Led Amarelo");
    Serial.println("4 - Desligar Led Amarelo");
    Serial.println("5 - Ligar Led Vermelho");
    Serial.println("6 - Desligar Led Vermelho");
    Serial.println("7 - Ligar Todos os Leds");
    Serial.println("8 - Desligar Todos os Leds");
    Serial.println("0 - Sair");
    

    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();

    switch(escolhaDaOperacao){
      
     case 1:
      digitalWrite(ledVerde, HIGH);
      break;

      case 2:
       digitalWrite(ledVerde, LOW);
      break;

      case 3:
      digitalWrite(ledAmarelo, HIGH);
      break;

      case 4:
     digitalWrite(ledAmarelo, LOW);
      break;
      
       case 5:
       digitalWrite(ledVermelho, HIGH);
      break;

      case 6:
     digitalWrite(ledVermelho, LOW);
        break;

      case 7:
      digitalWrite(ledVerde, HIGH);
       digitalWrite(ledAmarelo, HIGH);
         digitalWrite(ledVermelho, HIGH);
      break;

      case 8:
      digitalWrite(ledVerde, LOW);
       digitalWrite(ledAmarelo, LOW);
         digitalWrite(ledVermelho, LOW);
      break;
      
      case 0:
      int retornoFuncaoSair;
      break;


      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 8 ou 0");

    }

} while(escolhaDaOperacao != 0);

  digitalWrite(ledVerde, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite(ledVerde, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite( ledAmarelo, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite( ledAmarelo, LOW);
  
  delay(500); // Wait for 1000 millisecond(s)
   digitalWrite( ledVermelho, HIGH);
  delay(500); // Wait for 1000 millisecond(s)
  digitalWrite( ledVermelho, LOW);
  delay(500); // Wait for 1000 millisecond(s)

}


void loop(){

} 