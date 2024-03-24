#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*9. Faça um programa que mostre a data e a hora do sistema nos seguintes formatos: DD/MM/AAAA –
mês por extenso e hora:minuto. */

int main() {

	time_t t; // time_t é um tipo de dados que representa o tempo em segundos.
	struct tm *data_hora; //struct tm é uma estrutura que contém informações detalhadas sobre a data e hora. 
	int dia, mes, ano, hora, min, seg; // variáveis para armazenar dia, mes, ano, hora, min, seg
	t = time(NULL); // time(NULL) retorna o tempo atual em segundos desde a "Época" (01/01/1970). 
	data_hora = localtime(&t); // localtime(&t) converte esse tempo em uma estrutura tm contendo as informações locais da data e hora.
	dia = data_hora -> tm_mday;
	mes = data_hora -> tm_mon + 1;
	ano = data_hora -> tm_year + 1900;
	hora = data_hora -> tm_hour;
	min = data_hora -> tm_min;
	printf("Data atual: %d/%d/%d | Hora atual: %d:%.2d ", dia, mes, ano, hora, min);
	if ( mes == 1) {
		printf("Janeiro");
	}
	if ( mes == 2) {
		printf("Fevereiro");
	}
	if ( mes == 3) {
		printf("Marco");
	}
	if ( mes == 4) {
		printf("Abril");
	}
	if ( mes == 5) {
		printf("Maio");
	}
	if ( mes == 6) {
		printf("Junho");
	}
	if ( mes == 7) {
		printf("Julho");
	}
	if ( mes == 8) {
		printf("Agosto");
	}
	if ( mes == 9) {
		printf("Setembro");
	}
	if ( mes == 10) {
		printf("Outubro");
	}
	if ( mes == 11) {
		printf("Novembro");
	}
	if ( mes == 12) {
		printf("Dezembro");
	}
	printf("\nHora certa :: %d:%.2d", hora, min);


	printf("\n\n");
	printf("Pressione qualquer tecla para sair...");
	getchar();


	return 0; /* Esta linha indica que a função principal foi concluída com 
				sucesso e retorna o valor 0, indicando que o programa foi executado sem erros. */

}