#include <stdio.h>
#include <stdlib.h>

int main()
{

    double valor_total = 780.00;

    double primeiro_ganhador = (valor_total * 46) / 100;

    double segundo_ganhador = (valor_total * 32) / 100;

    double terceiro_ganhador = primeiro_ganhador - segundo_ganhador;

    printf("Primeiro ganhador: R$ %.2f\nSegundo ganhador: R$ %.2f\nTerceiro ganhador: R$ %.2f", primeiro_ganhador, segundo_ganhador, terceiro_ganhador);

    return 0;
}
