#include <stdio.h>
#include <stdlib.h>
/*16. Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

PREço ATuAL 				% DE DESCoNTo
Até R$ 30,00 				Sem desconto
Entre R$ 30,00 e R$ 100,00 		10%
Acima de R$ 100,00 				15%*/
int main() {
	int cod;
	float preco, desc, npreco;

	printf("Digite o codigo do produto: ");
	scanf("%d", &cod);

	printf("Digite o preco do produto R$: ");
	scanf("%f", &preco);

	if (preco < 30) {
		desc = 0;
	}
	if (preco >= 30 && preco <= 100) {
		desc = 0.10 * preco;
	}
	if (preco > 100) {
		desc = 0.15 * preco;
	}
	npreco = preco - desc;

	printf("Codigo do produto %d | Desconto R$ %.2f | Novo preco R$ %.2f\n", cod, desc, npreco);
	system("pause");
	return 0;
}