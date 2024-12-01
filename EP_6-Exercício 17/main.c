#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* funcao(char *str) {
    // incluir aqui a sua solução

    char *pstr = malloc(6 * sizeof(char));

    int j=0;
    int len = strlen(str);
    for(j=0; j<len; j++){
        pstr[j] = str[len - 1 - j];
    }

    return pstr;
}

int main()
{
    printf("Digite um texto:\n");
    char str[6];
    scanf("%s", str);

    char *result;

    result = funcao(str);

    int i = 0;
    for(i=0; result[i] != '\0'; i++){
        printf("%c ", result[i]);
    }

    free(result);

    return 0;
}
