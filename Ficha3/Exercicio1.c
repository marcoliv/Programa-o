#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, par, impar;
    printf("Indique o numero: ");
    scanf("%d", &numero);

    if(numero==0)
        printf("Valor nulo");
    else
        printf("Valor nao nulo");
        if(numero % 2)
            printf("numero positivo");
            printf("numero par");

}
