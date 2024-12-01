#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[3][3];

    printf("Digite 9 numeros:");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonal_principal = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i == j){
                diagonal_principal += matrix[i][j];
            }
        }
    }

    int diagonal_secundaria =0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(i + j == 2){
                diagonal_secundaria += matrix[i][j];
           }
        }
    }

    printf("Soma diagonal principal: %d\n", diagonal_principal);

    printf("Soma diagonal secundaria: %d", diagonal_secundaria);

    return 0;
}
