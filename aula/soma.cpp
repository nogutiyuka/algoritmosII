#include <stdio.h>

int soma (int n1, int n2);

int main()
{
	int n1, n2;
	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &n2);
	
	printf("A soma dos dois valores informados e de: %d", soma(n1, n2));
	
	return 0;
}

int soma (int n1, int n2)
{
	int soma = n1 + n2;
	return soma;
}
