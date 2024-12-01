#include <stdio.h>
#include <stdlib.h>

void funcao(float R, float *area, float *volume) {
    // incluir aqui a sua solução
    float pi = 3.14;

    *area = 4 * pi * (R * R);

    *volume = (4 * pi * R * R * R) / 3;
}

int main()
{
    float R=0;
    float area;
    float volume;

    printf("Digite o valor de R:\n");

    scanf("%f", &R);

    funcao(R, &area, &volume);

    printf("Area: %.2f\nVolume: %.2f", area, volume);

    return 0;
}
