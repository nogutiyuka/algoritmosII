#include <stdio.h>

int somatorio(int n);

int main()
{
	int n;
	
	printf("Informe um valor inteiro: ");
	scanf("%d", &n);
	
	int somatorio1 = somatorio(n);
	printf("O somatorio de %d e: %d", n, somatorio1);
	return 0;
}

int somatorio(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else if(n > 1){
		return (n + somatorio(n - 1));
	}
}
