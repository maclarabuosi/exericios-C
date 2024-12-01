#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:");
    int num = 0;
    scanf("%d", &num);

    while (num < 0){
        scanf("%d", &num);
        printf("O numero deve ser >= 0.\n");
    }

    for(int i=num; i>=0; i--){
        printf("%d ", i);
    }

    printf("\nFIM!");

}
