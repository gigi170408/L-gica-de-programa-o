// C++ code
//
int tabuadaEscolhida = 0;
int resultado = 0;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Digite a tabuada que voce deseja ver");
  while(!Serial.available());
  tabuadaEscolhida = Serial.parseInt();

  for( int contador = 1; contador <= 10; contador++){

    resultado = tabuadaEscolhida * contador; 

  Serial.print(tabuadaEscolhida);
  Serial.print(" X ");
  Serial.print(contador);
  Serial.print(" = ");
  Serial.println(resultado);
}
}
void loop()

{
}