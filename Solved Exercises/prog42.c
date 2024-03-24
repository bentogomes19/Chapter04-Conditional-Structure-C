#include <stdio.h> 
#include <stdlib.h>

/*17. Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não. */

int main() {
	int senha = 4531, usuario;

	printf("Digite sua senha: ");
	scanf("%d", &usuario);

	if (senha == usuario) {
		printf("Acesso Permitido\n");
	}
	else {
		printf("Acesso negado\n");
	}




	system("pause");
	 return 0;
}