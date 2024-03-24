#include <stdio.h>
#include <stdlib.h>

/*7. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento. */

int main() {	
	float sal, reajuste, novo_sal;

	printf("Digite o seu salario (R$): ");
	scanf("%f", &sal);

	if (sal < 500) {
		novo_sal = (0.3 * sal) + sal;
		printf("Reajuste de 30 porcento | Novo salario --> R$ %.2f\n", novo_sal);
	}
	else {
		printf("Voce nao tem direito a aumento salario devido as politicas internas\n");
	}


	system("pause");
	return 0;
}