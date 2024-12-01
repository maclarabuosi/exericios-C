#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite uma frase: \n");

    char vetor[8];

    int comprimento = 0;


    do{
        comprimento =0;

        scanf("%[^\n]", vetor);

        fflush(stdin);

        for(int i=0; vetor[i] != '\0'; i++){
            comprimento++;
        }

        if(comprimento < 8){

            printf("Voce digitou uma string com %d caractere(s)!", comprimento);

            printf("\nA string deve ter 8 caracteres. Por favor, digite uma nova string:");

        }
    }

    while(comprimento < 8);

    for(int i=0; i<4; i++){
        printf("%c", vetor[i]);
    }

    return 0;
}
