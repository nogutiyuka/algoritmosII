#include <stdio.h>

int potencia(int n, int x);

int main()
{
	int n;
	int x;
	printf("Informe a potencia: ");
	scanf("%d", &n);
	printf("Informe um numero inteiro para ser a base: ");
	scanf("%d", &x);
	
	int pot = potencia(n, x);
	
	printf("A potencia de %d na base %d e de: %d", n, x, pot);
	
	return 0;
}

int potencia(int n, int x){
	if(x == 0){
		return 1;
	}
	else if(n > 1){
		return (x * potencia(n-1, x));
	}
}
