// C++ code
//
int nota = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a sua nota?: ");//mostra a msg na tela
   while ( !Serial.available() );// espera o usuario dar <Enter>
  nota = Serial.parseInt();//Transforma a nota digitados em numero
  
  if(nota >= 6 ){//se retornar verdadeiro - losango sim
  Serial.println("aprovado");
  } else {//falso - losango nao
  Serial.println("reprovado");
  }    
   
  delay(1000);
      
 }