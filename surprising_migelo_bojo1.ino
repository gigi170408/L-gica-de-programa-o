//Calcule a média entre DUAS notas.
//Verifique se o aluno foi APROVADO.
//Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequência É MAIOR OU IGUAL 75%.
//Caso contrário, exiba se foi reprovado por nota
//Exiba se foi REPROVADO por frequência.
//Exiba se foi REPROVADO 
//frequência e média da nota .
//Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!".


//Usei de exemplo a atividade "classificacao etaria"

int nota1 = 0;
int nota2 = 0;
String frequencia = "100%";
String MEDIA = " ";

void setup()
{
  Serial.begin(9600);

  Serial.println("Digite a sua nota1: ");
  while (!Serial.available() );
  nota1 = Serial.parseInt();

  Serial.println("Digite a sua nota2: ");
  while (!Serial.available() );
  nota2 = Serial.parseInt();
  Serial.println();
  
  {
  MEDIA = (nota1 + nota2 / 2);
  Serial.println("A sua media eh: " + String(MEDIA));
  }


  if(nota1 >=6 && nota1 <=9){
    Serial.println("APROVADO");
  } else if(nota1 <=5 ) {
    Serial.println("REPROVADO POR NOTA");
  } else if(nota1 == 10 && nota2 == 10){
    Serial.println("PARABENS!! NOTA MAXIMA");

  }  else if(nota2 >=6 && nota2 <=9){
    Serial.println("APROVADO");
  }  else if(nota2 <=5 ) {
    Serial.println("REPROVADO POR NOTA");
  }
}



void loop()
{
  delay(1000);
}