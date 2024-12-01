#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Digite uma frase: \n");

    char vetor[8];

    scanf("%[^\n]", vetor);

    fflush(stdin);

    int length = strlen(vetor);

    printf("Digite uma letra: \n");

    char letra;

    scanf(" %c", &letra);

    char vogais[11];

    vogais[0] = 'A';
    vogais[1] = 'a';
    vogais[2] = 'E';
    vogais[3] = 'e';
    vogais[4] = 'I';
    vogais[5] = 'i';
    vogais[6] = 'O';
    vogais[7] = 'o';
    vogais[8] = 'U';
    vogais[9] = 'u';
    vogais[10] = '\0';

    int contador_de_vogais =0;

    for(int i=0; vetor[i] != '\0'; i++){

        for(int j=0; j<11; j++){

            if(vetor[i] == vogais[j]){

                contador_de_vogais++;

                vetor[i] = letra;

            }
        }
    }

    printf("A string possui %d vogais.\n", contador_de_vogais);

    for(int i=0; i<length; i++){
        printf("%c", vetor[i]);
    }

    return 0;
}
