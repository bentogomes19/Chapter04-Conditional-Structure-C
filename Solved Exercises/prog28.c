#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que receba dois números e mostre o menor. */

int main() {
	float n1, n2;

	printf("Digite um numero: ");
	scanf("%f", &n1); 

	printf("Digite um segundo numero: ");
	scanf("%f", &n2); 

	if (n1 > n2) {
		printf("Menor numero: %.2f\n", n2);
	}
	if (n2 > n1) {
		printf("Menor numero: %.2f\n", n1);
	}
	if (n1 == n2) {
		printf("Numeros iguais!!\n");
	}


	system("pause");
	return 0;
}