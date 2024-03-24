#include <stdio.h>
#include <stdlib.h>

/*21. Faça um programa que receba:
■■ o código do estado de origem da carga de um caminhão, supondo que a digitação do código do
estado seja sempre válida, isto é, um número inteiro entre 1 e 5;
■■ o peso da carga do caminhão em toneladas;
■■ o código da carga, supondo que a digitação do código seja sempre válida, isto é, um número inteiro
entre 10 e 40.Tabelas:
CóDIgo Do ESTADo 						IMPoSTo
1 										35%
2 										25%
3 										15%
4 										5%
5 										Isento

CóDIgo DA CARgA 					PREço PoR quILo
10 a 20 								100
21 a 30 								250
31 a 40 								340 
calcule e mostre:
■■ o peso da carga do caminhão convertido em quilos;
■■ o preço da carga do caminhão;
■■ o valor do imposto, sabendo que o imposto é cobrado sobre o preço da carga do caminhão e depende do estado de origem;
■■ o valor total transportado pelo caminhão, preço da carga mais imposto.*/

int main() {
	int cod_estado, cod_carga;
	float imposto, peso_ton, peso_kg, preco_carga, valor_total;
	printf("CODIGO DO ESTADO\n");
	printf("1\n2\n3\n4\n5\n");
	printf("Digite o codigo do estado: ");
	scanf("%d", &cod_estado);

	printf("CODIGO DA CARGA\n");
	printf("10 a 20\n21 a 30\n31 a 40\n");
	printf("Digite o codigo da carga: ");
	scanf("%d", &cod_carga);

	printf("Digite o peso da carga em toneladas (Ton): ");
	scanf("%f", &peso_ton);
	peso_kg = peso_ton * 1000;

	if (cod_estado == 1) {
		if (cod_carga >= 10 && cod_carga <= 20) {
			preco_carga = peso_kg * 100;
			imposto = 0.35 * preco_carga;
			valor_total = preco_carga + imposto;

		}
		if (cod_carga >= 21 && cod_carga <= 30) {
			preco_carga = peso_kg * 250;
			imposto = 0.35 * preco_carga;
			valor_total = preco_carga + imposto;
		}
		if (cod_carga >= 31 && cod_carga <= 40) {
			preco_carga = peso_kg * 340;
			imposto = 0.35 * preco_carga;
			valor_total = preco_carga + imposto;
		}
	}
	if (cod_estado == 2) {
		if (cod_carga >= 10 && cod_carga <= 20) {
			preco_carga = peso_kg * 100;
			imposto = 0.25 * preco_carga;
			valor_total = preco_carga + imposto;

		}
		if (cod_carga >= 21 && cod_carga <= 30) {
			preco_carga = peso_kg * 250;
			imposto = 0.25 * preco_carga;
			valor_total = preco_carga + imposto;
		}
		if (cod_carga >= 31 && cod_carga <= 40) {
			preco_carga = peso_kg * 340;
			imposto = 0.25 * preco_carga;
			valor_total = preco_carga + imposto;
		}
	}
	if (cod_estado == 3) {
		if (cod_carga >= 10 && cod_carga <= 20) {
			preco_carga = peso_kg * 100;
			imposto = 0.15 * preco_carga;
			valor_total = preco_carga + imposto;

		}
		if (cod_carga >= 21 && cod_carga <= 30) {
			preco_carga = peso_kg * 250;
			imposto = 0.15 * preco_carga;
			valor_total = preco_carga + imposto;
		}
		if (cod_carga >= 31 && cod_carga <= 40) {
			preco_carga = peso_kg * 340;
			imposto = 0.15 * preco_carga;
			valor_total = preco_carga + imposto;
		}
	}
	if (cod_estado == 4) {
		if (cod_carga >= 10 && cod_carga <= 20) {
			preco_carga = peso_kg * 100;
			imposto = 0.5 * preco_carga;
			valor_total = preco_carga + imposto;

		}
		if (cod_carga >= 21 && cod_carga <= 30) {
			preco_carga = peso_kg * 250;
			imposto = 0.5 * preco_carga;
			valor_total = preco_carga + imposto;
		}
		if (cod_carga >= 31 && cod_carga <= 40) {
			preco_carga = peso_kg * 340;
			imposto = 0.5 * preco_carga;
			valor_total = preco_carga + imposto;
		}
	}
	if (cod_estado == 5) {
		if (cod_carga >= 10 && cod_carga <= 20) {
			preco_carga = peso_kg * 100;
			imposto = 0;
			valor_total = preco_carga + imposto;

		}
		if (cod_carga >= 21 && cod_carga <= 30) {
			preco_carga = peso_kg * 250;
			imposto = 0;
			valor_total = preco_carga + imposto;
		}
		if (cod_carga >= 31 && cod_carga <= 40) {
			preco_carga = peso_kg * 340;
			imposto = 0;
			valor_total = preco_carga + imposto;
		}
	}
	printf("O PESO DA CARGA CONVERTIDO EM QUILOS (KG) --> %.f kg\n", peso_kg);
	printf("O PRECO DA CARGA DO CAMINHAO: R$ %.2f\n", preco_carga);
	printf("O VALOR DO IMPOSTO A SER COBRADO: R$ %.2f\n", imposto);
	printf("-----------------------------------------------------------\n");
	printf("O VALOR TOTAL TRANSPORTADO PELO CAMINHAO ==> R$ %.2f\n", valor_total);

	system("pause");
	return 0;

}