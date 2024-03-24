#include <stdio.h>
#include <stdlib.h>

/*8. Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
 SALáRIo 						PERCENTuAL DE AuMENTo
Até R$ 300,00 							35%
Acima de R$ 300,00 						15% */

int main() {
	float sal, novo_sal;

	printf("Digite o seu salario atual (R$): ");
	scanf("%f", &sal);

	if (sal <= 300) {
		novo_sal = (0.35 * sal) + sal;
	}
	else {
		novo_sal = (0.15 * sal) + sal;
	}

	printf("Novo salario de --> R$ %.2f\n", novo_sal);

	system("pause");
	return 0;
}