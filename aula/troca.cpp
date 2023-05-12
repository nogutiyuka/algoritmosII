#include <stdio.h>

void troca(int n1, int n2);

int main()
{
	int n1, n2;
	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &n2);
	
	troca(n1, n2);
	
	return 0;
}

void troca (int n1, int n2){
	printf("O primeiro valor e de %d e o segundo e %d\n", n1, n2);
	int troca = n1;
	n1 = n2;
	n2 = troca;
	printf("Agora o primeiro valor e %d e o segundo e %d", n1, n2);
}
