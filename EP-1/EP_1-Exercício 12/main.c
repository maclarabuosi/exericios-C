#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero: ");
    int numero =0;
    scanf("%d", &numero);

    if(numero == 0){
        printf("Numero neutro");
    }else if(numero % 2 == 1){
        printf("O numero %d e impar", numero);
    }else{
        printf("O numero %d e par", numero);
    }

    return 0;
}
