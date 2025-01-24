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
	
	puts("Pressione qualquer tecla para sair, mané.");  	/*Imprime uma string no console.
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
	

/*Menu de opÃ§Ãµes*/
	do{	
		printf("Menu de opï¿½ï¿½es:\n\n");	
		printf("1 - Calcular Potï¿½ncia. (P = E x I)\n");
		printf("2 - Calcular Tensï¿½o. (E = R x I)\n");
		printf("3 - Calcular Corrente. (I = E / R)\n");
		printf("4 - Calcular Resistor. (R = E / I)\n");
		printf("5 - Info.\n");
		printf("6 - Sair.\n\n");/*Fim menu de opÃ§Ãµes*/
	
/*LÃª opÃ§Ã£o desejada*/
		printf("OpÃ§Ã£o desejada: ");
		scanf("%d", &opcao);
		putchar('\n');

/*Limpa o menu a cada escolha, impedindo sua repetiÃ§Ã£o.*/
		system("CLS"); 

	switch(opcao){
		case 1: 
			printf("------------------------------\n");
			printf("Calculo da PotÃªncia.\n");
			printf("------------------------------\n\n");
		
			printf("TensÃ£o em Volts: ");
			scanf("%f", &tensao);
			fflush(stdin);
		
			printf("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("PotÃªncia = %.2f Wats. \n\n", tensao*corrente);

			break;

		case 2:
			puts("------------------------------\n");
			puts("Calculo da TensÃ£o\n");
			puts("------------------------------\n\n");
		
			puts("Resistensia em Ohms: ");
			scanf("%f", &resistor);
			fflush(stdin);
		
			puts("Corrente em Amperes: ");
			scanf("%f", &corrente);
		
			printf("TensÃ£o = %.2f Volts. \n\n", resistor*corrente);

			break;

		case 3:
			printf("------------------------------\n");
			printf("Calculo da Corrente\n");
			printf("------------------------------\n\n");
		
			printf("TensÃ£o em Volts: ");
			scanf("%.2f", &tensao);
			fflush(stdin);
		
			printf("ResistÃªncia em Ohms: ");
			scanf("%f", &resistor);
		
			printf("Corrente = %.2f Amperes. \n\n", tensao/resistor);

			break;

		case 4:
			printf("------------------------------\n");
			printf("Calculo da Resistor\n");
			printf("------------------------------\n\n");
		
			printf("TensÃ£o em Volts: ");
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
			printf("Calculadora Lei de Ohm v1.2");
			printf("      +\n");
			printf("+ ");
			printf("Autor: Pablo Ramalho");
			printf("             +\n");
			printf("+ ");
			printf("Data: janeiro de 2025");
			printf("            +\n");  
			printf("++++++++++++++++++++++++++++++++++++\n\n");/*Fim cabeÃ§alho*/

			break;

		case 6:
			printf("------------------------------\n");
			printf("VocÃª escolheu sair.\n");
			printf("------------------------------\n\n");

			break;

		default:
			printf("------------------------------\n");
			printf("OpÃ§Ã£o invÃ¡lida.\n");
			printf("------------------------------\n\n");
	}

	}while(opcao!=6);


}
