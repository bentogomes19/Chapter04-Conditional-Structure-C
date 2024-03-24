#include <stdio.h>
#include <stdlib.h>

/*12. Faça um programa que receba o código correspondente ao cargo de um funcionário e seu salário atual
e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir.
CóDIgo CARgo PERCENTuAL
1 Escriturário 50%
2 Secretário 35%
3 Caixa 20%
4 Gerente 10%
5 Diretor Não tem aumento */ 

int main() {
	float sal_funcionario, vlr_aumento, novo_sal;
	int cod;

	printf("Funcionario --> digite o seu salario atual: ");
	scanf("%f", &sal_funcionario);

	printf("CARGOS\t\t\tPORCENTAGEM\n");
	printf("1 - Escriturario\t\t50\n");
	printf("2 - Secretario\t\t\t35\n");
	printf("3 - Caixa\t\t\t20\n");
	printf("4 - Gerente\t\t\t10\n");
	printf("5 - Diretor\t\tN TEM AUMENTO\n");

	printf("Digite o codigo: ");
	scanf("%d", &cod);

	if (cod >= 1 && cod <= 5) {
		if (cod == 1) {
			vlr_aumento = 0.5 * sal_funcionario;
			novo_sal = vlr_aumento + sal_funcionario;
			printf("CARGO: ESCRITURARIO\n");
		}
		else if (cod == 2) {
			vlr_aumento = 0.35 * sal_funcionario;
			novo_sal = vlr_aumento + sal_funcionario;
			printf("CARGO: SECRETARIO\n");

		}
		else if (cod == 3) {
			vlr_aumento = 0.20 * sal_funcionario;
			novo_sal = vlr_aumento + sal_funcionario;
			printf("CARGO: CAIXA\n");
		}
		else if (cod == 4) {
			vlr_aumento = 0.1 * sal_funcionario;
			novo_sal = vlr_aumento + sal_funcionario;
			printf("CARGO: GERENTE\n");
		}
		else if (cod == 5) {
			printf("Diretoria nao tem aumento salarial...\n");
		}
		printf("SALARIO: R$ %.f\n", sal_funcionario);
		printf("O valor do aumento sera de R$ %.2f | COM UM NOVO SALARIO DE : R$ %.2f", vlr_aumento, novo_sal);
	}
	else {
		printf("Codigo invalido!\n");
	}

	printf("\n\n");
	system("pause");
	return 0;

}