#include <stdio.h>
#include <stdlib.h>
//#include "soma.h"

int soma(int n) {

    if (n == 1) return 1;

    return (n * n * n) + soma(n - 1);

}

int main()
{
    printf("Digite um numero: \n");

    int n =0;

    scanf("%d", &n);

    int resultado =0;

    resultado = soma(n);

    printf("Resultado %d", resultado);

    return 0;
}
