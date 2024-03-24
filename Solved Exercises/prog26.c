#include <stdio.h>
#include <stdlib.h>

/*1. Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7. */

int main() {
	float n1, n2, n3, n4, media;

	printf("Digite a primeira nota da prova: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota da prova: ");
	scanf("%f", &n2);

	printf("Digite a terceira nota da prova: ");
	scanf("%f", &n3);

	printf("Digite a quarta nota da prova: ");
	scanf("%f", &n4);

	media = (n1 + n2 + n3 + n4) / 4;
	
	if (media >= 7) {
		printf("Media: %.2f | Aprovado\n", media);
	}
	else {
		printf("Media: %.2f | Reprovado\n", media);
	}




	system("pause");
	return 0;
}