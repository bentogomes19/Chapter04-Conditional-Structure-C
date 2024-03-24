#include <stdio.h>
#include <stdlib.h>

/*2. Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
MÉDIA ARITMÉTICA 					MENSAgEM
0,0 	3,0 						Reprovado
3,0 	7,0 						Exame
7,0 	10,0 						Aprovado */ 

int main() {
	float n1, n2, media;

	printf("Digite sua primeira nota: ");
	scanf("%f", &n1);

	printf("Digite sua segunda nota: ");
	scanf("%f", &n2);


	media = (n1 + n2) / 2;

	if (media >= 7 && media <= 10) {
		printf("Media: %.2f | Aprovado \n", media);
	}
	else if (media >= 3 && media < 7) {
		printf("Media: %.2f | Exame\n", media);
	}
	else if (media < 3) {
		printf("Media: %.2f | Reprovado\n", media);
	}


	system("pause");
	return 0;
}