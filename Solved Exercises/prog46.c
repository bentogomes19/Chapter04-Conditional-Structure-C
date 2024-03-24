#include <stdio.h> 
#include <stdlib.h>

/*21. Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

 CóDIgo DE oRIgEM 			PRoCEDêNCIA
1 								Sul
2 								Norte
3 								Leste
4 								Oeste
5 ou 6 							Nordeste
7 ou 8 ou 9 					Sudeste
10 a 20 						Centro-oeste
21 a 30 						Nordeste*/

int main() {
	float preco;
	int cod;

	printf("Digite o preco do produto R$: ");
	scanf("%f", &preco);

	printf("Digite o codigo do produto (de 1 a 30): ");
	scanf("%d", &cod);

	if (cod == 1) {
		printf("Sul\n");
	}
	if (cod == 2) {
		printf("Norte\n");
	}
	if (cod == 3) {
		printf("Leste\n");
	}
	if (cod == 4) {
		printf("Oeste\n");
	}
	if (cod == 5 || cod == 6 || cod >= 21 && cod <= 30) {
		printf("Nordeste\n");
	}
	if (cod == 7 || cod == 8 || cod == 9) {
		printf("Sudeste\n");
	}
	if (cod >= 10 && cod <=20) {
		printf("Centro-Oeste\n");
	}
	if (cod > 30) {
		printf("Codigo invalido... Tente Novamente\n");
	}

	system("pause");
	 return 0;
}