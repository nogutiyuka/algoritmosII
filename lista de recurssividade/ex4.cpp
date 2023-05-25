#include <stdio.h>

int somaDigitos(int n);

int main()
{
	int digito;
	printf("Informe o digito para o calculo de seus numeros: ");
	scanf("%d", &digito);
	
	printf("A soma dos digitos do numero %d e: %d", digito, somaDigitos(digito));
	return 0;
}

int somaDigitos(int n){
	if(n < 10 && n > -10){
		return n;
	}
	else{
		return ((n % 10) + somaDigitos(n / 10));
	}
}
