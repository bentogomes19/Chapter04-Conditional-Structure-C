#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/*23. Faça um programa que receba o valor do salário mínimo, o turno de trabalho (M — matutino; 
v — vespertino; ou N — noturno), a categoria (O — operário; G — gerente) e o 
número de horas trabalhadas no mês de um funcionário. Suponha a digitação apenas de dados válidos e,
quando houver digitação de letras, utilize maiúsculas. calcule e mostre: 

■ O coeficiente do salário, de acordo com a tabela a seguir 
TuRNo DE TRABALho 								VALoR Do CoEFICIENTE
M — Matutino 									10% do salário mínimo
V — Vespertino 									15% do salário mínimo
N — Noturno 									12% do salário mínimo
■ O valor do salário bruto, ou seja, o número de horas trabalhadas multiplicado pelo valor do coeficiente do salário.

■■ O imposto, de acordo com a tabela a seguir.
 CATEgoRIA 													SALáRIo BRuTo  				IMPoSTo SoBRE o SALáRIo BRuTo
O — Operário 												>= R$ 300,00 								5%
															< R$ 300,00 								3%

G — Gerente
															>= R$ 400,00 								6%
															< R$ 400,00 								4% 
■ A gratificação, de acordo com as regras a seguir.
Se o funcionário preencher todos os requisitos a seguir, sua gratificação será de
R$ 50,00; caso contrário, será de R$ 30,00. Os requisitos são:
Turno: Noturno
Número de horas trabalhadas: Superior a 80 horas
■■ O auxílio alimentação, de acordo com as seguintes regras.
Se o funcionário preencher algum dos requisitos a seguir, seu auxílio alimentação será de um terço
do seu salário bruto; caso contrário, será de metade do seu salário bruto. Os requisitos são:
Categoria: Operário
Coeficiente do salário: < = 25
■■ O salário líquido, ou seja, salário bruto menos imposto mais gratificação mais auxílio alimentação.
■■ A classificação, de acordo com a tabela a seguir: 
SALáRIo LíquIDo 							MENSAgEM
Menor que R$ 350,00 					Mal remunerado
Entre R$ 350,00 e R$ 600,00 				Normal
Maior que R$ 600,00 					Bem remunerado   */

int main() {
	float sal_min, nr_horas, coef_sal, sal_bruto, imposto, grat, aux_alimentacao, sal_liq;
	char turno, cat;

	printf("Digite o valor do salario minimo atual (R$): ");
	scanf("%f", &sal_min);

	printf("Digite o turno de trabalho | M - Matuino | V - Vespertino | N - Noturno : ");
	scanf("%s", &turno);
	turno = toupper(turno);
	fflush(stdin);

	printf("Digite a categoria | O - Operario | G - Gerente: ");
	scanf("%s", &cat);
	cat = toupper(cat);
	fflush(stdin);

	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &nr_horas);

		if (turno = 'M' ) { // VALOR DO COEFICIENTE DO SALÁRIO
			coef_sal = sal_min * 0.10;
		}
		else if (turno = 'V') {
			coef_sal = sal_min * 0.15;
		}
		else if (turno = 'N') {
			coef_sal = sal_min * 0.12;
		}

		sal_bruto = nr_horas * coef_sal; // CALCULAR SALARIO BRUTO

		if (cat = 'O' && sal_bruto >= 300) { // IMPOSTO
			imposto = sal_bruto * 0.05;
		}
		else if (cat = 'O' && sal_bruto < 300) {l
			imposto = sal_bruto * 0.03;
		}
		else if (cat = 'G' && sal_bruto >= 400) {
			imposto = sal_bruto * 0.06;
		}
		else if (cat = 'G' && sal_bruto < 400) {
			imposto = sal_bruto * 0.04;
		}

		if (turno = 'N' && nr_horas > 80) { // GRATIFICAÇÃO
			grat = 50;
		}
		else {
			grat = 30;
		}

		if (cat = 'O' || coef_sal <= 25) { // AUXÍLIO ALIMENTAÇÃO
			aux_alimentacao = sal_bruto / 3;
		}
		else {
			aux_alimentacao = sal_bruto / 2;
		}

		sal_liq = sal_bruto - imposto + grat + aux_alimentacao; // SALÁRIO LÍQUIDO

		if (sal_liq < 350) {
			printf("Mal remunerado\n");
		}
		else if (sal_liq >= 350 && sal_liq <= 600) {
			printf("Normal\n");
		}
		else if (sal_liq > 600) {
			printf("Bem remunerado\n");
		}

		printf("Coeficiente do salario --> R$ %.2f\n", coef_sal);
		printf("Salario bruto --> R$ %.2f\n", sal_bruto);
		printf("Imposto --> R$ %.2f\n", imposto);
		printf("Gratificacao --> R$ %.2f\n", grat);
		printf("Auxilio alimentacao --> R$ %.2f\n", aux_alimentacao);
		printf("Salario liquido --> R$ %.2f\n", sal_liq);


	printf("\n\n");
	system("pause");
	return 0;
}