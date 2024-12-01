#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3];

    printf("Digite 9 numros: ");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        int vetor[] = {0,0,0};
        for(int j=0; j<3; j++){
            vetor[i] += matriz[j][i];
        }
        printf("%d ", vetor[i]);
    }

    return 0;
}
