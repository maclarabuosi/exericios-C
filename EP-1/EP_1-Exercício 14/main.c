#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite seu peso: ");
    double peso=0;
    scanf("%lf", &peso);
    printf("\nDigite sua altura:");
    double altura=0;
    scanf("%lf", &altura);

    double imc = (peso / (altura*altura));

    if(imc >= 40.0){
        printf("Seu IMC e: %.2f\nA classificacao e: Obesidade grau III", imc);
    }else if(imc <= 18.5){
        printf("Seu IMC e: %.2f\nA classificacao e: Abaixo do normal", imc);
    }else if(imc >= 18.6 && imc <= 24.9){
        printf("Seu IMC e: %.2f\nA classificacao e: Normal", imc);
    }else if(imc >= 25.0 && imc <= 29.9){
        printf("Seu IMC e: %.2f\nA classificacao e: Sobrepeso", imc);
    }else if(imc >= 30.0 && imc <= 34.9){
        printf("Seu IMC e: %.2f\nA classificacao e: Obesidade grau I", imc);
    }else if(imc >= 35.0 && imc <= 39.9){
        printf("Seu IMC e: %.2f\nA classificacao e: Obesidade grau II", imc);
    }

    return 0;
}
