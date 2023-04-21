#include <stdio.h>

struct livro{
    char titulo[100];
    char autor[100];
    int publicacao;
};

int main()
{
    struct livro livros;
    
    printf("Informe o título do livro - com underline: ");
    scanf("%s", livros.titulo);
    fflush(stdin);
    printf("Informe o autor do livro - com underline: ");
    scanf("%s", livros.autor);
    fflush(stdin);
    printf("Informe o ano de publicação do livro: ");
    scanf("%d", &livros.publicacao);
    
    printf("%s\n", livros.titulo);
    printf("%s\n", livros.autor);
    printf("%d\n", livros.publicacao);

    return 0;
}

