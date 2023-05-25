#include <stdio.h>

int pg(int razao, int posicao, int inicial);

int main()
{
	int razao, posicao, inicial;
	printf("Informe a razao da progressao aritmetica: ");
	scanf("%d", &razao);
	printf("Informe a posicao da progressao aritmetica que queira descobrir: ");
	scanf("%d", &posicao);
	printf("Informe a posicao inicial da progressao aritmetica: ");
	scanf("%d", &inicial);
	
	printf("O valor da PG na posicao %d e: %d", posicao, pg(razao, posicao, inicial));
	return 0;
}
int pg(int razao, int posicao, int inicial){
	if(posicao == 1){
		return inicial;
	}
	else{
		return (razao * pg(razao, posicao-1, inicial));
	}
}
