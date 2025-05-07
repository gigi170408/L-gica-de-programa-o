//Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.

//variaveis

float salario = 0;
float salarioNovo = 0;

void setup()
{
 Serial.begin(9600); 
}

void loop()
{
  
 Serial.println("Digite o salario do funcionario");//imprime uma msg na tela
 while(!Serial.available());//pausa o programa ate o usuario dar <Enter>
 salario = Serial.parseFloat();//guarda o texto digitado na variavel
  
 //Processamento
  if (salario < 500){
   salarioNovo = (salario * 1.30);
   Serial.println("O seu salario novo e: " + String(salarioNovo));  
  }
  
  else{ 
      Serial.println("Voce nao tem direito a um aumento: " + String(salario));
  }
  
}
  //Saida
  //imprime o salario;
 
 


