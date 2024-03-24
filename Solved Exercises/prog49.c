#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>
/*24. Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de refrigeração).
calcule e mostre:
■■ O valor do aumento, usando as regras que se seguem

PREço 				CATEgoRIA 					PERCENTuAL DE AuMENTo
						1 								5%
< = 25					2 								8%
						3 								10%

						1 								12%
> 25					2 								15%
						3 								18%
■ O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
■■ O novo preço, ou seja, o preço mais aumento menos imposto.
■■ A classificação, usando as regras a seguir.

NoVo PREço 						CLASSIFICAção
< = R$ 50,00 					Barato
Entre R$ 50,00 e R$ 120,00 		Normal
> = R$ 120,00 					Caro */

int main() {
	int cat;
	char refrig;
	float imposto, novo_preco, aumento, preco;


	printf("Digite o preco do produto R$: ");
	scanf("%f", &preco);

	printf("1 - Limpeza | 2 - Alimentacao | 3 - Vestuario |\n");
	printf("Digite a categoria: ");
	scanf("%d", &cat);
	fflush(stdin);

	printf("Informe a situacao do produto\n");
	printf("R - Necessita de refrigeracao\n");
	printf("N - Nao Necessita de refrigeracao\n");
	printf("--> ");
	scanf("%c", &refrig);
	refrig=toupper(refrig);

	if (preco <= 25) {
		if (cat == 1) {
			aumento = 0.05 * preco;
		}
		else if (cat == 2 ) {
			aumento = 0.08 * preco;
		}
		else if (cat == 3 ) {
			aumento = 0.10 * preco;
		}
	}
	else {
		 if (cat == 1) {
			aumento = 0.12 * preco;
		}
		else if (cat == 2 ) {
			aumento = 0.15 * preco;
		}
		else if (cat == 3 ) {
			aumento = 0.18 * preco;
		}
	}

	if (cat == 2 || refrig == 'R') {
		imposto = 0.05 * (preco + aumento);
	}
	else {
		imposto = 0.08 * (preco + aumento);
	}

	novo_preco = preco + aumento - imposto;

	if (novo_preco <= 50) {
		printf("Barato \n");
	}
	else if (novo_preco > 50 && novo_preco < 120) {
		printf("Normal\n");
	}
	else if (novo_preco >= 120) {
		printf("Caro\n");
	}

	printf("O valor do Aumento --> R$ %.2f\n", aumento);
	printf("O valor do Imposto --> R$ %.2f\n", imposto);
	printf("Novo preco --> R$ %.2f\n", novo_preco);

	system("pause");
	 return 0;
}