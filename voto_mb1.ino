// Faca um programa que peca a idade do usuario e informe se ele ja pode votar
//baseado na seguinte regra
//a partir de 16 anos: voto obrigatorio
//abaixo de 16 anos: sem idade para votar
//Variaveis
int idade = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 Serial.println("digite a sua idade: ");//mostra a msg na tela
   while ( !Serial.available() );// espera o usuario dar <Enter>
  idade = Serial.parseFloat();//Transforma a idade digitados em numero
  
  
  if(idade >= 16 ){//se retornar verdadeiro - losango sim
  Serial.println("voto obrigatorio");
  } else {//falso - losango nao
  Serial.println("sem idade para votar");
}
 delay (2000);
}