#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:\n");
    int num_1=0;
    scanf("%d", &num_1);

    printf("Digite um numero:");
    int num_2;
    scanf("%d", &num_2);

    if(num_1 > num_2){
        printf("O %d e o maior numero!", num_1);
    }else if(num_1 < num_2){
        printf("O %d e o numero maior!", num_2);
    }else{
        printf("Numeros iguais!");
    }

    return 0;
}
