#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:");
    int numero = 0;
    scanf("%d", &numero);

    int divisores = 0;

    for(int i=1; i<numero; i++){
        if(numero%i==0){
            divisores += i;
        }
    }

    printf("%d", divisores);

    return 0;
}
