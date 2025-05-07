// C++ code
//variaveis
String appTempo = "chuva";

void setup()
{
 Serial.begin(9600);//inicia a comunicacao serial
}

void loop()

  {// rodar o programa eternamente ate desligar o arduino
    if(appTempo == "chuva"){//condicional simples
    Serial.println("Hoje vai chover,por favor");
    Serial.println("Pegue o guarda chuva");
}
    Serial.println("Saindo de casa");
    
    delay(30000);//Aguarda 30 segundos
    
}