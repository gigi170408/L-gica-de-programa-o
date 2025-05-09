// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Escolha uma fruta:");
  Serial.println("   1-Banana");
  Serial.println("   2-Maca");
  Serial.println("   3-Tomate");
  Serial.println("   4-Laranja");
  while(!Serial.available());
  int opcao = Serial.parseInt();

  switch(opcao)
  {
    case 1:
    Serial.println("opcao escolhida: Banana");
    break;
    case 2:
    Serial.println("opcao escolhida: Maca");
    break;
    case 3:
    Serial.println("opcao escolhida: Tomate");
    break;
    case 4:
    Serial.println("opcao escolhida: Laranja");
    break;
    default:
    Serial.println("Nao temos essa opcao");

  } 
  Serial.println();
}