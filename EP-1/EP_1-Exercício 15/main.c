#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um ano:");
    int ano = 0;
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0){
        printf("E ano bissexto!");
    }else if(ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0){
        printf("E ano bissexto!");
    }else{
        printf("Nao e ano bissexto!");
    }

    return 0;
}
