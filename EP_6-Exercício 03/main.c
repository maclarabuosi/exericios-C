#include <stdio.h>
#include <stdlib.h>

void funcao (int *a, int *b){

    int temp=0;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    printf("Digite o valor de a:\n");
    int a=0;
    scanf("%d", &a);

    printf("Digite o valor de b:\n");
    int b=0;
    scanf("%d", &b);

    funcao(&a, &b);

    printf("a =%d\n", a);

    printf("b =%d", b);

    return 0;
}
