//
//
int idade = 4;

void setup()
{
  Serial.begin(9600); 

  Serial.println("Academia do Davi");
  Serial.println();

  Serial.println("Seu sobrinho tem: " + String(idade)) + " anos";
  if(idade >= 5 && idade <8){
    Serial.println("Cadastrado na categoria infantil");
  } else if(idade >= 8 && idade < 12) {
    Serial.println("Cadastrado na categoria cadete");
  } else if(idade >= 12 && idade < 15) {
    Serial.println("Cadastrado na categoria juvenil");
  } else if(idade >= 15 && idade < 18) {
    Serial.println("Cadastrado na categoria junior");
  } else if(idade >= 18 ) {
    Serial.println("Cadastrado na categoria adulto");
  } else {
    Serial.println("Nao pode participar de esportes na categoria do Davi");
  }


}//fim do setup 

void loop()

{
}//fim do loop

