#include <stdlib.h>
#include <stdio.h>

/*22. Faça um programa que receba o salário base e o tempo de serviço de um funcionário. calcule e mostre:

■■ O imposto, conforme a tabela a seguir.

SALáRIo BASE 													% SoBRE o SALáRIo BASE
< R$ 200,00 															isento
Entre R$ 200,00 (inclusive) e R$ 450,00 (inclusive) 					3%
Entre R$ 450,00 e R$ 700,00 											8%
>= R$ 700,00 															12%

■ A gratificação, de acordo com a tabela a seguir 
SALáRIo BASE 						TEMPO DE SERVIÇO						GRATIFICAÇÃO 	
Superior a R$ 500,00 					Até 3 anos 								20
										Mais de 3 anos 							30

Até R$ 500,00 							Até 3 anos 								23
										Entre 3 e 6 anos 						35
										De 6 anos para cima 					33 

■ O salário líquido, ou seja, salário base menos imposto mais gratificação.
■■ A categoria, que está na tabela a seguir.

SALáRIo LíquIDo 					CLASSIFICAção
Até R$ 350,00 							A
Entre R$ 350,00 e R$ 600,00 			B
De R$ 600,00 para cima 					C */

int main() {
	float imposto, sal_base, grat, sal_liquido;
	int temp_servico;

	printf("Digite o seu salario base na empresa (R$): ");
	scanf("%f", &sal_base);

	printf("Digite o tempo de servico na empresa (tempo minimo 1 ano): ");
	scanf("%d", &temp_servico);

	if (sal_base < 200) { // imposto
		imposto = 0;
	}
	else if (sal_base >= 200 && sal_base <= 450) {
		imposto = 0.03 * sal_base;
	}
	else if (sal_base > 450 && sal_base < 700) {
		imposto = 0.08 * sal_base;
	}
	else if (sal_base >= 700) {
		imposto = 0.12 * sal_base;
	}

	if (sal_base > 500) { // gratificação 
		if (temp_servico <= 3) {
			grat = 20;
		}
		if (temp_servico > 3) {
			grat = 30;
		}
	}
	else if (sal_base <= 500) {
		if (temp_servico <= 3) {
			grat = 23;
		}
		if (temp_servico > 3 && temp_servico < 6) {
			grat = 35;
		}
		if (temp_servico > 6) {
			grat = 33;
		}
	}
	sal_liquido = sal_base - imposto + grat;

	if (sal_liquido < 350) { // salario líquido
		printf("CLASSIFICACAO A\n");
	}
	else if (sal_liquido >= 350 && sal_liquido < 600) {
		printf("CLASSIFICACAO B\n");
	}
	else if (sal_liquido >= 600) {
		printf("CLASSIFICACAO C\n");
	}

	printf("Imposto --> R$ %.2f\n", imposto);
	printf("Gratificacao --> %.2f\n", grat);
	printf("Salario liquido --> %.2f\n", sal_liquido);
	printf("\n\n");

	system("pause");
	return 0;
}