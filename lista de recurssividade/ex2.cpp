#include <stdio.h>

int pa (int razao, int posicao, int inicial);

int main()
{
	int razao, posicao, inicial;
	printf("Informe a razao da progressao aritmetica: ");
	scanf("%d", &razao);
	printf("Informe o primeiro numero da progressao aritmetica: ");
	scanf("%d", &inicial);
	printf("Informe a posicao da progressao aritmetica que queira descobrir: ");
	scanf("%d", &posicao);
	
	printf("O valor da PA na posicao %d e: %d", posicao, pa(razao, posicao, inicial));
	
	return 0;
}

int pa (int razao, int posicao, int inicial){
	if(posicao == 1){
		return inicial;
	}
	else{
		return (razao + pa(razao, posicao-1, inicial));
	}
}
