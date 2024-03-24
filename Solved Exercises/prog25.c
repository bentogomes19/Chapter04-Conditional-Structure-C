#include <stdio.h>
#include <stdlib.h>
 /*25. Faça um programa que receba a medida de um ângulo em graus. calcule e mostre o quadrante em que
se localiza esse ângulo. considere os quadrantes da trigonometria e, para ângulos maiores que 360º ou
menores que −360º, reduzi-los, mostrando também o número de voltas e o sentido da volta (horário
ou anti-horário) */ 

int main() {
	int ang, quad, voltas, angulo;

	printf("Digite a medida de um angulo qualquer: ");
	scanf("%d", &ang);


	if (ang > 360 || ang < -360) {
		voltas = ang / 360; 
		int(voltas);
		angulo = ang % 360;
	}
	else {
		voltas = 0;
	}

	if ( ang == 0 || ang == 90 || ang == 180 || ang == 270 || ang == 360 || ang == -90 || ang == -180 || ang == -270 || ang == -360)
	{
		printf("Esta acima de algum dos eixos!!\n");
	}
	if ((ang > 0 && ang < 90) || (ang < - 270 && ang > - 360)) {
		printf("1 Quadrante\n");

	}
	if ((ang > 90 && ang < 180) || (ang < - 180 && ang > -270)) {
		printf("2 Quadrante\n");
	}
	if ((ang > 180 && ang < 270) || (ang < - 90 && ang > -180)) {
		printf("3 Quadrante\n");
	}
	if ((ang > 270 && ang < 360) || (ang < - 0 && ang > -90)) {
		printf("4 Quadrante\n");
	}
	printf("voltas %d\n", voltas);


	system("pause");
	return 0;
}