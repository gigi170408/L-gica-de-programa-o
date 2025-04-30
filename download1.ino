// C++ code
//
String cor = " ";

void setup()
{
 Serial.begin(9600);
}

void loop()
{
Serial.println("digite verde ou vermelho: ");//mostra a msg na tela
   while ( !Serial.available() );// espera o usuario dar <Enter>
  cor = Serial.readStringring();//Transforma a cor em texto
  
  
  if(cor == "vermelho" ){//se retornar verdadeiro - losango sim
  Serial.println("pare");
  } else {
  Serial.println("siga");
  }
   delay (2000);
}