#include <stdio.h>
#include <stdlib.h>

/*3. Faça um programa que receba dois números e mostre o maior.	 */

int main() {
	float n1, n2;

	printf("Digite um numero real qualquer: ");
	scanf("%f", &n1); // 2

	printf("Digite um segundo numero real qualquer: ");
	scanf("%f", &n2); // 4

	if (n1 > n2) {
		printf("Maior numero : %.2f\n", n1);
	}
	if( n2 > n1) {
		printf("Maior numero: %.2f\n", n2);
	}
	if ( n1 == n2) {
		printf("Ambos os numeros sao iguais...\n");
	}

	system("pause");
	return 0;
}