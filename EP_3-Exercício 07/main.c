#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite cinco numeros: \n");
    int a[5];

    for(int i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    printf("\nDigite cinco numeros: \n");
    int b[5];

    for(int i=0; i<5; i++){
        scanf("%d", &b[i]);
    }

    int c[5];

    for(int i=0; i<5; i++){
        c[i] = a[i] - b[i];
    }

    for(int i=0; i<5; i++){
        printf("%d ", c[i]);
    }

    return 0;
}
