#include <stdio.h>
#include <stdlib.h>

long euclides_recursivo(long m, long n)
{
    // Implemente aqui a sua funcao recursiva!!!

    if (n == 0) return m;

    return euclides_recursivo(n, m%n);

}

long euclides_iterativo(long m, long n)
{
    // Implemente aqui a sua funcao iterativa!!!

    long div = 0;

    while (n != 0){

        div = (m%n);
        m = n;
        n = div;
    }

    return m;

}

int main()
{
    printf("Digite um numero:\n");

    long m = 0;

    scanf("%d", &m);

    printf("Digite um numero:\n");

    long n = 0;

    scanf("%d", &n);

    int resultado_recursivo =0;

    resultado_recursivo = euclides_recursivo(m, n);

    printf("MDC = %d", resultado_recursivo);

    int resultado_iterativo =0;

    resultado_iterativo = euclides_iterativo(m,n);

    printf("MDC = %d", resultado_iterativo);

    return 0;
}
