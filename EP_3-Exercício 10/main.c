#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// utilizando bubble sort

void bubble_sort(int vetor[], int length);

int main(void)
{

    printf("Digite 10 numeros: ");

    int vetor[10];

    for(int i=0; i<10; i++){
        scanf("%d", &vetor[i]);
    }

    int length = 10;

    bubble_sort(vetor, length);

     for(int i=0; i<length; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}

void bubble_sort(int vetor[10], int length){

    bool troca = false;

    int i=0;

    do{
        troca = false;

        for(int j=0; j< (length - 1 - i); j++){
            if(vetor[j] > vetor[j+1]){
                int temporario = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j + 1] = temporario;
                troca = true;
            }
        } i++;
    }while(troca);
}
