#include <stdio.h>
#include <stdlib.h>

int main()
{
    char variavel_char = ' ';

    int variavel_int = 0;

    float variavel_float = 0.0;

    double variavel_double = 0.0;

    printf("Char: %d\n", (int)sizeof(variavel_char));

    printf("Int: %d\n", (int)sizeof(variavel_int));

    printf("Float: %d\n", (int)sizeof(variavel_float));

    printf("Double: %d\n", (int)sizeof(variavel_double));

    return 0;
}
