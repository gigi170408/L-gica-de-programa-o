// C++ code
//Variaveis

int idade = 0;

void setup()
{
 Serial.begin(9600);
 Serial.println("Cinema da Gibs");
 Serial.println();

  Serial.println("Quantos anos voce tem");
  while ( !Serial.available() );
  idade = Serial.parseInt();
  Serial.println();
  if(idade >= 0 && idade <=9){
    Serial.println("Apenas filmes infantis");
  } else if(idade >= 10 && idade <= 13) {
    Serial.println("Filmes infantis e infantojuvenis");
  } else if(idade >= 14 && idade <= 17) {
    Serial.println("Filmes ate classificacao 14 anos");
  } else if(idade >= 18 && idade <= 59) {
    Serial.println("Todos os tipos de filmes");
  } else if(idade >= 60 ) {
    Serial.println("Todos os tipos de filmes + desconto para idosos");
     } else if(idade >= 120 && -0 ) {
    Serial.println("Idade invalida, verifica os seus dados");
  }
  }


void loop()
{
  delay(1000);
}