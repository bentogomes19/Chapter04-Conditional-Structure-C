#include <stdio.h>
#include <stdlib.h>

/*15. Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas, o número
de dependentes do funcionário e a quantidade de horas extras trabalhadas. calcule e mostre o salário
a receber do funcionário de acordo com as regras a seguir:
■■ O valor da hora trabalhada é igual a 1/5 do salário mínimo.
■■ O salário do mês é igual ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada.
■■ Para cada dependente, acrescentar R$ 32,00.
■■ Para cada hora extra trabalhada, calcular o valor da hora trabalhada acrescida de 50%.
■■ O salário bruto é igual ao salário do mês mais o valor dos dependentes mais o valor das horas
extras.
■■ calcular o valor do imposto de renda retido na fonte de acordo com a tabela a seguir:
IRRF SALáRIo 							BRuTo
Isento 								Inferior a R$ 200,00
10% 								De R$ 200,00 até R$ 500,00
20% 								Superior a R$ 500,00
■ O salário líquido é igual ao salário bruto menos IRRF.
■■ A gratificação é de acordo com a tabela a seguir:
SALáRIo LíquIDo 					gRATIFICAção
Até R$ 350,00 						R$ 100,00
Superior a R$ 350,00 				R$ 50,00
■ O salário a receber do funcionário é igual ao salário líquido mais a gratificação. */

int main() {
	float sal_min, sal, vlr_hora, vlr_hora_extra, sal_bruto, bonus_dep, sal_liq, grat, sal_receber, imposto;
	int nr_horas, nr_dep, hr_extra;

	printf("Digite o salario minimo atual (R$): ");
	scanf("%f", &sal_min);

	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%d", &nr_horas);

	printf("Digite o numero de dependentes: ");
	scanf("%d", &nr_dep);

	printf("Digite a quantidade de horas extras trabalhadas no mes: ");
	scanf("%d", &hr_extra);

	vlr_hora = sal_min / 5; // 1320 / 5
	sal = nr_horas * vlr_hora; // x horas * 1320 / 5
	bonus_dep = nr_dep * 32;
	vlr_hora_extra = hr_extra * (vlr_hora + (0.50 * vlr_hora));
	sal_bruto = sal + bonus_dep + vlr_hora_extra;

	if (sal_bruto < 200) { // IRRF
		imposto = 0;
	}
	else if (sal_bruto >= 200 && sal_bruto <= 500) {
		imposto = 0.10 * sal_bruto;
	}
	else if (sal_bruto > 500) {
		imposto = 0.20 * sal_bruto;
	}

	sal_liq = sal_bruto - imposto; // SALARIO LÍQUIDO

	if (sal_liq <= 350) {
		grat = 100;
	}
	else if (sal_liq > 350) {
		grat = 50;
	}

	sal_receber = sal_liq + grat; // SALÁRIO A RECEBER

	printf("BONUS POR DEPENDENTE: R$ %.f\n", bonus_dep);
	printf("HORAS EXTRAS: R$ %.f\n", vlr_hora_extra);
	printf("IMPOSTOS: R$ %.f\n", imposto);
	printf("SALARIO BRUTO: R$ %.2f\n", sal_bruto);
	printf("SALARIO LIQUIDO: R$ %.2f\n", sal_liq);
	printf("SALARIO A RECEBER: R$ %.f\n", sal_receber);


	system("pause");
	return 0;
}