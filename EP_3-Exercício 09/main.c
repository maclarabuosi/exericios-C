#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite 10 numeros:\n");

    int vetor[10];

    int contador=0;

    for(int i=0; i<10; i++){

        scanf("%d", &vetor[i]);

        for(int j=0; j<contador; j++){

            while(vetor[i] == vetor[j]){
                printf("Numero ja digitado! Digite outro numero!\n");

                scanf("%d", &vetor[i]);
            }
        }contador++;
    }

    printf("\nNumeros digitados: ");

    for(int i=0; i<10; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
