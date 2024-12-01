#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 3;

    int *px = &x;

    float y = 3.4;

    float *py = &y;

    char z = 'A';

    char *pz = &z;

    printf("Digite x: \n");
    scanf("%d", px);

    printf("Digite y: \n");
    scanf("%f", py);

    printf("Digite z: \n");
    scanf(" %c", pz);

    printf("Antes: \n");

    printf("x = 3\n");

    printf("y = 3.4\n");

    printf("z = A\n");

    printf("Depois:\n");

    printf("x = %d\n", x);

    printf("y = %f\n", y);

    printf("z = %c\n", z);

    return 0;
}
