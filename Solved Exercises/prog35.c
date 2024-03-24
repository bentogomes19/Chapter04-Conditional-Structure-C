#include <stdio.h>
#include <stdlib.h>

/*10. O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor
 CuSTo DE FáBRICA 									% Do DISTRIBuIDoR 						% dos IMPoSToS
Até R$ 12.000,00 											5 									isento
Entre R$ 12.000,00 e R$ 25.000,00 							10 									15
Acima de R$ 25.000,00 										15 									20*/

int main() {
	float custo, preco, dist, imposto;

	printf("Digite o custo de fabrica do carro (R$): ");
	scanf("%f", &custo);

	if (custo < 12000) {
		dist = 0.05 * custo;
		imposto = 0;
		preco = custo + dist + imposto;
	}
	if (custo >= 12000 && custo <= 25000) {
		dist = 0.10 * custo;
		imposto = 0.15 * custo;
		preco = custo + dist + imposto;
	}
	if (custo > 25000) {
		dist = 0.15 * custo;
		imposto = 0.20 * custo;
		preco = custo + dist + imposto;
	}
	printf("Custo de fabrica do carro: R$ %.2f\n", custo);
	printf("Taxa de Distribuicao: R$ %.2f\n", dist);
	printf("Imposto: R$ %.2f\n", imposto);
	printf("Preco final do carro: R$ %.2f\n", preco);

	system("pause");
	return 0;
}