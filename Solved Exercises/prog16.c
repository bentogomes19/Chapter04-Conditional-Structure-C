#include <stdio.h>
#include <stdlib.h>

/*16. Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério: o produto
poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher
pelo menos um dos requisitos a seguir:
 VENDA MÉDIA MENSAL 			PREço ATuAL 				% DE AuMENTo 					% DE DIMINuIção
< 500 							< R$ 30,00 						10 									–
>= 500 e < 1.200 			>= R$ 30,00 e < R$ 80,00 			15									–
>= 1.200 						>= R$ 80,00 					– 									20
Faça um programa que receba o preço atual e a venda média mensal do produto, calcule e mostre o
novo preço. */

int main() {
	float preco, venda_media, novo_preco, aumento, diminuicao;

	printf("Digite o preco atual do produto (R$): ");
	scanf("%f", &preco);

	printf("Digite o preco medio de venda do produto (R$): ");
	scanf("%f", &venda_media);

	if (venda_media <= 500 || preco < 30) {
		aumento = 0.10 * preco;
		diminuicao = 0;
		novo_preco = (preco + aumento) - diminuicao;
		printf("O novo preco do produto foi: R$ %.2f\n", novo_preco);
	}
	else if (venda_media > 500 && venda_media < 1200 || preco >= 30 && preco < 80) {
		aumento = 0.15 * preco;
		diminuicao = 0;
		novo_preco = (preco + aumento) - diminuicao;
		printf("O novo preco do produto foi: R$ %.2f\n", novo_preco);
	}
	else if (venda_media >= 1200 || preco >= 80) {
	aumento = 0;
	diminuicao = 0.20 * preco;
	novo_preco = (preco + aumento) - diminuicao;
	printf("O novo preco do produto foi: R$ %.2f\n", novo_preco);
	}

	system("pause");
	return 0;

}