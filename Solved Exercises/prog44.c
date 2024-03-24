#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>

/*19. Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h é a altura):
■■ para homens: (72.7 * h) – 58.
■■ para mulheres: (62.1 * h) – 44.7. */

int main() {
	char sexo;
	float h, peso;

	printf("Digite o seu sexo M ou F: ");
	scanf("%s", &sexo);
	sexo=toupper(sexo);
	fflush(stdin);

	if (sexo == 'M') {
		printf("Digite sua altura: ");
		scanf("%f", &h);
		peso = (72.7 * h) - 58;
		printf("Peso ideal --> %.2f Kg\n", peso);
	}
	if (sexo == 'F') {
		printf("Digite sua altura: ");
		scanf("%f", &h);
		peso = (62.1 * h) - 44.7;
		printf("Peso ideal --> %.2f Kg\n", peso);
	}
	if (sexo != 'M' && sexo != 'F') {
		printf("Codigo invalido... tente novamente\n");
	}

	system("pause");
	 return 0;
}