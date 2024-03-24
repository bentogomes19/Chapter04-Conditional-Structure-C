#include <stdio.h>
#include <stdlib.h>

/*10. Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo
usuário. cada data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o
segundo, o mês e o terceiro, o ano. */

int main() {
	int dia1, mes1, ano1, dia2, mes2, ano2;

	printf("User> Digite o dia de nascimento: ");
	scanf("%d", &dia1);

	printf("User> Digite o mes de nascimento: ");
	scanf("%d", &mes1);

	printf("User> Digite o ano do nascimento: ");
	scanf("%d", &ano1);
	printf("\n\n");
	printf("User> Digite o dia de nascimento: ");
	scanf("%d", &dia2);

	printf("User> Digite o mes de nascimento: ");
	scanf("%d", &mes2);

	printf("User> Digite o ano do nascimento: ");
	scanf("%d", &ano2);

	if (ano1 == ano2 && mes1 == mes2 && dia1 > dia2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
	}
	else if (ano1 == ano2 && mes1 == mes2 && dia1 < dia2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if (ano1 == ano2 && mes1 > mes2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
	}
	else if (ano1 == ano2 && mes1 < mes2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if (ano1 > ano2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia2, mes2, ano2, dia1, mes1, ano1);
	}
	else if (ano1 < ano2) {
		printf("Maior data: %d/%d/%d --> Menor data: %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}
	else if (ano1 == ano2 && mes1 == mes2 && dia1 > dia2) {
		printf("Temos datas iguais: %d/%d/%d --> : %d/%d/%d", dia1, mes1, ano1, dia2, mes2, ano2);
	}

	printf("\n\n");
	system("pause");

	return 0;
}