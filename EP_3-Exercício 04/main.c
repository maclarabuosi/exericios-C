#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8];

    printf("Digite oito numeros: ");

    for(int i=0; i<8; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite o valor de x: ");
    int x=0;
    scanf("%d", &x);

    while(x>8 || x<0){
        printf("\nValor de X invalido!\n");
        scanf("%d", &x);
    }

    printf("\nDigite o valor de y: ");
    int y=0;
    scanf("%d", &y);

    while(y>8 || y<0){
        printf("\nValor de Y invalido!\n");
        scanf("%d", &y);
    }

    int soma = vetor[x] + vetor[y];

    printf("\nSoma e: %d", soma);

    return 0;
}
