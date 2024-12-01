#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia=0;
    int mes=0;
    int ano=0;

    printf("Digite o dia:");
    scanf("%d", &dia);

    printf("Digite o mes:");
    scanf("%d", &mes);

    printf("Digite o ano:");
    scanf("%d", &ano);

    printf("%d/%d/%d", dia,mes,ano);

    return 0;
}
