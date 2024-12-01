#include <stdio.h>
#include <stdlib.h>

void funcao(int *vet, int tam, int *maior) {
    // incluir aqui a sua solução
    int i = 0;

    *maior = *vet;

    int *vetor = vet;

    for(i = 0; i < tam; i++){
        if (*maior < *vetor){
            *maior = *vetor;
        }
        vetor++;
    }

    int *num = vet;

    int contador =0;

    int j=0;

    for(j=0; j<tam; j++){
        if (*maior == *num){
            contador++;
        }
        num++;
    }

    printf("O numero %d ocorreu %d vezes", *maior, contador);
}

int main()
{
    printf("Digite o tamanho do vetor: \n");
    int tam = 0;
    scanf("%d", &tam);

    printf("Digite os numeros do vetor: \n");
    int vet[tam];
    int i = 0;
    for(i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }

    int maior;

    funcao(vet, tam, &maior);

    return 0;
}
