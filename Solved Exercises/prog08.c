#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*8. Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e os dados necessários para executar cada operação.
Menu de opções:
1. Somar dois números.
2. Raiz quadrada de um número.
Digite a opção desejada: */

int main() {
	float n1, n2, soma, raiz;
	int op;

	printf(" 1. Somar dois numeros\n");
	printf(" 2. raiz quadrada de um numero\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", &op);

	if (op == 1) {
		printf("Digite um numero qualquer: ");
		scanf("%f",&n1);

		printf("Digite um segundo numero qualquer: ");
		scanf("%f",&n2);

		soma = n1 + n2;
		printf("A soma de %.f + %.f = %.2f\n\n", n1, n2, soma);
	}
	else if (op == 2) {
		printf("Digite um numero qualquer: ");
		scanf("%f",&n1);

		raiz = sqrt(n1);

		printf("A raiz quadrada de %.f = %.2f\n\n", n1, raiz);
	}




	system("pause");
	return 0;
}