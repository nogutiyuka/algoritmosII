#include <stdio.h>
struct opiniao{
	int idade;
	int op;
};

int main()
{
    struct opiniao opinioes[20];
    int otimo = 0;
    int bom = 0;
    int regular = 0;
    int ruim = 0;
    int pessimo = 0;
    int idades = 0;
    int maiorP = -1000000000000000000000000;
    int maiorO = -1000000000000000000000000; 
    int maiorR = -1000000000000000000000000;
    
    printf("OBS: Favor responder sua opiniao sobre o filme exatamente como for escrito nas opcoes!\n");
    for(int i = 0; i < 20; i++){
    	printf("Informe sua idade: ");
    	scanf("%d", &opinioes[i].idade);
    	fflush(stdin);
    	printf("Informe sua opiniao sobre o filme - otimo, bom, regular, ruim ou pessimo:  \n");
    	printf("1 - otimo\n");
    	printf("2 - bom\n");
    	printf("3 - regular\n");
    	printf("4 - ruim\n");
    	printf("5 - pessimo\n");
    	printf("OPCAO: ");
    	scanf("%d", &opinioes[i].op);
    	if (opinioes[i].op == 1){
    		otimo = otimo + 1;
    		if(maiorO > opinioes[i].idade){
				maiorO = opinioes[i].idade;
			};
		}
		else if (opinioes[i].op == 2){
			bom = bom + 1;
			idades = idades + opinioes[i].idade;
		}
		else if (opinioes[i].op == 3){
			regular = regular + 1;
		}
		else if (opinioes[i].op == 4){
			ruim = ruim + 1;
			if(maiorR > opinioes[i].idade){
				maiorR = opinioes[i].idade;
			};
		}
		else if (opinioes[i].op == 5){
			pessimo = pessimo + 1;
			if(maiorP > opinioes[i].idade){
				maiorP = opinioes[i].idade;
			};
		};

    };
    float perB = (bom * 100)/20;
    float perR = (regular * 100)/20;
    float perP = (pessimo * 100)/20;
    float diferencaP = ((perB/perR) - 1)*100;
    float media = idades/ruim;
    int dif;
    if(maiorO > maiorR){
    	dif = maiorO - maiorR;
	}
	else if (maiorR > maiorO){
		dif = maiorR - maiorO;
	}
	else{
		dif = 0;
	};
    
    printf("Quantidade de opcoes otimo: %d\n", otimo);
    printf("A diferenca percentual entre respostas bom e regular e de: %.2f\n", diferencaP);
    printf("A media de idade das pessoas que responderam ruim e de: %.2f\n", media);
    printf("A porcentagem de respostas pessimo é %.1f e a maior idade que utilizou esta opcao é de: %d\n", perP, maiorP);
    printf("a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim e de: %d\n", dif);

    return 0;
}

