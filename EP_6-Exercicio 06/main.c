#include <stdio.h>
#include <stdlib.h>

void funcao(char *vet, char let) {
    // incluir aqui a sua solução

    char *end = vet+5;

    while (vet < end){
        *vet = let;
        vet++;
    }
}

int main()
{

    printf("Digite 5 letras: \n");

    char vet[5];
    int i=0;

    for(i=0; i<5; i++){
        scanf(" %c", &vet[i]);
        char *vet= &vet[i];
    }

    printf("Digite um letra: \n");

    char let;
    scanf(" %c", &let);

    funcao(*vet, let);

    i=0;

    for(i=0; i<5; i++){
        printf("%d", vet[i]);
    }

    return 0;
}
