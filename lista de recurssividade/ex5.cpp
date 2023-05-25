#include <stdio.h>

int potencia(int n, int expoente);

int main()
{
	int n, expoente;
	printf("Informe a base da potencia: ");
	scanf("%d", &n);
	printf("Informe o expoente: ");
	scanf("%d", &expoente);
	
	printf("O numero %d elevado a %d e: %d", n, expoente, potencia(n,expoente));
	return 0;
}

int potencia(int n, int expoente){
	if(expoente == 0){
		return 1;
	}
	else if (expoente == 1){
		return n;
	}
	else{
		return (n * potencia(n, expoente-1));
	}
}
