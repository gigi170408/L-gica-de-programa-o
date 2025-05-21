// C++ code
//
String frutas[5];
float precoFrutas[5];
int quantidade[5];
  
void setup()
{
  Serial.begin(9600);
  Serial.println("****** PROGRAMA CADASTRO DE FRUTAS ******");
  
  
}

void loop()
{
 for(int i = 0; i < 5; i++) 
 { //cadastra uma fruta
   Serial.println("Digite uma fruta");
   while(!Serial.available());
   frutas[i] = Serial.readString();
   
   //precifica a fruta
   Serial.println("Digite o preco da fruta");
   while(!Serial.available());
   precoFrutas[i] = Serial.parseFloat();
   
    //quantidade de frutas no estoque
   Serial.println("Digite a quantidade de frutas no estoque");
   while(!Serial.available());
   quantidade[i] = Serial.parseInt();
    
    
  
 }
  
  Serial.println("****** Listagem das frutas ******");
  Serial.println();
  
  for(int i = 0; i < 5; i++){
    Serial.println("Produto: " + frutas[i]);
    Serial.println("Preco: R$" + String(precoFrutas[i]));
    Serial.println("quantidade: " + String(quantidade[i]));
    Serial.println("___");
  }
 //pedir as frutas para o usuario
 //guardar cada fruta no compartimento correto
}
