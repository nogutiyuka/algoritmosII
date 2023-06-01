#include <stdio.h>

void calcular(int *n1, int *n2, int *mult, int *soma){
	*mult = *n1 * *n2;
	*soma = *n1 + *n2;
}

int main()
{
	int n1, n2, mult, soma;
	printf("Informe o primeiro valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n1);
	printf("\nInforme o segundo valor inteiro para a multiplicacao e soma: ");
	scanf("%d", &n2);
	calcular(&n1, &n2, &mult, &soma);
	printf("\nsoma %d", soma);
	printf("\nmulti %d", mult);
	return 0;
}
