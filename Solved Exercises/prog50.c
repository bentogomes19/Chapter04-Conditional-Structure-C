#include <stdio.h> 
#include <stdlib.h>

/*25. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta à tabela que se segue, na qual: H = número de horas extras – (2/3 * (número de horas falta))
 h (MINuToS) 					PRêMIo (R$)
> = 2.400 						500,00
1.800 2.400 					400,00
1.200 1.800 					300,00
600 1.200 						200,00
< 600 							100,00*/

int main() {
	int h, hr_extra, hr_falta, convert_hr_extra, convert_hr_falta;

	printf("Digite a quantidade de horas extras trabalhadas no mes: ");
	scanf("%d", &hr_extra);

	printf("Digite o numero de horas faltadas: ");
	scanf("%d", &hr_falta);

	convert_hr_extra = hr_extra * 60;
	convert_hr_falta = hr_falta * 60;
	h = convert_hr_extra - (2/3 * (convert_hr_falta));

	if (h >= 2400) {
		printf("Premio R$ 500\n");
	}
	else if (h > 1800 && h < 2400) {
		printf("Premio R$ 400\n");
	}
	else if ( h >= 1200 && h <= 1800) {
		printf("Premio R$ 300\n");
	}
	else if ( h >= 600 && h < 1200) {
		printf("Premio R$ 200\n");
	}
	else if ( h < 600) {
		printf("Premio R$ 100\n");
	}

	system("pause");
	 return 0;
}