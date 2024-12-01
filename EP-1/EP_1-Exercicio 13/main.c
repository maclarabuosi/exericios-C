#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite o lado A do triangulo: ");
    double lado_a=0;
    scanf("%lf", &lado_a);

    printf("\nDigite o lado B do triangulo: ");
    double lado_b=0;
    scanf("%lf", &lado_b);

    printf("\nDigite o lado C do triangulo: ");
    double lado_c=0;
    scanf("%lf", &lado_c);

    if(lado_a == 0 || lado_b == 0 || lado_c==0 || lado_a < 0 || lado_b < 0 || lado_c < 0){
        printf("Entrada invalida");
    }else if(lado_a == lado_b && lado_a == lado_c){
        printf("Triangulo equilatero");
    }else if((lado_a == lado_b && lado_a != lado_c)||(lado_a != lado_b && lado_a == lado_c)||(lado_b == lado_a && lado_b != lado_c)||(lado_b != lado_a && lado_b == lado_c)||(lado_c == lado_a && lado_c != lado_b)||(lado_c != lado_a && lado_c == lado_b)){
        printf("Triangulo isoceles");
    }else if(lado_a != lado_b && lado_a != lado_c){
        printf("Triangulo escaleno");
    }

    return 0;
}
