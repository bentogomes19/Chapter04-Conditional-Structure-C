#include <stdio.h> // inserindo biblioteca de entrada e saida 
#include <stdlib.h>

/*6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar*/

int main() {
	int n1, div; // declaração de variávies 

	printf("Digite um numero inteiro qualuquer: "); // output dados de saida "o que o usuário ira observar"
	scanf("%d", &n1); // input dados de entrada do programa

	div = n1 % 2; // n1 & 2 ele nos mostrara o resto da divisão

	if ( div == 0 ) { // se a divisão obtiver resto igual a zero EX (Div = 0) se 0 == 0 V então...
		printf("NUMERO PAR!!\n"); // numero par!!
	}
	else { // caso contrario numero impar
		printf("NUMERO IMPAR\n");
	}

	system("pause"); // segurar o processo do programa ficará rodando ate eu pressionar qualquer tecla
	return 0; // retorna 0 em caso de erro na compilaçao
}