#include <stdio.h>

#include <string.h>

#include <conio.h>



struct Carro {

	char marca[40];

	char modelo[40];

	int ano;

	int potencia;

	int velocidade;

	

};



int main () {

    int num;

    printf("Informe quantos automoveis deseja cadastrar: ");

    scanf("%d", &num);

    

	struct Carro carro[num];

	

	for (int i = 0; i < num; i++) {

		printf("Informe a marca: ");

		scanf("%s", carro[i].marca);

		printf("Informe o modelo: ");

		scanf("%s", carro[i].modelo);

		fflush(stdin);

		printf("Informe o ano de fabrica��o: ");

		scanf("%d", &carro[i].ano);

		printf("Informe a pot�ncia em cavalos: ");

		scanf("%d", &carro[i].potencia);

		fflush(stdin);

		printf("Informe a velocidade m�xima: ");

		scanf("%d", &carro[i].velocidade);

	}

	

	for (int cont = 0; cont < num; cont++){

		printf("A marca do carro �: %s\n", carro[cont].marca);

		printf("O modelo do carr �: %s\n", carro[cont].modelo);

		printf("O ano de fabrica��o do carro �: %d\n", carro[cont].ano);

		printf("A potencia em cavalos �: %d\n", carro[cont].potencia);

		printf("A velocidade maxima �: %d\n", carro[cont].velocidade);

	}

		

	return 0;

}
