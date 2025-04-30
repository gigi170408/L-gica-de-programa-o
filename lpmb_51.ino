//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.
//
//Declaracao de variaveis
float centimetros = 0;
float polegadas = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada 
  Serial.println("Digite os centimetros: ");//mostra a msg na tela
  while ( !Serial.available() );// espera o usuario dar <Enter>
  centimetros = Serial.parseFloat();//Transforma os centimetros digitados em numero
  
  //Processamento
  polegadas = centimetros / 2.54;
    
  //Saida
  Serial.println ("Polegadas: " + String(polegadas));
  
  delay(1000); // Wait for 1000 millisecond(s)
}