#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:\n");

    int num;

    do{
        scanf("%d", &num);

        if(num < 0){
            printf("Numero deve ser POSITIVO! Digite um numero VALIDO!!\n");
        }
    }
    while(num < 0);

    int *vetor;

    vetor = malloc(num * sizeof(int));

    int i=0;

    for(i=0; i<num; i++){
        do{
            scanf("%d", &vetor[i]);

            if(vetor[i] < 2){
                printf("Digite um numero >=2!\n");
            }
        }
        while(vetor[i] < 2);
    }

    int j=0;

    for(j=0; j<num; j++){
        printf("%d ", vetor[j]);
    }

    free(vetor);

    return 0;
}
