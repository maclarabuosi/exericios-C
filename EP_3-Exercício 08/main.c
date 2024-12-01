#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("attDigite 6 numeros: \n");

    int vetor[6];

    for(int i=0; i<6; i++){
        scanf("%d", &vetor[i]);
    }

    for(int i=0; i<6; i++){
        printf("%d ", vetor[i]);
    }

    int repeticao[6];

    for(int i=0; i<6; i++){
        repeticao[i] = -1;
    }

    int contador =0;

    int valores_iguais =0;

    for(int i=0; i<6; i++){
        for(int j= i+1; j<6; j++){

            if (vetor[i] == vetor[j]){
                int existe =0;


                for(int k=0; j<contador; k++){
                    if (repeticao[k] == vetor[i]){
                        existe = 1;
                        break;
                    }
                }

                if(!existe){
                    repeticao[contador] = vetor[i];
                    contador++;
                    valores_iguais = 1;
                }
            }
        }
    }

    if(valores_iguais){

        for(int i=0; i<contador; i++){
            printf("%d \n", vetor[i]);

        }

    }else{

        printf("Nao existem numeros iguais!");
    }

    return 0;
}

