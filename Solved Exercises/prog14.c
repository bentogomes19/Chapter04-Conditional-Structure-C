#include <stdio.h>
#include <stdlib.h>

/*14. Faça um programa que receba o salário inicial de um funcionário, calcule e mostre o novo salário,
acrescido de bonificação e de auxílio escola.
SALáRIo 								BoNIFICAção
Até R$ 500,00 							5% do salário
Entre R$ 500,00 e R$ 1.200,00 			12% do salário
Acima de R$ 1.200,00 					Sem bonificação
SALáRIo 				AuxíLIo ESCoLA
Até R$ 600,00 				R$ 150,00
Acima de R$ 600,00 			R$ 100,00 */
// bonificacação = x ; auxilio escola = y
int main() {
	float sal, x, y, novo_sal;

	printf("Digite o salario inicial (R$): ");
	scanf("%f", &sal);

	if (sal < 500) { /* Bonificação*/
		x = 0.05 * sal;
	}
	else if (sal >= 500 && sal <= 1200) {
		x = 0.12 * sal;
	}
	else if ( sal > 1200) {
		x = 0;
		printf("sem bonificacao");
	}
	if (sal <= 600) { /* Auxílio escola*/
		y = 150;
	}
	if (sal > 600) {
		y = 100;
	}
	novo_sal = x + y + sal;
	printf("Voce recebera uma bonificacao de R$ %.2f e um auxilio escola de R$ %.2f totalizando: R$ %.2f", x, y, novo_sal);
	printf("\n\n");
	system("pause");
	return 0;
}