/*++++++++++++++++++++++++++++++++++++
+	Programa em C                    +
+   Calculadora Lei de Ohm v1.0      +
+	Autor: Pablo Ramalho             +
+	Data: dezembro de 2024           +
++++++++++++++++++++++++++++++++++++*/

/*====================================
Bibliotecas
====================================*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*====================================
Função main
====================================*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float corrente = 0, tensao = 0, potencia = 0, resistor = 0;
	int opcao;
	
	/*Cabeçalho*/
	printf("++++++++++++++++++++++++++++++++++++\n");
	printf("+ ");
	printf("Programa em C");
	printf("                    +\n");
	printf("+ ");
	printf("Calculadora Lei de Ohm v1.0");
	printf("      +\n");
	printf("+ ");
	printf("Autor: Pablo Ramalho");
	printf("             +\n");
	printf("+ ");
	printf("Data: dezembro de 2024");
	printf("           +\n");  
	printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabeçalho*/
	
	do{	/*Menu de opções*/
	
		printf("1 - Calcular Pot�ncia.\n");
		printf("2 - Calcular Tens�o.\n");
		printf("3 - Calcular Corrente.\n");
		printf("4 - Calcular Resistor.\n\n");/*Fim menu de opções*/
	
		/*Lê opção desejada*/
		printf("Opção desejada: ");
		scanf("%d", &opcao);
		printf("\n");
		
	}while(opcao<1||opcao>4);
	
	if(opcao==1){/*Potência*/
		printf("##############################\n");
		printf("Calculo da Potência.\n");
		printf("##############################\n\n");
		
		printf("Tensão em Volts: ");
		scanf("%f", &tensao);
		fflush(stdin);
		
		printf("Corrente em Amperes: ");
		scanf("%f", &corrente);
		
		printf("Potencia = %.2f Wats. \n\n", tensao*corrente);		
				
	}else if(opcao==2){
		printf("##############################\n");
		printf("Calculo da Tensão\n");
		printf("##############################\n\n");
		
		printf("Resistensia em Ohms: ");
		scanf("%f", &resistor);
		fflush(stdin);
		
		printf("Corrente em Amperes: ");
		scanf("%f", &corrente);
		
		printf("Tensão = %.2f Volts. \n\n", resistor*corrente);
		
	}else if(opcao==3)
	{
		printf("##############################\n");
		printf("Calculo da Corrente\n");
		printf("##############################\n\n");
		
		printf("Tensão em Volts: ");
		scanf("%.2f", &tensao);
		fflush(stdin);
		
		printf("Resistência em Ohms: ");
		scanf("%f", &resistor);
		
		printf("Corrente = %.2f Amperes. \n\n", tensao/resistor);
		
	}else if(opcao==4){
		printf("##############################\n");
		printf("Calculo da Resistor\n");
		printf("##############################\n\n");
		
		printf("Tensão em Volts: ");
		scanf("%f", &tensao);
		fflush(stdin);
		
		printf("Corrente em Amperes: ");
		scanf("%f", &corrente);
		
		printf("Resistencia = %.2f Ohms. \n\n", tensao/corrente);
		
	}else{
		printf("##############################\n");
		printf("Opção inválida.\n");
		printf("##############################\n\n");
	}
	
	
	
	
	system("PAUSE");
	return 0;
}/*Fim função main*/
