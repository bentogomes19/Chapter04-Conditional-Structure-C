#include <stdlib.h>
#include <stdio.h>

/*19. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e 
mostre a classificação dessa pessoa.
	ALTuRA
												PESo
									ATÉ 60 			ENTRE 60 E 90 (INCLuSIVE) 				ACIMA DE 90
Menores que 1,20 						A 						D 								G
De 1,20 a 1,70 							B 						E 								H
Maiores que 1,70 						C 						F 								I */

int main() {
	float altura, peso;

	printf("Digite a sua altura em (metros): ");
	scanf("%f", &altura);

	printf("Digite o seu peso em (quilos): ");
	scanf("%f", &peso);

	if (altura < 1.20) {
		if (peso < 60) {
			printf("CLASSSIFICACAO A\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("CLASSSIFICACAO D\n");
		}
		if (peso > 90) {
			printf("CLASSSIFICACAO G\n");
		}
	}
	else if (altura >= 1.20 && altura <= 1.70) {
		if (peso < 60) { 
			printf("CLASSSIFICACAO B\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("CLASSSIFICACAO E\n");
		}
		if (peso > 90) {
			printf("CLASSSIFICACAO H\n");
		}
	}
	else if (altura > 1.70) {
		if (peso < 60) {
			printf("CLASSSIFICACAO C\n");
		}
		if (peso >= 60 && peso <= 90) {
			printf("CLASSSIFICACAO F\n");

		}
		if (peso > 90) {
			printf("CLASSSIFICACAO I\n");

		}

	}



	printf("\n\n");
	system("pause");
	return 0;

}