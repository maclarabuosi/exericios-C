#include <stdio.h>
#include <stdlib.h>

int* funcao(int N) {
    // incluir aqui a sua solução
    if(N <= 0){
        return NULL;
    }
}

int main()
{
    printf("Digite um numero:\n");
    int N;
    scanf("%d", &N);

    int *resultado = funcao(N);

    if(resultado == NULL){
        printf("Ponteiro NULL");
    }else{
        printf("Ponteiro NAO NULL");
    }

    return 0;
}
