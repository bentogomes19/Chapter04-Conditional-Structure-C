#include <stdio.h>
#include <stdlib.h>

/*4. Faça um programa que receba três números e mostre o maior */

int main() {
	float n1, n2, n3;
	
	printf("Digite um numero qualquer: ");
	scanf("%f", &n1); // 3

	printf("Digite um segundo numero qualquer: ");
	scanf("%f", &n2); // 2

	printf("Digite um terceiro numero qualquer: ");
	scanf("%f", &n3); // 3

	if (n1 > n2 && n1 > n3 ) {
		printf("Maior numero --> %.2f\n", n1);
	}
	if (n2 > n1 && n2 > n3) {
		printf("Maior numero --> %.2f\n", n2);
	}
	if (n3 > n1 && n3 > n2) {
		printf("Maior numero --> %.2f\n", n3);
	}
	if (n1 == n2 && n3 < n2) {
		printf("Maior numero --> %.2f\n", n1);
	}
	if (n3 == n2 && n1 < n2) {
		printf("Maior numero --> %.2f\n", n2);
	}
	if (n3 == n1 && n3 > n2) {
		printf("Maior numero --> %.2f\n", n1);
	}



	system("pause");
	return 0;

}