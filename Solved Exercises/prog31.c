#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*6. Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números */ 

int main() {
	float n1, n2, pot, raiz201, raiz202, raiz301, raiz302;
	int op;

	printf("Digite um primeiro numero qualquer : ");
	scanf("%f", &n1);

	printf("Digite um segundo numero qualquer : ");
	scanf("%f", &n2);

	printf("1 - O primeiro numero elevado ao segundo numero\n");
	printf("2 - Raiz quadrada de cada um dos numeros\n");
	printf("3 - Raiz cubica de cada um dos numeros\n");
	printf("Escolha uma das tres opcoes Ex: 1 | 2 | 3: ");
	scanf("%d", &op);

	if (op == 1) {
		pot = pow(n1, n2);
		printf("%.2f^%.2f = %.2f\n", n1, n2, pot);
	}
	if (op == 2) {
		raiz201 = sqrt(n1);
		raiz202 = sqrt(n2);
		printf("Raiz do primeiro numero => %.2f | Raiz do segundo numero => %.2f\n", raiz201, raiz202);
	}
	if (op == 3) {
		raiz301 = cbrt(n1);
		raiz302 = cbrt(n2);
		printf("Raiz cubica do primeiro numero => %.2f | Raiz cubica do segundo numero => %.2f\n", raiz301, raiz302);
	}
	if (op > 3) {
		printf("Codigo invalido.... Encerre o programa\n");
	}



	system("pause");
	return 0;
}