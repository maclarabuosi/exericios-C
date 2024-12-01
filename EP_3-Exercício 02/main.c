#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite 5 numeros: ");

    int vetor[5];

    for(int i =0; i<5; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d ", vetor[i]);
    }

    double soma = 0.0;

    for(int i=0; i<5; i++){
        soma += vetor[i];
    }

    double media = soma / 5.0;

    printf("Media: %.2lf", media);

    return 0;
}
