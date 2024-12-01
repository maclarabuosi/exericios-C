#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[5];

    printf("Digite 5 numeros: ");

    for(int i=0; i<5; i++){
        scanf("%f", &vetor[i]);
    }

    for(int i=0; i<5; i++){
        printf("%.1f ", vetor[i]);
    }

    int contador_de_negativos = 0;

    double soma = 0.0;

    for(int i=0; i<5; i++){
        if(vetor[i] < 0){
            contador_de_negativos += 1;
        }else{
            soma += vetor[i];
        }
    }

    printf("\nQuantidade de negativos: %d\n", contador_de_negativos);

    printf("Soma de positivos: %.2lf", soma);

    return 0;
}
