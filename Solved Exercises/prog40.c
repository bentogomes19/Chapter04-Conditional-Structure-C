#include <stdio.h>
#include <stdlib.h>
/*15. Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.

 	TIPo 			DESCRIção 			RENDIMENTo MENSAL
	1 				Poupança 					3%
	2 			Fundos de renda fixa 			4%*/
int main() {
	int tipo;
	float valor_rend, rend, valor_corrigido;

	printf("1 - Poupanca \n");
	printf("2 - Fundos de renda fixa \n");
	printf("Digite o tipo de investimento: ");
	scanf("%d", &tipo);

	printf("Digite o valor do rendimento R$: ");
	scanf("%f", &valor_rend);

	if (tipo == 1) {
		rend = 0.03 * valor_rend;
	}	
	if (tipo == 2) {
		rend = 0.04 * valor_rend;
	}
	if (tipo > 2) {
		printf("Codigo invalido... tente novamente\n");
	}
	valor_corrigido = valor_rend + rend;
	printf("Rendimento Mensal R$ %.2f | Valor do rendimento + Rendimento mensal = R$ %.2f\n", rend, valor_corrigido);

	system("pause");
	return 0;
}
