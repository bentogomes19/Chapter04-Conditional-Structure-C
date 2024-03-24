#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*24. Faça um programa que receba o preço, o tipo (A — alimentação; l — limpeza; e v — vestuário) e a
refrigeração (S — produto que necessita de refrigeração; e N — produto que não necessita de refrigeração) de um produto. Suponha que haverá apenas a digitação de dados válidos e, quando houver
digitação de letras, utilize maiúsculas. calcule e mostre: */

int main() {
	float preco, valor_add, desc, novo_preco, preco_custo, imposto;
	char refrig, tipo;

	printf("Digite o preco do produto (R$): ");
	scanf("%f", &preco);

	printf("Informe o tipo do produto | A - ALIMENTACAO | L - LIMPEZA | V - VESTUARIO : ");
	scanf("%s", &tipo);
	tipo=toupper(tipo);

	printf("Seu produto possui refrigeracao | S - SIM | N - NAO: ");
	scanf("%s", &refrig);
	refrig=toupper(refrig);

	if (refrig == 'N') { // SE O PRODUTO NAO POSSUIR REFRIGERACAO
		if (tipo == 'A') // ALIMENTAÇÃO
			if (preco < 15) {
				valor_add = 2;
			}
			if (preco >= 15) {
				valor_add = 5;
			}

		if (tipo == 'L') { // LIMPEZA
			if (preco < 10) {
				valor_add = 1.50;
			}
			if (preco >= 10) {
				valor_add = 2.50;
			}
		}
		if (tipo == 'V') { // VESTUÁRIO
			if (preco < 30) {
				valor_add = 3;
			}
			if (preco >= 30) {
				valor_add = 2.50;
			}
		}
		
	}
	if (refrig == 'S') { // SE O PRODUTO POSSUIR REFRIGERACAO
		if (tipo == 'A') { // ALIMENTAÇÃO
			valor_add = 8;
		}
		if (tipo == 'L') { // LIMPEZA
			valor_add = 0;
		}
		if (tipo == 'V') { // VESTUÁRIO
			valor_add = 0;
		}
	}

	if (preco < 25) {
		imposto = 0.05 * preco;
	}
	if (preco >= 25) {
		imposto = 0.08 * preco;
	}

	preco_custo = preco + imposto;

	if (tipo == 'A') {
		if (refrig == 'S') {
			desc = 0;
		}
	}
	else {
		desc = 0.03 * preco;
	}
	novo_preco = preco_custo - desc;

	if (novo_preco <= 50) {
		printf("Barato\n");
	}
	else if (novo_preco > 50 && novo_preco < 100) {
		printf("Normal\n");
	}
	else if (novo_preco >= 100) {
		printf("Caro\n");
	}


	printf("Valor adicional --> R$ %.2f\n", valor_add);
	printf("Imposto --> R$ %.2f\n", imposto);
	printf("Preco de custo --> R$ %.2f\n", preco_custo);
	printf("Desconto --> R$ %.2f\n", desc);
	printf("Novo preco --> R$ %.2f\n", novo_preco);



	system("pause");
	return 0;
}