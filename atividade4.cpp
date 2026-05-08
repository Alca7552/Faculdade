#include <stdio.h>

int main(){
	
	int x, y, z;
	char* triangulo;
	
	printf("Digite o lado x do triangulo: ");
	scanf("%d", &x);
	printf("Digite o lado y do triangulo: ");
	scanf("%d", &y);
	printf("Digite o lado z do triangulo: ");
	scanf("%d", &z);
	
	if(!(x < y + x && y < x + z && z < x + y))
		triangulo = "Nao e um triangulo";
	else if(x == y && y == z)
			triangulo = "E um triangulo eqilatero";
		else if(x == y || x == z || y == z)
			triangulo = "E um triangulo isosceles";
		else
			triangulo = "E um triangulo escaleno";
			

	printf("Medidas do triangulo:""Lado x: %d, Lado y: %d, Lado z: %d\n", x, y, z);
	printf("O triangulo e.......:%s\n", triangulo);
}