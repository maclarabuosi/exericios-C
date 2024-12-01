#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Digite o valor de a:\n");
    float valor_a=0;
    scanf("%f", &valor_a);

    printf("Digite o valor de b:\n");
    float valor_b=0;
    scanf("%f", &valor_b);

    float hipotenusa = sqrt(pow(valor_a, 2) + pow(valor_b, 2));

    printf("A hipotenusa e: %f", hipotenusa);

    return 0;
}
