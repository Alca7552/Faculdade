#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int codigo;
    float salario_atual, valor_aumento = 0, novo_salario;
    float percentual = 0;

    printf("|-----------------------------------------|\n"
        "|Codigo.|Cargo........|Percentual Aumento.|\n"
        "|-----------------------------------------|\n"
        "|1......| Secretario..| 35%%...............|\n"
        "|2......| Caixa.......| 20%%...............|\n"
        "|3......| Gerente.....| 10%%...............|\n"
        "|4......| Diretor.....| 0%%................|\n"
        "|-----------------------------------------|\n");

    printf("Digite o codigo do cargo (1 a 4): ");
    scanf("%d", &codigo);
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario_atual);


    switch (codigo) {
    case 1:
        printf("\nCargo: Secretario\n");
        percentual = 0.35;
        break;
    case 2:
        printf("\nCargo: Caixa\n");
        percentual = 0.20;
        break;
    case 3:
        printf("\nCargo: Gerente\n");
        percentual = 0.10;
        break;
    case 4:
        printf("\nCargo: Diretor\n");
        percentual = 0.0;
        break;
    default:
        printf("\nErro: Codigo invalido!\n");
        return 1;
    }

    valor_aumento = salario_atual * percentual;
    novo_salario = salario_atual + valor_aumento;

    if (percentual > 0) {
        printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    }
    else {
        printf("Este cargo nao possui aumento.\n");
    }
    printf("Novo salario: R$ %.2f\n", novo_salario);

    return 0;
}
