// C++ code
//Declaracao de variaveis
int idade = 0;
void setup()
{
Serial.begin(9600);
}

void loop()
{
   Serial.println("Qual a sua idade?: ");//mostra a msg na tela
   while ( !Serial.available() );// espera o usuario dar <Enter>
  idade = Serial.parseFloat();//Transforma a idade digitados em numero
  
    if(idade >= 18 ){//se retornar verdadeiro - losango sim
  Serial.println("maior de idade");
  } else {//falso - losango nao
  Serial.println("menor de idade");
}
  
  delay(1000); // Wait for 1000 millisecond(s)
}