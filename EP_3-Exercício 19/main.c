#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Digite 16 numeros: \n");

    int matriz[4][4];

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    bool contador_diagonal = true;

    bool contador_superior =true;

    bool contador_inferior =true;

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){

            if ( i != j && matriz[i][j] != 0){

                contador_diagonal = false;

            }

            if ( i > j && matriz[i][j] != 0){

                contador_inferior = false;

            }

            if ( i < j && matriz[i][j] != 0){

                contador_superior = false;
            }
        }
    }

    if (contador_diagonal) {

        printf("Matriz Diagonal!!!");
    }
    else if (contador_superior && contador_inferior) {

        printf("Matriz Diagonal!!!");
    }
    else if (contador_inferior) {

        printf("Matriz Triangular Superior!!!");
    }
    else if (contador_superior){

        printf("Matriz Triangular Inferior!!!");
    }


    else{

        printf("Nao se Enquadra!!!");
    }

    return 0;
}
