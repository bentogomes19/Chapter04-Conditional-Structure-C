#include <stdio.h>
#include <stdlib.h>
/*A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, 
a um trabalho de laboratório, a uma avaliação semestral e a um exame final. 
A média das três notas mencionadas obedece aos pesos a seguir:
NOTA PESO
Trabalho de laboratório 2
Avaliação semestral 3
Exame final 5 
Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
a tabela:
MÉDIA PONDERADA CONCEITO
8,0 10,0 A
7,0 8,0 B
6,0 7,0 C
5,0 6,0 D
0,0 5,0 E */

int main() {
	float n1, n2, n3, media_ponderada;
	char nome[22];

	printf("Digite o seu nome: ");
	scanf("%s", &nome);

	printf("%s --> informe a nota do trabalho de laobratorio: ", nome);
	scanf("%f", &n1); // trabalho do laboratorio

	printf("%s --> informe a nota da avaliacao semestral: ", nome);
	scanf("%f", &n2); //availação semestral

	printf("%s --> informe a nota do exame final: ", nome);
	scanf("%f", &n3); //exame final

	media_ponderada = ((n1 * 2) + (n2 * 3 ) + (n3 * 5)) / 10;
	printf("%s --> a media ponderada : %.2f\n", nome, media_ponderada);

	if (media_ponderada >= 8.00 && media_ponderada <= 10) {
		printf("CONCEITO A\n");

	}

	if (media_ponderada >= 7.00 && media_ponderada <= 8.00) {
		printf("CONCEITO B\n");

	}

	if (media_ponderada >= 6.00 && media_ponderada <= 7.00) {
		printf("CONCEITO C\n");

	}

	if (media_ponderada >= 5.00 && media_ponderada <= 6.00) {
		printf("CONCEITO D\n");

	}

	if (media_ponderada <= 5.00) {
		printf("CONCEITO E\n");

	}

	system("pause");
	return 0;
}