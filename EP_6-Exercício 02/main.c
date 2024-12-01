#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x=2;

    int y=5;

    int *px = &x;

    int *py = &y;

    if(px > py){
        printf("A");
    }else if(px < py){
        printf("B");
    }

    return 0;
}
