#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 18. Dados três valores X, Y e Z, verifique se eles podem ser os comprimentos dos lados de um triângulo
e, se forem, verifique se é um triângulo equilátero, isósceles ou escaleno. Se eles não formarem um
triângulo, escreva uma mensagem. considere que:
■■ o comprimento de cada lado de um triângulo é menor que a soma dos outros dois lados;
■■ chama-se equilátero o triângulo que tem três lados iguais;
■■ denomina-se isósceles o triângulo que tem o comprimento de dois lados iguais;
■■ recebe o nome de escaleno o triângulo que tem os três lados diferentes.
S*/

int main() {
	float x, y, z;

	printf("digite um valor para x: ");
	scanf("%f", &x);

	printf("Digite um valor para y: ");
	scanf("%f", &y);

	printf("Digite um valor para z: ");
	scanf("%f", &z);

	if ( x == y && y == z) {
		printf("Triagulo equilatero todos os lados sao iguais!!\n");
	}
	else if (x == y || x == z || y == z) {
		printf("Triangulo isoceles: temos dois lados iguais\n");
	}
	else if (x != y && y != z) {
		printf("Triango escaleno> todos os lados sao diferentes\n");
	}
	else {
		printf("Esses valores nao formam um triangulo\n");
	}


	system("pause");
	return 0;
}