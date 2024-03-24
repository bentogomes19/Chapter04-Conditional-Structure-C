#include <stdio.h> 
#include <stdlib.h>

/*20. Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.
 CATEgoRIA 			IDADE
Infantil 			5 a 7
Juvenil 			8 a 10
Adolescente 		11 a 15
Adulto 				16 a 30
Sênior 				Acima de 30*/

int main() {
	int idade;

	printf("Nadador --> Digite a sua idade: ");
	scanf("%d", &idade);

	if (idade >= 5 && idade <= 7) {
		printf("Infantil\n");
	}
	if (idade >=8 && idade <=10) {
		printf("Juvenil\n");
	}
	if (idade >= 11 && idade <= 15) {
		printf("Adolescente\n");
	}
	if (idade >= 16 && idade <= 30) {
		printf("Adulto\n");
	}
	if (idade > 30) {
		printf("Senior\n");
	}
	if (idade < 5) {
		printf("Sem categoria!!\n");
	}

	system("pause");
	 return 0;
}