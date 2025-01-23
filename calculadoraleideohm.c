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
Protótipo da função
====================================*/
void calculadora(void);

/*====================================
Função main
====================================*/
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
		calculadora();
	
	system("pause");
	return 0;
}/*Fim função main*/


/*====================================
Função calculadora
====================================*/
void calculadora(void){

	float corrente = 0, tensao = 0, potencia = 0, resistor = 0;
	int opcao;
	

/*Menu de opções*/
	do{	
		printf("Menu de opções:\n\n");	
		printf("1 - Calcular Potência.\n");
		printf("2 - Calcular Tensão.\n");
		printf("3 - Calcular Corrente.\n");
		printf("4 - Calcular Resistor.\n");
		printf("5 - Info\n");
		printf("6 - Sair.\n\n");/*Fim menu de opções*/
	
/*Lê opção desejada*/
		printf("Opção desejada: ");
		scanf("%d", &opcao);
		putchar('\n');

/*Limpa o menu a cada escolha, impedindo sua repetição.*/
		system("CLS"); 

	switch(opcao){
		case 1: 
			printf("------------------------------\n");
			printf("Calculo da Potência.\n");
			printf("------------------------------\n\n");
		
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("Potencia = %.2f Wats. \n\n", tensao*corrente);

			break;

		case 2:
			printf("------------------------------\n");
			printf("Calculo da Tensão\n");
			printf("------------------------------\n\n");
		
			printf("Resistensia em Ohms: ");
			scanf("%f", &resistor);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("Tensão = %.2f Volts. \n\n", resistor*corrente);

			break;

		case 3:
			printf("------------------------------\n");
			printf("Calculo da Corrente\n");
			printf("------------------------------\n\n");
		
			printf("Tensão em Volts: ");
			scanf("%.2f", &tensao);
			fflush(stdin);
		
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
		
			printf("Corrente = %.2f Amperes. \n\n", tensao/resistor);

			break;

		case 4:
			printf("------------------------------\n");
			printf("Calculo da Resistor\n");
			printf("------------------------------\n\n");
		
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("Resistencia = %.2f Ohms. \n\n", tensao/corrente);

			break;

		case 5: 
			printf("++++++++++++++++++++++++++++++++++++\n");
			printf("+ ");
			printf("Programa em C");
			printf("                    +\n");
			printf("+ ");
			printf("Calculadora Lei de Ohm v1.1");
			printf("      +\n");
			printf("+ ");
			printf("Autor: Pablo Ramalho");
			printf("             +\n");
			printf("+ ");
			printf("Data: janeiro de 2025");
			printf("            +\n");  
		printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabeçalho*/

		case 6:
			printf("------------------------------\n");
			printf("Você escolheu sair.\n");
			printf("------------------------------\n\n");

			break;

		default:
			printf("------------------------------\n");
			printf("Opção inválida.\n");
			printf("------------------------------\n\n");
	}

	}while(opcao!=6);


}