#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, par, impar;
    printf("Indique o numero: ");
    scanf("%d", &numero);

    if(numero==0)
        {
        printf("\nValor nulo");
        printf("\nNumero Par");
    }
    else
    {
        printf("Valor nao nulo");
        if(numero > 0)
        {
            printf("\nnumero positivo");
        }
        else
        {
            printf("\nNumero negativo");
        }
        if(numero % 2==0)
        {
            printf("\nnumero par");
        }
        else
        {
            printf("\nNumero Primo");
        }
    }

}
