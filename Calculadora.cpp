#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int soma, subtracao, multiplicacao, divisao, a, b, escolha, loop;

	loop = -1; // Variável para controlar o loop

	while (loop != 0) {

		printf("Qual operacao deseja realizar? (1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 0 - Sair): ");
		scanf("%d", &escolha);
		if (escolha == 1) {
			printf("Digite o primeiro numero da soma: ");
			scanf("%d", &a);
			printf("Digite o segundo numero da soma: ");
			scanf("%d", &b);
			soma = a + b;
			printf("Resultado da soma: %d\n\n", soma);
		}
		else if (escolha == 2) {
			printf("Digite o primeiro numero da subtracao: ");
			scanf("%d", &a);
			printf("Digite o segundo numero da subtracao: ");
			scanf("%d", &b);
			subtracao = a - b;
			printf("Resultado da subtracao: %d\n\n", subtracao);
		}
		else if (escolha == 3) {
			printf("Digite o primeiro numero da multiplicacao: ");
			scanf("%d", &a);
			printf("Digite o segundo numero da multiplicacao: ");
			scanf("%d", &b);
			multiplicacao = a * b;
			printf("Resultado da multiplicacao: %d\n\n", multiplicacao);
		}
		else if (escolha == 4) {
			printf("Digite o primeiro numero da divisao: ");
			scanf("%d", &a);
			printf("Digite o segundo numero da divisao: ");
			scanf("%d", &b);
			if (b != 0) {
				divisao = a / b;
				printf("Resultado da divisao: %d\n\n", divisao);
			}
			else {
				printf("Erro: Divisao por zero nao e permitida.\n\n");
			}
		}
		else if (escolha == 0) {
			printf("Saindo...\n");
			loop = 0;
			return 0;
		}
		else {
			printf("Escolha invalida.\n\n");
		}
	}
}
