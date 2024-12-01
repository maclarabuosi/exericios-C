#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o tamanho do vetor:\n");

    int tam = 0;

    scanf("%d", &tam);

    int *vetor;

    vetor = (int *)malloc(tam * sizeof(int));

    printf("Digite os valores do vetor:\n");

    int i=0;
    for(i=0; i<tam; i++){
        scanf("%d", &vetor[i]);
    }

    int j=0;
    for(j=0; j<tam; j++){
        printf("%d ", vetor[j]);
    }

    free(vetor);
    vetor = NULL;

    return 0;
}
