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
Protótipo da Função
====================================*/
void calculadora(void);

/*====================================
Função Main
====================================*/
int main(void){
	setlocale(LC_ALL, "portuguese_Brazil");
	
		calculadora();
	
	puts("Enter para sair...");  		/*Imprime uma string no console. Não serve para imprimir variáveis.	De forma automática insere uma nova linha */

	getchar();								/* ao utilizar a função getchar() dentro de um loop. A função getchar() lê um único caractere da entrada,
											mas frequentemente deixa um caractere de nova linha (\n) no buffer de entrada após a leitura da entrada do
											usuário. Esse caractere de nova linha é então consumido pela próxima chamada de getchar() na iteração seguinte
											do loop, levando a um comportamento inesperado.*/

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
		puts("------------------------------");
		puts("Opções de Cálculo. (Variáveis Disponíveis)\n");
		puts(" 1 - Potência.\t(Tensão e Corrente)"); 
		puts(" 2 - Potência.\t(Resistor e Corrente)");
		puts(" 3 - Potência.\t(Tensão e Resistor)");
		puts(" 4 - Tensão.\t(Resistor e Corrente)");
		puts(" 5 - Tensão.\t(Potência e Corrente)");
		puts(" 6 - Tensão.\t(Potência e resistor)");
		puts(" 7 - Corrente.\t(Tensão e Resistor)");
		puts(" 8 - Corrente.\t(Potência e Tensão)");
		puts(" 9 - Corrente.\t(Potência e Resistor)");
		puts("10 - Resistor.\t(Tensão e Corrente)");
		puts("11 - Resistor.\t(Tensão e Potência)");
		puts("12 - Resistor.\t(Potência e Corrente)");
		puts("13 - Ajuda.");
		puts("14 - Crédito.");
		puts("15 - Sair.");
		puts("------------------------------");/*Fim menu de opções*/
	
/*Lista opção desejada*/
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
			
			printf("Potência em Wats: ");
			scanf("%f", &potencia);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Tensão = %.2f Volts.\n", potencia/corrente);
			printf("==============================\n\n");
		
			break;
			
		case 6:
			puts("------------------------------");
			puts("Calculo de Tensão");
			puts("------------------------------\n");
			
			printf("Potência em Wats: ");
			scanf("%f", &potencia);
			
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Tensão = %.2f Volts.\n", sqrt(potencia*resistor));
			printf("==============================\n\n");
	
	
			break;
			
		case 7:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", tensao/resistor);
			printf("==============================\n\n");
			
			break;
			
		case 8:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Potência em Wats: ");
			scanf("%f", &potencia);
			
			printf("Tensão em Voltas: ");
			scanf("%f", &tensao);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", potencia/tensao);
			printf("==============================\n\n");	
	
			break;
			
		case 9:
			puts("------------------------------");
			puts("Calculo de Corrente");
			puts("------------------------------\n");
			
			printf("Potência em Wats: ");
			scanf("%f", &potencia);
			
			printf("Resistência em Ohms: ");
			scanf("%f", &resistor);
			
			printf("==============================\n");
			printf("Corrente = %.2f Amperes.\n", sqrt(potencia/resistor));
			printf("==============================\n\n");
	
			break;
			
		case 10:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
			
			printf("==============================\n");
			printf("Resistência = %.2f Ohms.\n", tensao/corrente);
			printf("==============================\n\n");
	
			break;
			
		case 11:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Tensão em Volts: ");
			scanf("%f", &tensao);
			
			printf("Potência em Wats: ");
			scanf("%f", &potencia);
			
			printf("==============================\n");
			printf("Resistor = %.2f Ohms.\n", (tensao*tensao)/potencia);
			printf("==============================\n\n");	
	
			break;
			
		case 12:
			puts("------------------------------");
			puts("Calculo da Resistor");
			puts("------------------------------\n");
			
			printf("Potência em Wats: ");
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
			
			puts("P -> Potência em Wats");
			puts("R -> Resistência em Ohms");
			puts("I -> Corrente em Amperes");
			puts("E -> Tensão em Volts");
			
			
			puts("------------------------------");
			puts("Formulas usadas:\n");
			
			puts("Cálculo Potência:");
			puts(" 1 - Potência. P = E x I"); 			
			puts(" 2 - Potência. P = R x I^2");			
			puts(" 3 - Potência. P = E^2 / R");	
			putchar('\n');
			putchar('\n');	
			puts("Cálculo de Tensão:");	
			puts(" 4 - Tensão. E = R x I");				
			puts(" 5 - Tensão. E = P / I");				
			puts(" 6 - Tensão. E = v(P x R)");
			putchar('\n');
			putchar('\n');	
			puts("Cálculo de Corrente:");		
			puts(" 7 - Corrente. I = E / R");			
			puts(" 8 - Corrente. I = P / E");			
			puts(" 9 - Corrente. I = v(P / R)");
			putchar('\n');
			putchar('\n');
			puts("Cálculo de Resistor:");
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
			printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabeçalho*/

			break;

		case 15:
			puts("------------------------------");
			puts("Você escolheu sair.");
			puts("------------------------------\n");

			break;

		default:
			puts("------------------------------");
			printf("Opção inexistente.\nEscolha uma opção válida.\n");
			puts("------------------------------\n");
	}

	}while(opcao!=15);


}
