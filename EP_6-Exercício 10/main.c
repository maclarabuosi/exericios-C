#include <stdio.h>
#include <stdlib.h>

int funcao(char *nome) {
    // incluir aqui a sua solução

    int tamanho=0;

    while(*nome != '\0'){
        tamanho++;
        nome++;
    }

    return tamanho;

}

int main()
{
    printf("attDigite um texto: \n");

    char texto[50];

    scanf("%49s", texto);

    char *nome = &texto;

    int tamanho = funcao(nome);
    printf("O tamanho da string inserida é: %d\n", tamanho);

    return 0;
}
