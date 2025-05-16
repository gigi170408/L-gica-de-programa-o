int escolhaDaOperacao;
float resultado;


//tipoDeRetorno nomeDaFuncao parametros corpo
float somar(float numero1Parametro, float numero2Parametro){
  resultado = numero1Parametro + numero2Parametro; // ; indica o final da instrucao
  return resultado;
  // Serial.print ln("O resultado da soma eh: " + String(resultado));


}

float dividir(float numero1Parametro, float numero2Parametro){
  resultado = numero1Parametro / numero2Parametro; // ; indica o final da instrucao
  return resultado;

}

float subtrair(float numero1Parametro, float numero2Parametro){
  resultado = numero1Parametro - numero2Parametro; // ; indica o final da instrucao
  return resultado;

}

float multiplicar(float numero1Parametro, float numero2Parametro){
  resultado = numero1Parametro * numero2Parametro; // ; indica o final da instrucao
  return resultado;

}



void setup()
{
  Serial.begin(9600);

  int contador = 0;
  float numero1;
  float numero2;


  //\n eh um entender via texto
  do{
    Serial.println("Bem-vindo(a) a calculadora da gibs inteligente: :D!!!\n");
    Serial.println("Escolha uma das operacoes");
    Serial.println("1 - somar");
    Serial.println("2 - dividir");
    Serial.println("3 - subtrair");
    Serial.println("4 - multiplicar");

    while(!Serial.available()){}
    escolhaDaOperacao = Serial.parseInt();


    Serial.println("Para conseguirmos fazer a operacao, precisamos que voce digite 2 numeros");
    Serial.println("Digite o 1 numero: ");
    while(!Serial.available()){}
    numero1 = Serial.parseFloat();


    Serial.println("Digite o 2 numero:");
    while(!Serial.available()){}
    numero2 = Serial.parseFloat();

    switch(escolhaDaOperacao){

      case 1://somar
      //somar(numero1, numero2);//estou passando os valores que o usuario digitou via parametro
      //somar(1, 3);//estou passando os valores fixos via parametro
      float retornoFuncaoSomar;
      retornoFuncaoSomar = somar(numero1, numero2);
      Serial.println("O resultado eh: " + String(resultado));
      break;

      case 2://dividir
      float retornoFuncaoDividir;
      retornoFuncaoDividir = dividir(numero1, numero2);
      Serial.println("O resultado eh: " + String(resultado));
      break;

      case 3://subtrair
      float retornoFuncaoSubtrair;
      retornoFuncaoSubtrair = subtrair(numero1, numero2);
      Serial.println("O resultado eh: " + String(resultado));
      break;

      case 4://multiplicacao
      float retornoFuncaoMultiplicar;
      retornoFuncaoMultiplicar = multiplicar(numero1, numero2);
      Serial.println("O resultado eh: " + String(resultado));
      break;

      default:
      Serial.println("Opcao invalida! Escolha uma opcao do 1 ao 4");

    }
    Serial.println("Voce deseja voltar ao menu?");
    contador = 1;
    while(!Serial.available()){}

    if(Serial.readString() == "sim"){
      contador = 1;

    }
    else{ contador = 0;

         Serial.println("Ate breve");
         Serial.println("Caso queira voltar ao menu, reinicie o programa");
        }



  }
  while(contador != 0); //Se o contador foi diferente de 0, o msm se repete
}

void loop()
{
  //sem instrucoes
}