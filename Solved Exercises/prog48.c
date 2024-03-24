#include <stdio.h> 
#include <stdlib.h>
/*23. Faça um programa que receba:
■■ o código do produto comprado; e
■■ a quantidade comprada do produto.
calcule e mostre:
■■ o preço unitário do produto comprado, seguindo a Tabela I;
■■ o preço total da nota;
■■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■■ o preço final da nota depois do desconto.
		TABELA I
CóDIgo 				PREço
1 a 10 				R$ 10,00
11 a 20 			R$ 15,00
21 a 30 			R$ 20,00
31 a 40 			R$ 30,00 
		TABELA II
PREço ToTAL DA NoTA 			% DE DESCoNTo
Até R$ 250,00 						5%
Entre R$ 250,00 e R$ 500,00 		10%
Acima de R$ 500,00 					15%*/

int main() {
	int cod, qtd;
	float preco, p_total, desc, p_final;

	printf("Digite o codigo do produto comprado (de 1 a 40): ");
	scanf("%d", &cod);

	printf("Informe a quantidade comprada: ");
	scanf("%d", &qtd);

	if (cod >= 1 && cod <= 10) {
		preco = 10;
	}
	if (cod >= 11 && cod <=20) {
		preco = 15;
	}
	if (cod >=21 && cod <= 30) {
		preco = 20;
	}
	if (cod >= 31 && cod <= 40) {
		preco = 30;
	}

	p_total = preco * qtd;
	if (p_total <= 250) {
		desc = 0.05 * p_total;
	}
	if (p_total > 250 && p_total <=500) {
		desc = 0.10 * p_total;
	}
	if (p_total > 500) {
		desc = 0.15 * p_total;
	}
	p_final = p_total - desc;
	printf("Preco Unitario --> R$ %.2f\n", preco);
	printf("Preco Total da nota --> R$ %.2f\n", p_total);
	printf("Valor do desconto --> R$ %.2f\n", desc);
	printf("Preco Final --> R$ %.2f\n", p_final);

	system("pause");
	 return 0;
}