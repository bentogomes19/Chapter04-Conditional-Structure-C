#include <stdlib.h>
#include <stdio.h>

/*20. Faça um programa que receba:
■■ O código de um produto comprado, supondo que a digitação do código do produto seja sempre
válida, isto é, um número inteiro entre 1 e 10.
■■ O peso do produto em quilos.
■■ O código do país de origem, supondo que a digitação do código seja sempre válida, isto é, um nú-
mero inteiro entre 1 e 3.
Tabelas:
CÓDIGO DE ORIGEM DO PAIS	MPoSTo
		1 					0%
		2 					15%
		3 					25%
CÓDIGO DO PRODUTO 		PREÇO POR GRAMA
1 a 4 						10
5 a 7 						25
8 a 10 						35 
calcule e mostre:
■■ o peso do produto convertido em gramas;
■■ o preço total do produto comprado;
■■ o valor do imposto, sabendo que ele é cobrado sobre o preço total do produto comprado e depende
do país de origem;
■■ o valor total, preço total do produto mais imposto.*/

int main() {
	int cod_origem, cod_produto;
	float peso, preco_total, imposto, valor_total, peso_g;

	printf("CODIGO DO PRODUTO\n");
	printf("\t 1 a 4\n");
	printf("\t 5 a 7\n");	
	printf("\t 8 a 10\n");
	printf("Digite o codigo do produto: ");
	scanf("%d", &cod_produto);

	printf("CODIGO DE ORIGEM DO PAIS\n");
	printf("\t 1\n");
	printf("\t 2\n");
	printf("\t 3\n");
	printf("Digite o codigo de origem do pais: ");
	scanf("%d", &cod_origem);

	printf("Informe o peso do produto em kg: ");
	scanf("%f", &peso);
	peso_g = peso * 1000;
	if (cod_origem == 1) {
		if (cod_produto >= 1 && cod_produto <= 4) {
			preco_total = peso_g * 10;
			valor_total = preco_total;
		}
		if (cod_produto >= 5 && cod_produto <= 7) {
			preco_total = peso_g * 25;
			imposto = 0.15 * preco_total;
			valor_total = preco_total + imposto;
		}
		if (cod_produto >= 8 && cod_produto <= 10) {
			preco_total = peso_g * 35;
			imposto = 0.25 * preco_total;
			valor_total = preco_total + imposto;
		}
	}
	if (cod_origem == 2) {
		if (cod_produto >= 1 && cod_produto <= 4) {
			preco_total = peso_g * 10;
			valor_total = preco_total;
		}
		if (cod_produto >= 5 && cod_produto <= 7) {
			preco_total = peso_g * 25;
			imposto = 0.15 * preco_total;
			valor_total = preco_total + imposto;
		}
		if (cod_produto >= 8 && cod_produto <= 10) {
			preco_total = peso_g * 35;
			imposto = 0.25 * preco_total;
			valor_total = preco_total + imposto;
		}
	}
	if (cod_origem == 3) {
		if (cod_produto >= 1 && cod_produto <= 4) {
			preco_total = peso_g * 10;
			valor_total = preco_total;
		}
		if (cod_produto >= 5 && cod_produto <= 7) {
			preco_total = peso_g * 25;
			imposto = 0.15 * preco_total;
			valor_total = preco_total + imposto;
		}
		if (cod_produto >= 8 && cod_produto <= 10) {
			preco_total = peso_g * 35;
			imposto = 0.25 * preco_total;
			valor_total = preco_total + imposto;
		}
	}
	printf("PESO DO PRODUTO EM GRAMAS (g) --> %.2f\n", peso_g);
	printf("PRECO TOTAL DO PRODUTO COMPRADO --> R$ %.2f\n", preco_total);
	printf("VALOR DO IMPOSTO A SER COBRADO --> R$ %.2f\n", imposto);
	printf("VALOR TOTAL DO PRODUTO --> R$ %.2f\n", valor_total);
	printf("\n\n");

	system("pause");
	return 0;
}