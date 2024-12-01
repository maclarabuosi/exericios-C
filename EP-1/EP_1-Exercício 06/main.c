#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero:");

    int numero = 0;

    scanf("%d", &numero);

    int antecessor = numero - 1;

    int sucessor = numero + 1;

    printf("Antecessor de %d e: %d\nSucessor de %d e: %d", numero, antecessor, numero, sucessor);

    return 0;
}
