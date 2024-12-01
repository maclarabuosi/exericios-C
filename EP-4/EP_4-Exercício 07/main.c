#include <stdio.h>
#include <stdlib.h>

int dec2bin(int n_decimal) {

    if (n_decimal ==0) return 0;

    return dec2bin(n_decimal / 2) * 10 + (n_decimal % 2);

}

int main()
{
    printf("Digite um numero:\n");

    int n_decimal=0;

    scanf("%d", &n_decimal);

    int result =0;

    result = dec2bin(n_decimal);

    printf("%d", result);

    return 0;
}
