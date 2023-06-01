#include <stdio.h>

void calcular(int n1, int n2){
	int mult = n1 * n2;
	int soma = n1 + n2;
	printf("A multiplicacao de %d por %d e de: %d", n1, n2, mult);
	printf("\nA soma de %d e %d e de: %d", n1, n2, soma);
}

int main()
{
	int n1, n2;
	printf("Informe o primeiro valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n1);
	printf("\nInforme o segundo valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n2);
	calcular(n1, n2);
	return 0;
}

