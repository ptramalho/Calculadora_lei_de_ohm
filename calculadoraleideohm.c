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
	setlocale(LC_ALL, "portuguese_Brazil");
	
		calculadora();
	
	puts("Aperta qualquer tecla ai...");  				/*Imprime uma string no console.
															Não serve para imprimir variáveis.
															De forma automática insere uma nova linha */

	getchar();

	return 0;
}/*Fim função main*/


/*====================================
Função calculadora
====================================*/
void calculadora(void){

	float corrente = 0, tensao = 0, potencia = 0, resistor = 0;
	short int opcao;
	

/*Menu de opções*/
	do{	
		puts("Menu de opções:\n");	
		puts(" 1 - Potência. P = E x I"); 			/*Ok*/
		puts(" 2 - Potência. P = R x I^2");			/*Ok*/
		puts(" 3 - Potência. P = E^2 / R");			/*Ok*/
		puts(" 4 - Tensão. E = R x I");				/*Ok*/
		puts(" 5 - Tensão. E = P / I");
		puts(" 6 - Tensão. E = v(P x R)");
		puts(" 7 - Corrente. I = E / R");
		puts(" 8 - Corrente. I = P / E");
		puts(" 9 - Corrente. I = v(P / R)");
		puts("10 - Resistor. R = E / I");
		puts("11 - Resistor. R = E^2 / P");
		puts("12 - Resistor. R = P / I^2");
		puts("13 - Info.");
		puts("14 - Crédito.");
		puts("15 - Sair.\n");/*Fim menu de opções*/
	
/*Lê opção desejada*/
		printf("Opção desejada: ");
		scanf("%d", &opcao);
		putchar('\n');

/*Limpa o menu a cada escolha, impedindo sua repetição.*/
		system("CLS"); 

	switch(opcao){
		case 1: 
			puts("------------------------------");
			puts("Calculo da Potência.");
			puts("------------------------------\n");
		
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("==============================\n");
			printf("Potência = %.2f Wats. \n", tensao*corrente);
			printf("==============================\n\n");

			break;
			
		case 2: 
			puts("------------------------------");
			puts("Calculo da Potência.");
			puts("------------------------------\n");
		
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("==============================\n");
			printf("Potência = %.2f Wats. \n", resistor*(corrente*corrente));
			printf("==============================\n\n");

			break;

		case 3:
			puts("------------------------------");
			puts("Calculo de Potência");
			puts("------------------------------\n");
			
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Potência = %.2f Wats. \n", (tensao*tensao)/resistor);
			printf("==============================\n\n");
			
			break;

		case 4:
			puts("------------------------------");
			puts("Calculo de Tensão");
			puts("------------------------------\n");
			
			printf("Resistencia em Ohms: ");
			scanf("%f", &resistor);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Tensão = %.2f Volts. \n", resistor*corrente);
			printf("==============================\n\n");
			
		


			break;

		case 5:
			puts("------------------------------");
			puts("Calculo de Tensão");
			puts("------------------------------\n");
		

			break;
			
		case 6:
			puts("------------------------------");
			puts("Calculo de Tensão");
			puts("------------------------------\n");
	
	
			break;
			
		case 7:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
	
	
			break;
			
		case 8:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
	
	
			break;
			
		case 9:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
	
	
			break;
			
		case 10:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
	
	
			break;
			
		case 11:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
	
	
			break;
			
		case 12:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
	
	
			break;
			
		case 13:
			puts("------------------------------");
			puts("Informação e ajuda");
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
			printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabeçalho*/

			break;

		case 15:
			puts("----------------------");
			puts("Você escolheu sair, mané.");
			puts("----------------------\n");

			break;

		default:
			puts("------------------------------");
			printf("PRESTA ATENÇÃO AI!!!\nEssa opção não existe.\n");
			puts("------------------------------\n");
	}

	}while(opcao!=15);


}
