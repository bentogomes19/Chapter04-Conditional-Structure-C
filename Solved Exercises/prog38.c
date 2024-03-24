#include <stdio.h>
#include <stdlib.h>
/*13. Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
 TABELA 1 — PERCENTuAL DE AuMENTo
		PREço 					%
Até R$ 50,00 					5
Entre R$ 50,00 e R$ 100,00 		10
Acima de R$ 100,00 				15 

TABELA 2 — CLASSIFICAçõES
NoVo PREço 								CLASSIFICAção
Até R$ 80,00 								Barato
Entre R$ 80,00 e R$ 120,00 (inclusive) 		Normal
Entre R$ 120,00 e R$ 200,00 (inclusive) 	Caro
Maior que R$ 200,00 						Muito caro*/



int main() {
	float preco, aumento, novo_preco;

	printf("Digite o preco do produto R$: ");
	scanf("%f", &preco);

	if (preco < 50) {
		aumento = 0.05 * preco;
	}
	if (preco >= 50 && preco <= 100) {
		aumento = 0.1 * preco;
	}
	if (preco > 100) {
		aumento = 0.15 * preco;
	}

	novo_preco = preco + aumento;

	if (novo_preco < 80) {
		printf("Barato\n");
	}
	if (novo_preco >= 80 && novo_preco <= 120) {
		printf("Normal\n");
	}
	if (novo_preco > 120 && novo_preco <= 200) {
		printf("Caro\n");
	}
	if (novo_preco > 200) {
		printf("Muito Caro\n");
	}
	printf("Novo reco do produto: R$ %.2f\n", novo_preco);

	system("pause");
	return 0;
}