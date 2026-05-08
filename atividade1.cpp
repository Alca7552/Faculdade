#include <stdio.h>

int main(){
    int num1, num2;

    printf("Primeiro numero: ");
    scanf("%d",&num1);
    
    printf("Segundo numero: ");
    scanf("%d",&num2);
    
    if(num1 < num2)
    	printf("O numero e: %d\n",num2);
    else
    	printf("O numero e: %d\n",num1);
}