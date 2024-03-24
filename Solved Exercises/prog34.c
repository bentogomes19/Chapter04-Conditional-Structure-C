#include <stdio.h>
#include <stdlib.h>

/*9. Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.

SALDo MÉDIo 											PERCENTuAL
Acima de R$ 400,00 									30% do saldo médio
R$ 400,00 R$ 300,00 								25% do saldo médio
R$ 300,00 R$ 200,00 								20% do saldo médio
Até R$ 200,00 										10% do saldo médio */

int main() {
	float saldo_medio, vlr_credito, percentual;


	printf("Digite o valor do saldo medio (R$): ");
	scanf("%f", &saldo_medio);


	if (saldo_medio > 400) {
		percentual = 0.30 * saldo_medio;
		vlr_credito = percentual + saldo_medio;
	} 
	if (saldo_medio > 300 && saldo_medio <= 400) {
		percentual = 0.25 * saldo_medio;
		vlr_credito = percentual + saldo_medio;
	}
	if (saldo_medio > 200 && saldo_medio <= 300) {
		percentual = 0.20 * saldo_medio;
		vlr_credito = percentual + saldo_medio;
	}
	if (saldo_medio <= 200) {
		percentual = 0.1 * saldo_medio;
		vlr_credito = percentual + saldo_medio;
	}

	printf("SALDO MEDIO: R$ %.2f | VALOR DO CREDITO: R$ %.2f\n", saldo_medio, vlr_credito);



	system("pause");
	return 0;
}


