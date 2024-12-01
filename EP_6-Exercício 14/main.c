#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Digite o numero de linhas da matriz:\n");
    int linhas;
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz:\n");
    int colunas;
    scanf("%d", &colunas);

    int **matriz;

    matriz = malloc(linhas * sizeof(int *));

    int contador_linhas=0;

    for(contador_linhas=0; contador_linhas<linhas; contador_linhas++){
        matriz[contador_linhas] = malloc(colunas * sizeof(int));
    }

    printf("\nDigite um numero:\n");
    int x;
    scanf("%d", &x);

    printf("\nDigite os numeros da matriz:\n");

    int contador_matlinhas=0;
    int contador_matcol=0;
    for(contador_matlinhas=0; contador_matlinhas<linhas; contador_matlinhas++){
        for(contador_matcol=0; contador_matcol<colunas; contador_matcol++){
            scanf("%d", &matriz[contador_matlinhas][contador_matcol]);
        }
    }

    int cont_linhas=0;
    int cont_colunas=0;
    for(cont_linhas=0; cont_linhas<linhas; cont_linhas++){
        for(cont_colunas=0; cont_colunas<colunas; cont_colunas++){
            printf("%d \n", matriz[cont_linhas][cont_colunas]);
        }
    }

    int i=0;
    int j=0;
    bool x_true = false;

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            if (x == matriz[i][j]){
                x_true = true;
                break;
            }
        }
    }

    if(x_true == true){
        printf("SIM");
    }else{
        printf("NAO");
    }

    int k=0;

    for(k=0; k<linhas; k++){
        free(matriz[k]);
    }

    free(matriz);

    return 0;
}
