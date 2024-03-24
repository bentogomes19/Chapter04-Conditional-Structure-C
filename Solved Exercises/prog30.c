#include <stdio.h>
#include <stdlib.h>

/*5. Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
ESCoLhA Do uSuáRIo 					oPERAção
	1 							Média entre os números digitados
	2 							Diferença do maior pelo menor
	3 							Produto entre os números digitados
	4 							Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
lembre-se de que, na operação 4, o segundo número deve ser diferente de zero. */

int main() {
	float n1, n2, media, dif, prod, div;
	int op;


	printf("Digite um numero qualquer: ");
	scanf("%f", &n1);

	printf("Digite um segundo numero qualquer: ");
	scanf("%f", &n2);

	printf("1 - Media entre os numeros digitados\n");
	printf("2 - Diferenca do maior pelo menor\n");
	printf("3 - Produto entre os numeros digitados\n");
	printf("4 - Divisao do primeiro pelo segundo n2 diferente de zero!!\n");
	printf("Escolha uma das opcoes acima: ");
	scanf("%d", &op);

	if (op == 1) { // 1 - Media entre os numeros digitados
		media = (n1 + n2) / 2;
		printf("Media entre os numeros %.2f e %.2f --> %.2f\n", n1, n2, media);
	}
	if (op == 2) { // 2 - Diferenca do maior pelo menor
		if (n1 > n2 ) {
			dif = n1 - n2;
			printf("Diferenca entre %.2f - %.2f = %.2f\n", n1, n2, dif);
		}
		if ( n2 > n1) {
			dif = n2 - n1;
			printf("Diferenca entre %.2f - %.2f = %.2f\n", n2, n1, dif);
		}
		if (n1 == n2) {
			printf("Numeros iguais --> 0\n");
		}
	}
	if (op == 3) { // 3 - Produto entre os numeros digitados
		prod = n1 * n2;
		printf("Produto entre %.2f x %.2f = %.2f\n", n1, n2, prod);
	}
	if (op == 4) { // 4 - Divisao do primeiro pelo segundo
		if ( n2 == 0) {
			printf("Impossivel de resolver!!! o segundo numero dever ser diferente de zero\n");
		}
		else {
			div = n1 / n2;
			printf("Divisao | %.2f / %.2f = %.2f\n", n1, n2, div);
		}
	}
	else {
		printf("Opercao invalida... Reinicie o programa!!\n");
	}






	system("pause");
	return 0;
}