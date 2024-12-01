#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:");
    int numero = 0;
    scanf("%d", &numero);

    int vetor[numero][numero];

    for(int i=0; i<numero; i++){
        for(int j=0; j<numero; j++){
            if(i == j){
                vetor[i][j] = 1;
            }else{
                vetor[i][j]=0;
            }
        }
    }

    for(int i=0; i<numero; i++){
        for(int j=0; j<numero; j++){
            printf("%d", vetor[i][j]);
        }
        printf("\n");
    }

    return 0;
}
