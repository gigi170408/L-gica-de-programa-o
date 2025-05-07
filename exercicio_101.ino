// Elabore um programa para cálculo de preços de produtos que solicite o preço
//de compra do produto e o percentual a ser aplicado em cima desse valor para
//a venda. Calcule e exiba o preço de venda do produto. Se o percentual a ser
//aplicado for inferior a 50%, exiba uma mensagem informando ao usuário que o
//produto será vendido com uma margem muito pequena de lucro.
//
float precoCompra, percentual, precoVenda;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
 //Entrada
  Serial.println("Digite quanto voce pagou no produto");
  while(!Serial.available());
  precoCompra = Serial.parseFloat();
  
  Serial.println("Qual o percentual a ser aplicado na venda do produto");
  while(!Serial.available());
  percentual = Serial.parseFloat();
  
  float precoVenda = (precoCompra * percentual);
  
  
  if(percentual < 0.50){
    Serial.println("Preco do Produto a Venda: " + String(precoVenda));
    Serial.println("O produto sera vendido com uma margem muito pequena de lucro");
  }
  
  else{
    Serial.println("Preco do Produta a Venda: " + String(precoVenda));
    Serial.println("O produto sera vendido com uma margem de lucro boa");
  }
  
  delay(1000); // Wait for 1000 millisecond(s)
}