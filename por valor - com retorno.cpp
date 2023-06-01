#include <stdio.h>

int soma(int n1, int n2){
	return  (n1 + n2);
}
int mult(int n1, int n2){
	return  (n1 * n2);
}

int main()
{
	int n1, n2;
	printf("Informe o primeiro valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n1);
	printf("\nInforme o segundo valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n2);
	printf("A multiplicacao de %d por %d e de: %d", n1, n2, mult(n1, n2));
	printf("\nA soma de %d e %d e de: %d", n1, n2, soma(n1, n2));
	return 0;
}

