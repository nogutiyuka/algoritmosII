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

		printf("Informe o ano de fabricação: ");

		scanf("%d", &carro[i].ano);

		printf("Informe a potência em cavalos: ");

		scanf("%d", &carro[i].potencia);

		fflush(stdin);

		printf("Informe a velocidade máxima: ");

		scanf("%d", &carro[i].velocidade);

	}

	

	for (int cont = 0; cont < num; cont++){

		printf("A marca do carro é: %s\n", carro[cont].marca);

		printf("O modelo do carr é: %s\n", carro[cont].modelo);

		printf("O ano de fabricação do carro é: %d\n", carro[cont].ano);

		printf("A potencia em cavalos é: %d\n", carro[cont].potencia);

		printf("A velocidade maxima é: %d\n", carro[cont].velocidade);

	}

		

	return 0;

}
