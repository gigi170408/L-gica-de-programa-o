// C++ code
//


void setup()
{
  Serial.begin(9600);
}

void loop()
{// indices              0         1       2        3
  String nomes[4] = {"Eduardo", "Bia Paz", "Rafa", "Salgado"};
  int idades [4] = {24, 16, 16};

  for(int i = 0; i < 4; i++){
    Serial.println("Digite a idade de " + nomes[i]);
    while(!Serial.available());
    idades[i] = Serial.parseInt();
  }
  idades [0] = 24;
  idades [1] = 16;
  idades [2] = 16;
  idades [3] = 16;

  for(int i = 0; i < 4; i++)
  {
    Serial.println(String(i + 1) + "O Nome: " + nomes[i]);
    Serial.println( "idade: " + String(idades[i]));
    Serial.println();

  }

  delay(2000);
}