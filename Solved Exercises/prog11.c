#include <stdio.h>
#include <stdlib.h>

/*11. Faça um programa que receba a hora do início de um jogo e a hora do término (cada hora é composta
por duas variáveis inteiras: hora e minuto). calcule e mostre a duração do jogo (horas e minutos),
sabendo que o tempo máximo de duração do jogo é de 24 horas e que ele pode começar em um dia e
terminar no dia seguinte. */

int main() {
	int h1, m1, h2, m2, dur_min, dur_hrs, dur_hrs_total, min_total, min;

	printf("Digite a hora que ira comecar o jogo: ");
	scanf("%d", &h1);

	printf("Digite o minuto que ira comecar o jogo: ");
	scanf("%d", &m1);

	printf("Digite a hora que ira terminar o jogo: ");
	scanf("%d", &h2);

	printf("Digite o minuto que ira terminar o jogo: ");
	scanf("%d", &m2);

	if (h1 > h2 && m1 == m2) {
		dur_hrs = h1 - h2;
		dur_hrs_total = 24 - dur_hrs;
		min_total = 00;
	}
	else if (h2 > h1 && m1 == m2) {
		dur_hrs = h2 - h1;
		dur_hrs_total = dur_hrs;
		min_total = 00;
	}
	else if (h1 == h2 && m1 < m2) {
		min_total = m2 - m1;
		dur_hrs_total = 00;
	}
	else if ( h2 > h1 && m2 > m1) {
		dur_hrs_total = h2 - h1;
		min_total =  m2 - m1;
	}
	else if ( h1 > h2 && m1 > m2) {
		dur_hrs_total = h1 - h2;
		min_total =  m1 - m2;
	}
	printf("INICIO DO JOGO: %d:%d --> TERMINO DO JOGO: %d:%d --> DURACAO TOTAL: %d:%d\n ", h1, m1, h2, m2, dur_hrs_total, min_total);

	system("pause");
	return 0;
}