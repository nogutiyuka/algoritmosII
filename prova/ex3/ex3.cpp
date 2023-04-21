#include <stdio.h>

int main () {
    int v[5][5];
    
    for (int i = 0; i < 5; i++){
        for (int a = 0; a < 5; a++){
            printf("Valor: ");
            scanf("%d", &v[i][a]);
        }
    }
    
    for (int b = 0; b < 5; b++){
        for (int c = 0; c < 5; c++){
            printf("%d |", v[c][b]); 
        }
        printf("\n");
    }
    
	return 0;
}
