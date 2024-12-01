#include <stdio.h>
#include <stdlib.h>

int* funcao(int N) {
    // incluir aqui a sua solução
    int *vetor;
    vetor = malloc(N * sizeof(int));

    int i=0;
    for(i=0; i<N; i++){
        scanf("%d", &vetor[i]);
    }

    int j=0;
    for(j=0; j<N; j++){
        printf("%d ", vetor[j]);
    }

    return vetor;
}

int main()
{
    printf("Digite um numero inteiro:\n");
    int N;
    scanf("%d", &N);

    funcao(N);

    return 0;
}
