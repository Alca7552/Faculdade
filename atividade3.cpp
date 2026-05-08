#include <stdio.h>

int main(){
	
	int sexo;
	float altura, peso_ideal, peso_atual, variacao;
	
	printf("Voce e |1. Homem |2. Mulher|: ");
	scanf("%d",&sexo);
	
	printf("Qual seu altura atual (Exemplo: 1.80): ");
	scanf("%f",&altura);
	
	printf("Qual seu peso atual: ");
	scanf("%f",&peso_atual);
	
	if(sexo == 1)
		peso_ideal = 72.7 * altura - 58;
	else
		peso_ideal = 62.1 * altura - 44.7;
		
	variacao = peso_atual - peso_ideal;
		
	switch(sexo){
		case 1:
			printf("Sexo......:Masculino \n");
			printf("Altura....:%10.2f\n",altura);
			printf("Peso atual:%10.2f\n",peso_atual);
			printf("Peso ideal:%10.2f\n",peso_ideal);
			printf("Variacao..:%10.2f\n",variacao);
			break;
		case 2:
			printf("Sexo......:Feminino \n");
			printf("Altura....:%10.2f\n",altura);
			printf("Peso atual:%10.2f\n",peso_atual);
			printf("Peso ideal:%10.2f\n",peso_ideal);
			printf("Variacao..:%10.2f\n",variacao);
	}
}