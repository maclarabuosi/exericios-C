#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Digite o valor das linhas: \n");
    int linhas = 0;
    scanf("%d", &linhas);

    printf("Digite o valor das colunas: \n");
    int colunas =0;
    scanf("%d", &colunas);

    int matrix[linhas][colunas];

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){

            if(i <j ){
                matrix[i][j] = (2*i) + (7*j) - 2;

            }else if(i == j){
                matrix[i][j] = (3*(i*i)) - 1;

            }else if(i > j){
                matrix[i][j] = (4*(i*i*i)) + (5*(j*j)) + 1;

            }
        }
    }

    for(int i=0; i<linhas; i++){
        for(int j=0; j<colunas; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
