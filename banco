#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
	char nome[50];
	float preco;
	int quantidade;
};

int main(){
	Produto* tabela = NULL;
	int produtosCadastrados = 0, escolha, id, escolhaid;
	float preco; 

	escolha = -1;

	while (escolha != 9) {

		printf("O que voce deseja fazer? (1- Cadastrar produto, 2- Ver/Editar produtos, 9- Sair): ");
		scanf("%d", &escolha);

		if (escolha == 1) {

			produtosCadastrados++;
			tabela = (struct Produto*)realloc(tabela, produtosCadastrados * sizeof(struct Produto));

			printf("Nome do produto: ");
			scanf("%s", tabela[produtosCadastrados - 1].nome);

			printf("Preco do produto: ");
			scanf("%f", &tabela[produtosCadastrados - 1].preco);

			printf("Quantidade do produto: ");
			scanf("%d", &tabela[produtosCadastrados - 1].quantidade);
		}
		else if (escolha == 2) {
			if (produtosCadastrados == 0) {
				printf("Nenhum produto cadastrado.\n");
				continue;
			}
			else {
				for (int i = 0; i < produtosCadastrados; i++) {
					printf("\nID: [%d], Produto: %s | Preco: %.2f | Quantidade: %.2d \n",i, tabela[i].nome, tabela[i].preco, tabela[i].quantidade);
				}
			}
			printf("\n\nDigite o que voce deseja fazer (1- Remover produto, 2- editar valor do produto, 3- Editar a quantidade de produtos, 0- Cancelar): ");
			scanf("%d", &escolhaid);

			if (escolhaid == 1) {
				printf("\n\nDigite o id do item a ser removido: ");
				scanf("%d", &id);

				if (id >= 0 && id < produtosCadastrados) {
					for (int i = id; i < produtosCadastrados - 1; i++) {
						tabela[i] = tabela[i + 1];
					}

					produtosCadastrados--;
					tabela = (struct Produto*)realloc(tabela, produtosCadastrados * sizeof(struct Produto));

					printf("Produto com ID %d removido.\n", id);
				}
				else {
					printf("ID invalido.\n");
					continue;
				}
			}
			else if (escolhaid == 2) {
					for (int i = 0; i < produtosCadastrados; i++) {
						printf("\nID: [%d], Produto: %s | Preco: %.2f | Quantidade: %.2d \n", i, tabela[i].nome, tabela[i].preco, tabela[i].quantidade);

					}
				printf("\n\nDigite o id do item a ser editado: ");
				scanf("%d", &id);

					if (id >= 0 && id < produtosCadastrados) {

						printf("Digite o novo preco do produto: ");
						scanf("%f", &tabela[id].preco);

						printf("ID: [%d], Produto atualizado: %s | Preco: %.2f | Quantidade: %.2d \n", id, tabela[id].nome, tabela[id].preco, tabela[id].quantidade);
					}
					else {
						printf("ID invalido.\n");
						continue;
				}
			}
			else if (escolhaid == 3) {
				printf("\n\nDigite o id do item a ser editado: ");
				scanf("%d", &id);

				for (int i = 0; i < produtosCadastrados; i++) {
					printf("\nID: [%d], Produto: %s | Preco: %.2f | Quantidade: %.2d \n", i, tabela[i].nome, tabela[i].preco, tabela[i].quantidade);
					{

						printf("Digite a nova quantidade do produto: ");
						scanf("%d", &tabela[id].quantidade);

						printf("ID: [%d], Produto atualizado: %s | Preco: %.2f | Quantidade: %.2d \n", id, tabela[id].nome, tabela[id].preco, tabela[id].quantidade);
					}
				}
			}
			else if (escolhaid == 0) {
				printf("Operacao cancelada.\n");
			}
			else {
				printf("Escolha invalida.\n");
			}
		}
	}
		free(tabela);
		printf("Saindo do programa...\n");
		return 0;
}
