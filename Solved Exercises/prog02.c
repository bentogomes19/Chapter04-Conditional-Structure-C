#include <stdlib.h>
#include <stdio.h>

/*2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
tirar para serem aprovados, considerando que a média exigida é 6,0 */

int main() {
	float n1, n2, n3, media, media_exame;

	printf("Digite a nota 1 da prova: "); 
	scanf("%f", &n1);

	printf("Digite a nota 2 da prova: "); 
	scanf("%f", &n2);

	printf("Digite a nota 3 da prova: "); 
	scanf("%f", &n3);

	media = (n1 + n2 + n3) / 3;

	if (media >= 7 && media <= 10) {

		printf("Parabens!! APROVADO\n");
	}
	if (media >= 3 && media < 7) {

		printf("VOCE ESTA DE EXAME\n");
		media_exame = (6 - media) + 6;
		printf("Voce precisa tirar: %.2f para passar\n", media_exame);
	}
	if (media < 3) {
		printf("REPROVADO\n");
	}



	printf("\n\n");
	system("pause");
	return 0;
}