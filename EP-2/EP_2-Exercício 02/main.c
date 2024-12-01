#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero: ");
    int num = 0;
    scanf("%d", &num);

    for(int i=0; i<=num; i++){
        if(i%2!=0){
            printf("%d ", i);
        }
    }

    printf("\n");

    for(int i=0; i<=num; i++){
        if(i%2==0){
            printf("%d ", i);
        }
    }

    return 0;
}
