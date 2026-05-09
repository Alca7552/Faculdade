#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1;

	printf("Digite um numero: ");
	scanf("%d", &num1);

	if (num1 % 2 == 0)
		printf("O numero %d e um numero Par", num1);
	else
		printf("O numero %d e um numero Impar", num1);

}
}
