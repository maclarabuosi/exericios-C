#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite 1 para Soma, 2 - Subtração, 3 - Divisão e 4 - Multiplicação.");
    int operacao = 0;
    scanf("%d", &operacao);

    switch(operacao){
        case 1:
            printf("Digite um numero: ");
            int num_1=0;
            scanf("%d", &num_1);
            printf("Digite um numero: ");
            int num_2=0;
            scanf("%d", &num_2);
            int soma = num_1 + num_2;
            printf("O resultado da soma e: %d", soma);
        break;
        case 2:
            printf("Digite um numero: ");
            int num_3=0;
            scanf("%d", &num_3);
            printf("Digite um numero: ");
            int num_4=0;
            scanf("%d", &num_4);
            int subtracao =  num_3 - num_4;
            printf("O resultado da subtracao e: %d", subtracao);
        break;
        case 3:
            printf("Digite um numero: ");
            double num_5=0;
            scanf("%f", &num_5);
            printf("Digite um numero: ");
            double num_6=0;
            scanf("%f", &num_6);
            double divisao = num_5 / num_6;
            printf("O resultado da divisao e: %f", divisao);
        break;
        case 4:
            printf("Digite um numero: ");
            int num_7=0;
            scanf("%d", &num_7);
            printf("Digite um numero: ");
            int num_8=0;
            scanf("%d", &num_8);
            int multiplicacao = num_7 * num_8;
            printf("O resultado da divisao e: %d", multiplicacao);
        break;
        default:
            printf("Numero invalido.");
    }

    return 0;
}
