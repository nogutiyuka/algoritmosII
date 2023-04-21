#include <stdio.h>

struct Data{
    int dia;
    int mes;
    int ano;
};

int main()
{
    struct Data data;
    printf("Usar apenas numeros!")
    printf("Informe o dia: ");
    scanf("%d", &data.dia);
    printf("Informe o mes: ");
    scanf("%d", &data.mes);
    printf("Informe o ano: ");
    scanf("%d", &data.ano);
    
    printf("%d/%d/%d", data.dia, data.mes, data.ano);

    return 0;
}

