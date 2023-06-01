#include <stdio.h>

void incrementa (int x)
{
	x=x+1;
	printf("Valor de x dentro da funcao: %d", x);
}

int main()
{
	int x = 10;
	incrementa(x);
	printf("Valor de x fora da funcao: %d", x);
	return 0;
}
