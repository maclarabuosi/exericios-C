#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite 6 numeros:\n");
    int vetor[6];

    for(int i=0; i<6; i++){
        scanf("%d", &vetor[i]);
    }

    printf("Vet=\n");
    for(int i=0; i<6; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nOrdem inversa=\n");
    for(int i =5; i>=0; i--){
        printf("%d ", vetor[i]);
    }

    return 0;
}
