#include <stdio.h>
#include <stdlib.h>
/*12. Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário

						TABELA DAS gRATIFICAçõES
		SALáRIo 					gRATIFICAção
Até R$ 350,00 						R$ 100,00
R$ 350,00 R$ 600,00 				R$ 75,00
R$ 600,00 R$ 900,00 				R$ 50,00
Acima de R$ 900,00 					R$ 35,00  */
int main() {
	float sal, imposto, grat, sal_receber;

	printf("Digite o seu salario bruto: ");
	scanf("%f", &sal);

	if (sal < 350) {
		grat = 100;
	}
	if (sal > 350 && sal < 600) {
		grat = 75;
	}
	if (sal >= 600 && sal <= 900) {
		grat = 50;
	}
	if ( sal > 900) {
		grat = 35;
	}
	sal_receber =  grat + sal - (0.07 * sal);
	printf("Salario a receber --> R$ %.2f\n", sal_receber);

 system("pause");
 return 0;
 
}