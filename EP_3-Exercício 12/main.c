#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Digite uma frase: \n");

    char vetor[8];

    int comprimento =0;

    do{
        scanf("%s", vetor);

        comprimento = strlen(vetor);

        if(comprimento > 5){
            printf("Digite novamente a string com ate 5 caracteres: \n");
        }
    }
    while(comprimento > 5);

    for(int i=comprimento-1 ; i>=0; i--){
        printf("%c ", vetor[i]);
    }

    return 0;
}
