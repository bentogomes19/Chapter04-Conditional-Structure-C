#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba três números e mostre-os em ordem crescente. Suponha que o usuário
digitará três números diferentes. */

int main() {
	float n1, n2, n3;

	printf("Digite um numero real qualquer (N1) : ");
	scanf("%f", &n1);

	printf("Digite um segundo numero real qualquer (N2) : ");
	scanf("%f", &n2);

	printf("Digite um terceiro numero real qualquer (N3) : ");
	scanf("%f", &n3);

	if (n1 > n2 && n2 > n3) {
		printf("n1: %.2f > n2: %.2f > n3: %.2f", n1, n2, n3);
	}
	if (n3 > n2 && n2 > n1) {
		printf("n3: %.2f > n2: %.2f > n1: %.2f", n3, n2, n1);
	}
	if (n2 > n1 && n1 > n3) {
		printf("n2: %.2f > n1: %.2f > n3: %.2f", n2, n1, n3);
	}
	if (n2 > n3 && n3 > n1) {
		printf("n2: %.2f > n3: %.2f > n1: %.2f", n2, n3, n1);
	}
	if(n1 > n3 && n3 > n2) {
		printf("n1: %.2f > n3: %.2f > n2: %.2f", n1, n3, n2);
	}
	if (n3 > n1 && n1 > n2) {
		printf("n3: %.2f > n1: %.2f > n2: %.2f", n3, n1, n2);
	}
	if (n1 == n2 && n2 == n3) {
		printf("n1: %.2f = n2: %.2f = n3: %.2f", n1, n2, n3);
	}

	printf("\n\n");
	system("pause");
	return 0;
}