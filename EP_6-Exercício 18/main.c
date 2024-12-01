#include <stdio.h>
#include <stdlib.h>

int **funcao(int N) {
    // incluir aqui a sua solução
    int **matriz;

    matriz = malloc(N * sizeof(int *));

    int cont_col;
    for(cont_col = 0; cont_col < N; cont_col++){
        matriz[cont_col] = malloc(N * sizeof(int));
    }

    int i;
    int j;

    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(j == i){
                matriz[i][j] = 0;
            }else if(i > j){
                matriz[i][j] = -1;
            }else{
                matriz[i][j] = 1;
            }
        }
    }

    return matriz;
}

int main()
{
    printf("Digite um numero: \n");
    int N;
    scanf("%d", &N);

    int **matriz = funcao(N);

    int linhas;
    int colunas;
    for(linhas=0; linhas<N; linhas++){
        for(colunas=0; colunas<N; colunas++){
            printf("%d ", matriz[linhas][colunas]);
        }
        printf("\n");
    }

    for(int i = 0; i < N; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
