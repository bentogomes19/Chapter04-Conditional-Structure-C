#include <stdio.h>
#include <stdlib.h>
/*14. Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.

FAIxA SALARIAL 				% DE AuMENTo
Até R$ 300,00 					50%
R$ 300,00 R$ 500,00 			40%
R$ 500,00 R$ 700,00 			30%
R$ 700,00 R$ 800,00 			20%
R$ 800,00 R$ 1.000,00 			10%
Acima de R$ 1.000,00 			5% */
int main() {
	float sal, novo_sal, aumento;


	printf("Digite o seu salario R$: ");
	scanf("%f", &sal);

	if (sal <= 300 ) {
		aumento = 0.5 * sal;
	}
	if (sal > 300 && sal <= 500) {
		aumento = 0.4 * sal;
	}
	if (sal > 500 && sal <= 700) {
		aumento = 0.3 * sal;
	}
	if (sal > 700 && sal <= 800) {
		aumento = 0.2 * sal;
	}
	if (sal > 800 && sal <= 1000) {
		aumento = 0.1 * sal;
	}
	if (sal > 1000) {
		aumento = 0.05 * sal;
	}

	novo_sal = sal + aumento;
	printf("Aumento de R$ %.2f | Salario atualizado R$ %.2f\n", aumento, novo_sal);

	system("pause");
	return 0;
}