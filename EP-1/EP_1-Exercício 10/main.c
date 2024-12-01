#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:");
    int num = 0;
    scanf("%d", &num);

    switch(num){
        case 1:
            printf("Domingo!");
        break;
        case 2:
            printf("Segunda!");
        break;
        case 3:
            printf("Terça!");
        break;
        case 4:
            printf("Quarta!");
        break;
        case 5:
            printf("Quinta!");
        break;
        case 6:
            printf("Sexta!");
        break;
        case 7:
            printf("Sabado!");
        default:
            printf("Numero invalido!");
    }

    return 0;
}
