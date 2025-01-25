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
#include <math.h>

/*====================================
Prot�tipo da fun��o
====================================*/
void calculadora(void);

/*====================================
Fun��o main
====================================*/
int main(void){
	setlocale(LC_ALL, "portuguese_Brazil");
	
		calculadora();
	
	puts("Aperte qualquer tecla...");  						/*Imprime uma string no console.
															N�o serve para imprimir vari�veis.
															De forma autom�tica insere uma nova linha */

	getchar();

	return 0;
}/*Fim fun��o main*/


/*====================================
Fun��o calculadora
====================================*/
void calculadora(void){

	float corrente = 0, tensao = 0, potencia = 0, resistor = 0;
	short int opcao;
	

/*Menu de op��es*/
	do{	
		puts("------------------------------");
		puts("Op��es de C�lculo:\n");			
		puts(" 1 - Pot�ncia. P = E x I"); 			/*Ok*/
		puts(" 2 - Pot�ncia. P = R x I^2");			/*Ok*/
		puts(" 3 - Pot�ncia. P = E^2 / R");			/*Ok*/
		puts(" 4 - Tens�o. E = R x I");				/*Ok*/
		puts(" 5 - Tens�o. E = P / I");				/*Ok*/
		puts(" 6 - Tens�o. E = v(P x R)");			/*Ok*/
		puts(" 7 - Corrente. I = E / R");			/*Ok*/
		puts(" 8 - Corrente. I = P / E");			/*Ok*/
		puts(" 9 - Corrente. I = v(P / R)");
		puts("10 - Resistor. R = E / I");
		puts("11 - Resistor. R = E^2 / P");
		puts("12 - Resistor. R = P / I^2");
		puts("13 - Info.");
		puts("14 - Cr�dito.");
		puts("15 - Sair.");
		puts("------------------------------");/*Fim menu de op��es*/
	
/*L� op��o desejada*/
		printf("Op��o desejada: ");
		scanf("%d", &opcao);
		putchar('\n');

/*Limpa o menu a cada escolha, impedindo sua repeti��o.*/
		system("CLS"); 

	switch(opcao){
		case 1: 
			puts("------------------------------");
			puts("Calculo da Pot�ncia.");
			puts("------------------------------\n");
		
			printf("Tens�o em Volts: ");
			scanf("%f", &tensao);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("==============================\n");
			printf("Pot�ncia = %.2f Wats. \n", tensao*corrente);
			printf("==============================\n\n");

			break;
			
		case 2: 
			puts("------------------------------");
			puts("Calculo da Pot�ncia.");
			puts("------------------------------\n");
		
			printf("Resist�ncia em Ohms: ");
			scanf("%f", &resistor);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("==============================\n");
			printf("Pot�ncia = %.2f Wats. \n", resistor*(corrente*corrente));
			printf("==============================\n\n");
			
			break;

		case 3:
			puts("------------------------------");
			puts("Calculo de Pot�ncia");
			puts("------------------------------\n");
			
			printf("Tens�o em Volts: ");
			scanf("%f", &tensao);
			
			printf("Resist�ncia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Pot�ncia = %.2f Wats. \n", (tensao*tensao)/resistor);
			printf("==============================\n\n");
			
			break;

		case 4:
			
			puts("------------------------------");
			puts("Calculo de Tens�o");
			puts("------------------------------\n");
			
			printf("Resistencia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Tens�o = %.2f Volts. \n", resistor*corrente);
			printf("==============================\n\n");

			break;

		case 5:
			puts("------------------------------");
			puts("Calculo de Tens�o");
			puts("------------------------------\n");
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Tens�o = %.2f Volts.\n", potencia/corrente);
			printf("==============================\n\n");
		
			break;
			
		case 6:
			puts("------------------------------");
			puts("Calculo de Tens�o");
			puts("------------------------------\n");
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("Resist�ncia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Tens�o = %.2f Volts.\n", sqrt(potencia*resistor));
			printf("==============================\n\n");
	
	
			break;
			
		case 7:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Tens�o em Volts: ");
			scanf("%f", &tensao);
			
			printf("Resist�ncia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", tensao/resistor);
			printf("==============================\n\n");
			
			break;
			
		case 8:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("Tens�o em Voltas: ");
			scanf("%f", &tensao);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", potencia/tensao);
			printf("==============================\n\n");	
	
			break;
			
		case 9:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("Resist�ncia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", sqrt(potencia/resistor));
			printf("==============================\n\n");
	
			break;
			
		case 10:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Tens�o em Volts: ");
			scanf("%f", &tensao);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Resist�ncia = %.2f Ohms.\n", tensao/corrente);
			printf("==============================\n\n");
	
			break;
			
		case 11:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Tens�o em Volts: ");
			scanf("%f", &tensao);
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("==============================\n");
			printf("Resistor = %.2f Ohms.\n", (tensao*tensao)/potencia);
			printf("==============================\n\n");	
	
			break;
			
		case 12:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Pot�ncia em Wats: ");
			scanf("%f", &potencia);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Resistor = %.2f Ohms.\n", potencia/(corrente*corrente));
			printf("==============================\n\n");	
	
			break;
			
		case 13:
			puts("------------------------------");
			puts("Informa��o e ajuda");
			puts("------------------------------\n");
			
			break;

		case 14: 
			printf("++++++++++++++++++++++++++++++++++++\n");
			printf("+ ");
			printf("Programa em C");
			printf("                    +\n");
			printf("+ ");
			printf("Calculadora Lei de Ohm v2.3");
			printf("      +\n");
			printf("+ ");
			printf("Autor: Pablo Ramalho");
			printf("             +\n");
			printf("+ ");
			printf("Data: janeiro de 2025");
			printf("            +\n");  
			printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabe�alho*/

			break;

		case 15:
			puts("------------------------------");
			puts("Voc� escolheu sair.");
			puts("------------------------------\n");

			break;

		default:
			puts("------------------------------");
			printf("Op��o inexistente.\nEscolha uma op��o v�lida.\n");
			puts("------------------------------\n");
	}

	}while(opcao!=15);


}
