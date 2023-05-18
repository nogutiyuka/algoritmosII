#include <stdio.h>

int fibonacci(int n);

int main()
{
	int n;
	printf("Informe uma posicao N para o caculo da formula de Fibonacci, send N maior que 1: ");
	scanf("%d", &n);
	
	int fibN = fibonacci(n);
	printf("\nO fibonacci de %d e: %d: ", n, fibN);
	
	return 0;
}

int fibonacci(int n){
	if (n == 1){
		return 1;
	}
	else if (n == 0){
		return 0;
	}
	else if (n > 1){
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}



