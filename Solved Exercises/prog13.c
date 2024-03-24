#include <stdio.h>
#include <stdlib.h>
/*13. Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, receba os dados
necessários para executar a operação e mostre o resultado. verifique a possibilidade de opção inválida e
não se preocupe com restrições, como salário negativo.
Menu de opções:
1. Imposto
2. Novo salário
3. classificação
Digite a opção desejada.
Na opção 1: receber o salário de um funcionário, calcular e mostrar o valor do imposto usando as regras
a seguir.
 SALáRIo 										PERCENTuAL Do IMPoSTo
Menor que R$ 500,00 									5%
De R$ 500,00 (inclusive) a R$ 850,00 (inclusive) 		10%
Acima de R$ 850,00 										15%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor do novo salário, usando as
regras a seguir.
SALáRIo 													AuMENTo
Maior que R$ 1.500,00 										R$ 25,00
De R$ 750,00 (inclusive) a R$ 1.500,00 (inclusive) 			R$ 50,00
De R$ 450,00 (inclusive) a R$ 750,00 						R$ 75,00
Menor que R$ 450,00 										R$ 100,00
Na opção 3: receber o salário de um funcionário e mostrar sua classificação usando a tabela a seguir.
SALáRIo 									CLASSIFICAção
Até R$ 700,00 (inclusive) 					Mal remunerado
Maiores que R$ 700,00 						Bem remunerado */

int main() {
	float sal_funcionario, novo_sal, imposto, aumento;
	int op;

	printf("MENU DE OPCOES:\n");
	printf("1. Imposto\n");
	printf("2. Novo salario\n");
	printf("3 - Classificacao\n");
	printf("Digite uma das opcoes acima: ");
	scanf("%d", &op);

	if (op >= 1 && op <= 3) {
		if (op == 1) {
			printf("Digite o seu salario atual R$: ");
			scanf("%f", &sal_funcionario);
			if (sal_funcionario < 500) {
				imposto = 0.05 * sal_funcionario;
				novo_sal = imposto + sal_funcionario;
			}
			if (sal_funcionario >= 500 && sal_funcionario <= 850) {
				imposto = 0.10 * sal_funcionario;
				novo_sal = imposto + sal_funcionario;
			}
			if (sal_funcionario > 850) {
				imposto = 0.15 * sal_funcionario;
				novo_sal = imposto + sal_funcionario;
			}
			printf("IMPOSTOS: R$ %.2f --> SALARIO A RECEBER: R$ %.2f", imposto, novo_sal);
		}
		if (op == 2) {
			printf("Digite o seu salario atual R$: ");
			scanf("%f", &sal_funcionario);
			if (sal_funcionario > 1500) {
				aumento = 25;
				novo_sal = aumento + sal_funcionario;
			}
			if (sal_funcionario >= 750 && sal_funcionario <= 1500) {
				aumento = 50;
				novo_sal = aumento + sal_funcionario;
			}
			if (sal_funcionario >= 450 && sal_funcionario < 750) {
				aumento = 75;
				novo_sal = aumento + sal_funcionario;
			}
			if (sal_funcionario < 450) {
				aumento = 100;
				novo_sal = aumento + sal_funcionario;
			}
			printf("AUMENTO: R$ %.2f --> NOVO SALARIO: R$ %.2f", aumento, novo_sal);
		}
		if (op == 3) {
			printf("Digite o seu salario atual R$: ");
			scanf("%f", &sal_funcionario);

			if (sal_funcionario <= 750) {
				printf("MAL REMUNERADO!!!");
			}
			else if (sal_funcionario > 750) {
				printf("BEM REMUNERADO!!!");
			}
		}
	}
	else {
		printf("CODIGO INVALIDO...");
	}


	printf("\n\n");
	system("pause");
	return 0;
}