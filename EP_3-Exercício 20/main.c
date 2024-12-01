#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o numero de linhas da matriz: \n");

    int linhas = 0;

    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: \n");

    int colunas =0;

    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Digite os elementos da matriz: \n");

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){

            scanf("%d", &matriz[i][j]);

        }
    }

    printf("\n");

    for(int i=0; i<colunas; i++){

        for(int j=0; j<linhas; j++){

            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}
