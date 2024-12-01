#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite os numeros da matriz: \n");

    int matriz[3][3];

    int i=0;
    int j=0;

    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int *pmatriz = NULL;

    pmatriz = &matriz[0][0];

    int elementos[3][3];

    i=0;
    j=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            elementos[i][j] = 1 + matriz[i][j];
        }
        pmatriz++;
    }

    i=0;
    j=0;

    for(i=0;i<3;i++){
        for(j=0; j<3; j++){
            printf("%d\n", elementos[i][j]);
        }
    }

    return 0;
}
