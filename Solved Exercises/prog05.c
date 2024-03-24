#include <stdio.h>
#include <stdlib.h>


/*5. Faça um programa que receba três números obrigatoriamente em ordem crescente
e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente.
Suponha que o usuário digitará quatro números diferentes. */

int main() {
	float n1, n2, n3, n4;
	printf("Os numeros inseridos deverao ser em ordem crescente!!! com excecao do n4\n");
	printf("digite um numero qualquer n1 : ");
	scanf("%f", &n1);

	printf("digite um numero qualquer n2 : ");
	scanf("%f", &n2);

	printf("digite um terceiro numero qualquer n 3: ");
	scanf("%f", &n3);

	printf("digite um quarto numero qualquer n4 (FORA DE ORDEM) : ");
	scanf("%f", &n4);

	if (n4 > n3 && n3 > n2 && n2 > n1) {
		printf("n4: %.2f > n3: %.2f > n2: %.2f > n1: %.2f\n", n4, n3, n2, n1);
	}
	if (n4 < n3 && n3 > n2 && n2 > n1 && n4 < n2 && n4 < n1) {
		printf("n3: %.2f > n2: %.2f > n1: %.2f > n4: %.2f\n", n3, n2, n1, n4);
	}
	if (n4 == n2 && n3 > n2 && n2 > n1 && n4 > n1) {
		printf("n3: %.2f > n2: %.2f = n4: %.2f > n1: %.2f\n", n3, n2, n4, n1);
	}
	if (n4 == n1 && n3 > n2 && n2 > n1 && n4 < n2 && n4 < n3) {
		printf("n3: %.2f > n2: %.2f > n4: %.2f = n1: %.2f\n", n3, n2, n4, n1);
	}
	if (n4 == n3 && n3 > n2 && n2 > n1) {
		printf("n4: %.2f = n3: %.2f > n2: %.2f > n1: %.2f", n4, n3, n2, n1);
	}
	printf("\n\n");

	system("pause");
	return 0;
}