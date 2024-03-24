#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*17. Faça um programa para resolver equações do 2o grau
ax2 + bx + c = 0
A variável a deve ser diferente de zero.
∆ = b2 -4 * a * c
∆ < 0 → não existe raiz real
∆ = 0 → existe uma raiz real
x = (-b) / (2 * a)
∆ > 0 → existem duas raízes reais
x1 = (-b + ∆)/ (2 * a)
x2 = (-b - ∆)/ (2 * a) */

int main() {
	float a, b, c, delta, x1, x2;

	printf("Resolver equacao do 2 grau!\n");

	printf("Digite um valor para a (a deve ser diferente de zero): ");
	scanf("%f", &a);

	printf("Digite um valor para b: ");
	scanf("%f", &b);

	printf("Digite um valor para c: ");
	scanf("%f", &c);
/*  ax2 + bx + c = 0	*/

	if (a == 0) {
		printf("Essa equacao nao e do segundo grau!!");
	}
	delta = (b * b) - (4 * a * c);
	if (delta > 0) {
		x1 = (- b + sqrt(delta)) / (2 * a);

		x2 = (- b - sqrt(delta)) / (2 * a);
		printf("raizes da equacao %.fx2  %.fx  %.f = 0 --> x1 = %f --> x2 = %f", a, b, c, x1, x2);
	}
	else if (delta == 0) {
		x1 = (- b + sqrt(delta)) / (2 * a);

		x2 = (- b - sqrt(delta)) / (2 * a);
		printf("raizes da equacao %.fx2  %.fx  %.f = 0 --> x1 = %f --> x2 = %f", a, b, c, x1, x2);

	}
	else if (delta < 0) {
		printf("Nao ha raizes reais!!!\n");
	}

	printf("\n\n");
	system("pause");
	return 0;

}