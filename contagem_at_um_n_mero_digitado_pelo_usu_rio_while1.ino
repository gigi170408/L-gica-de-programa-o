// C++ code
//
void setup()
{
 Serial.begin(9600);
   
   int numero = 0;
  int contadorWhile = 0;
   numero = Serial.parseInt();
  
  
  Serial.println("Digite um numero");
  while(!Serial.available());
  numero = Serial.parseInt();
  
  while(contadorWhile <= numero){
    Serial.println(contadorWhile);
   contadorWhile+=1;
    
    
  } 
}

void loop()
{

}