#include <stdio.h>

int qtd(char caracteres [20], char carac);

int main()
{
	char caracteres [20], carac;
	printf("Informe uma cadeia de 20 caracteres: ");
	scanf("%s", &caracteres);
	
	printf("Informe um caractere para retorno da quantidade de vezes que ele aparece: ");
	scanf("%s", &carac);
	
	int quantidade = qtd(caracteres, carac);
	
	printf("O caractere %c aparace %d quantidade de vezes!", carac, quantidade);
	return 0;
}

int qtd(char caracteres [20], char carac)
{
	int qtd = 0;
	for(int i = 1; i <= 21; i++)
	{	
		if(caracteres[i] == carac){
			qtd = qtd +  1;
		}
	}
	return qtd;
}
