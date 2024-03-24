#include <stdlib.h>
#include <stdio.h>

/*Faça um programa que receba quatro valores: I, A, B e c. Desses valores, I é inteiro e positivo, A, B e
c são reais. Escreva os números A, B e c obedecendo à tabela a seguir.
Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
digitados sejam diferentes um do outro. */
int main() {
	int i;
	float a, b, c;

	printf("Digite um numero real qualquer (valor de A): ");
	scanf("%f", &a);

	printf("Digite um numero real qualquer (valor de B): ");
	scanf("%f", &b);

	printf("Digite um numero real qualquer (valor de C): ");
	scanf("%f", &c);

	printf("VALORES DE I\n");
	printf("1 - A, B e C em ordem crescente\n");
	printf("2 - A, B e C em ordem decrescente.\n");
	printf("3 - O maior fica entre os outros dois numeros\n");
	printf("Digite um valor inteiro para I: ");
	scanf("%d", &i);

	if ( i == 1) {
		if (a > b && b > c) {
			printf(" c = %.2f --> b = %.2f --> a = %.2f\n", c, b, a);
		}
		if (c > a && a > b) {
			printf(" b = %.2f --> a = %.2f --> c = %.2f\n", b, a, c);
		}
		if (c > b && b > a) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
		if (a > c && c > b) {
			printf(" b = %.2f --> c = %.2f --> a = %.2f\n", b, c, a);
		}
		if (b > c && c > a) {
			printf(" a = %.2f --> c = %.2f --> b = %.2f\n", a, c, b);
		}
		if (a == b && b == c) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
	}
	if ( i == 2) {
		if (a > b && b > c) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
		if (c > a && a > b) {
			printf(" c = %.2f --> a = %.2f --> b = %.2f\n", c, a, b);
		}
		if (c > b && b > a) {
			printf(" c = %.2f --> b = %.2f --> a = %.2f\n", c, b, a);
		}
		if (a > c && c > b) {
			printf(" a = %.2f --> c = %.2f --> b = %.2f\n", a, c, b);
		}
		if (b > c && c > a) {
			printf(" b = %.2f --> c = %.2f --> a = %.2f\n", b, c, a);
		}
		if (a == b && b == c) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
	}
	if ( i == 3) {
		if (a > b && b > c) {
			printf(" b = %.2f --> a = %.2f --> c = %.2f\n", b, a, c);
		}
		if (c > a && a > b) {
			printf(" a = %.2f --> c = %.2f --> b = %.2f\n", a, c, b);
		}
		if (c > b && b > a) {
			printf(" b = %.2f --> c = %.2f --> a = %.2f\n", b, c, a);
		}
		if (a > c && c > b) {
			printf(" c = %.2f --> a = %.2f --> b = %.2f\n", c, a, b);
		}
		if (b > c && c > a) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
		if (a == b && b == c) {
			printf(" a = %.2f --> b = %.2f --> c = %.2f\n", a, b, c);
		}
	}
	system("pause");
	return 0;
}