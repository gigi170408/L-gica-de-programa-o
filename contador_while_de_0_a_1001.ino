// C++ code
//
void setup()
{
 Serial.begin(9600);
  
   int contadorWhile = 0;
  
  while(contadorWhile <=100){
    Serial.println(contadorWhile);
   contadorWhile+=1;
  }  
}

void loop()
{
 
}