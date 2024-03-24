#include <stdio.h>
#include <stdlib.h>
/*11. Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
SALáRIo 				PERCENTuAL DE AuMENTo
Até R$ 300,00 				15%
R$ 300,00 R$ 600,00 		10%
R$ 600,00 R$ 900,00 		5%
Acima de R$ 900,00 			0% */

int main() {
	float sal, novo_sal, aumento;

	printf("Digite o seu salario atual: ");
	scanf("%f", &sal);

	if (sal <= 300) {
		aumento = 0.15 * sal;
	}
	if (sal > 300 && sal < 600) {
		aumento = 0.10 * sal;
	}
	if (sal >= 600 && sal <= 900) {
		aumento = 0.05 * sal;
	}
	if (sal > 900) {
		aumento = 0;
	}
	novo_sal = aumento + sal;
	printf("seu aumento foi de R$ %.2f | Tendo um salario de R$ %.2f\n", aumento, novo_sal);

 system("pause");
 return 0;

}