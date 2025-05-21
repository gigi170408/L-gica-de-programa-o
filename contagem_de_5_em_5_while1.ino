// C++ code
//
void setup()
{
 Serial.begin(9600);
  
 int contadorWhile = 0;
  
  while(contadorWhile <=50){
    Serial.println(contadorWhile);
   contadorWhile+=5;
    
  }
}

void loop()
{
  
}