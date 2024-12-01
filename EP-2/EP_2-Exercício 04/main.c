#include <stdio.h>
#include <stdlib.h>

int main(){

    int codigo_da_operacao = 0;

    int menor = 0;

    int contador = 0;
    do{
        printf("\nDigite 0 para sair, 1 para soma, 2 para soma de 3 numeros, 3 para multiplicacao.");
        scanf("%d", &codigo_da_operacao);

        contador +=1;

        switch(codigo_da_operacao){
            case 0:
                if(contador==1){
                    printf("\nNenhum calculo foi realizado!");
                }
            break;
            case 1:

                printf("Digite um numero:");
                int n1_soma2 = 0;
                scanf("%d", &n1_soma2);

                printf("Digite um numero:");
                int n2_soma2 = 0;
                scanf("%d", &n2_soma2);

                int soma_dois_numeros = n1_soma2 + n2_soma2;
                printf("\n(a+b) = %d", soma_dois_numeros);

                if(contador==1){
                    menor = soma_dois_numeros;
                }

                if(menor > soma_dois_numeros){
                    menor = soma_dois_numeros;
                }

            break;
            case 2:

                printf("Digite um numero:");
                int n1_soma3 = 0;
                scanf("%d", &n1_soma3);

                printf("Digite um numero:");
                int n2_soma3 = 0;
                scanf("%d", &n2_soma3);

                printf("Digite um numero:");
                int n3_soma3 = 0;
                scanf("%d", &n3_soma3);

                int soma_tres_numeros = n1_soma3 + n2_soma3 + n3_soma3;
                printf("\n(a+b+c) = %d", soma_tres_numeros);

                if(contador==1){
                    menor = soma_tres_numeros;
                }

                if(menor > soma_tres_numeros){
                    menor = soma_tres_numeros;
                }

            break;
            case 3:

                printf("Digite um numero:");
                int n1_multiplicacao = 0;
                scanf("%d", &n1_multiplicacao);

                printf("Digite um numero:");
                int n2_multiplicacao = 0;
                scanf("%d", &n2_multiplicacao);

                int multiplicacao = n1_multiplicacao * n2_multiplicacao;
                printf("\n(a*b) = %d", multiplicacao);

                if(contador==1){
                    menor = multiplicacao;
                }

                if(menor > multiplicacao){
                    menor = multiplicacao;
                }

        }
    }
    while(codigo_da_operacao!=0);

    printf("Menor resultado: %d", menor);

    return 0;
}
