#include <stdio.h>
#include <stdlib.h>

int contafreq(int num, int digito) {

   int div =0;

   if ( num < 10) {

        if(num == digito){
            return 1;
        }
        else{
            return 0;
        }
   }
   else
   {
      div = (num % 10);

      if (div == digito){
            return 1 + contafreq(num/10, digito);
      }else{
            return contafreq(num/10, digito);
      }
   }

}

int main()
{
    printf("Digite um numero:\n");

    int num =0;

    scanf("%d", &num);

    printf("\nDigite um numero:\n");

    int digito =0;

    scanf("%d", &digito);

    int result =0;

    result = contafreq(num, digito);

    printf("%d", result);

    return 0;
}
