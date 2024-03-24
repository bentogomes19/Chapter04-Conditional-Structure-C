#include <stdio.h> 
#include <stdlib.h>
/*22. Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.
															PESo
IDADE						Até 60 			Entre 60 e 90 (inclusive) 				Acima de 90
Menores que 20 				9 							8 								7
De 20 a 50 					6 							5 								4	
Maiores que 50 				3 							2 								1 */

int main() {
	int idade;
	float peso;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	printf("Digite o seu peso: ");
	scanf("%f", &peso);

	if (idade < 20) {
		if (peso < 60) {
			printf("Grupo de risco 9\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("Grupo de risco 8\n");
		}
		if (peso > 90) {
			printf("Grupo de risco 7\n");
		}
	}

	if (idade >= 20 && idade <= 50) {
		if (peso < 60) {
			printf("Grupo de risco 6\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("Grupo de risco 5\n");
		}
		if (peso > 90) {
			printf("Grupo de risco 4\n");
		}
	}

	if (idade > 50) {
		if (peso < 60) {
			printf("Grupo de risco 3\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("Grupo de risco 2\n");
		}
		if (peso > 90) {
			printf("Grupo de risco 1\n");
		}
	}
	system("pause");
	 return 0;
}