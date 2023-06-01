#include <stdio.h>

void troca(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a, b;
	printf("Informe o primeiro valor a ser trocado: ");
	scanf("%d", &a);
	printf("Informe o segundo valor a ser trocado: ");
	scanf("%d", &b);
	troca(&a, &b);
	printf("Agora o primeiro valor e %d e segundo valor e %d", a, b);
	return 0;
}
