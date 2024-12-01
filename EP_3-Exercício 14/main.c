#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite 9 numeros:");

    int matrix[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int maior = matrix[0][0];

    int menor = matrix[0][0];

    int i_maior =0;

    int i_menor =0;

    int j_maior = 0;

    int j_menor =0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(maior < matrix[i][j]){
                maior = matrix[i][j];
                i_maior = i;
                j_maior = j;
            }
            if(menor > matrix[i][j]){
                menor = matrix[i][j];
                i_menor = i;
                j_menor = j;

            }
        }
    }

    printf("Maior: %d\n", maior);
    printf("Posicao(maior): %d linha e %d coluna\n", i_maior, j_maior);

    printf("Menor: %d\n", menor);
    printf("Posicao(menor): %d linha e %d coluna", i_menor, j_menor);

    return 0;
}
