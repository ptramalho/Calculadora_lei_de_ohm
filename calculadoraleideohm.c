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
Prot�tipo da Fun��o
====================================*/
void calculadora(void);

/*====================================
Fun��o Main
====================================*/
int main(void){
	setlocale(LC_ALL, "portuguese_Brazil");
	
		calculadora();
	
	puts("Enter para sair...");  		/*Imprime uma string no console. N�o serve para imprimir vari�veis.	De forma autom�tica insere uma nova linha */

	getchar();								/* ao utilizar a fun��o getchar() dentro de um loop. A fun��o getchar() l� um �nico caractere da entrada,
											mas frequentemente deixa um caractere de nova linha (\n) no buffer de entrada ap�s a leitura da entrada do
											usu�rio. Esse caractere de nova linha � ent�o consumido pela pr�xima chamada de getchar() na itera��o seguinte
											do loop, levando a um comportamento inesperado.*/

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
		puts("Op��es de C�lculo. (Vari�veis Dispon�veis)\n");
		puts(" 1 - Pot�ncia.\t(Tens�o e Corrente)"); 
		puts(" 2 - Pot�ncia.\t(Resistor e Corrente)");
		puts(" 3 - Pot�ncia.\t(Tens�o e Resistor)");
		puts(" 4 - Tens�o.\t(Resistor e Corrente)");
		puts(" 5 - Tens�o.\t(Pot�ncia e Corrente)");
		puts(" 6 - Tens�o.\t(Pot�ncia e resistor)");
		puts(" 7 - Corrente.\t(Tens�o e Resistor)");
		puts(" 8 - Corrente.\t(Pot�ncia e Tens�o)");
		puts(" 9 - Corrente.\t(Pot�ncia e Resistor)");
		puts("10 - Resistor.\t(Tens�o e Corrente)");
		puts("11 - Resistor.\t(Tens�o e Pot�ncia)");
		puts("12 - Resistor.\t(Pot�ncia e Corrente)");
		puts("13 - Ajuda.");
		puts("14 - Cr�dito.");
		puts("15 - Sair.");
		puts("------------------------------");/*Fim menu de op��es*/
	
/*Lista op��o desejada*/
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
			puts("Ajuda");
			puts("------------------------------\n");
			
			puts("Significado das siglas:\n");
			
			puts("P -> Pot�ncia em Wats");
			puts("R -> Resist�ncia em Ohms");
			puts("I -> Corrente em Amperes");
			puts("E -> Tens�o em Volts");
			
			
			puts("------------------------------");
			puts("Formulas usadas:\n");
			
			puts("C�lculo Pot�ncia:");
			puts(" 1 - Pot�ncia. P = E x I"); 			
			puts(" 2 - Pot�ncia. P = R x I^2");			
			puts(" 3 - Pot�ncia. P = E^2 / R");	
			putchar('\n');
			putchar('\n');	
			puts("C�lculo de Tens�o:");	
			puts(" 4 - Tens�o. E = R x I");				
			puts(" 5 - Tens�o. E = P / I");				
			puts(" 6 - Tens�o. E = v(P x R)");
			putchar('\n');
			putchar('\n');	
			puts("C�lculo de Corrente:");		
			puts(" 7 - Corrente. I = E / R");			
			puts(" 8 - Corrente. I = P / E");			
			puts(" 9 - Corrente. I = v(P / R)");
			putchar('\n');
			putchar('\n');
			puts("C�lculo de Resistor:");
			puts("10 - Resistor. R = E / I");
			puts("11 - Resistor. R = E^2 / P");
			puts("12 - Resistor. R = P / I^2");
			
			putchar('\n');
			putchar('\n');
			
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
