#include <stdio.h> 
#include <stdlib.h>

/*18. Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não. */

int main() {
	int idade;

	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if (idade >= 18) {
		printf("Maioridade\n");
	}
	else {
		printf("Menor de idade\n");
		
	}

	system("pause");
	 return 0;
}