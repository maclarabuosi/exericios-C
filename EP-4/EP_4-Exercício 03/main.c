#include <stdio.h>
#include <stdlib.h>

int potencia(int n1, int n2) {

    if (n2 == 0) return 1;

    return n1 * potencia(n1, n2-1);

}

int main()
{
    printf("Digite um numero:\n");

    int n1=0;

    scanf("%d", &n1);

    printf("\nDigite um numero:\n");

    int n2=0;

    scanf("%d", &n2);

    int resultado = 0;

    resultado = potencia(n1, n2);

    printf("%d", resultado);

    return 0;
}
