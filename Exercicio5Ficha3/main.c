#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2, conta;
    char operacao;

    printf("Indique o primeiro valor: ");
    scanf(" %d", &numero1);

    printf("\nIndique o segundo valor: ");
    scanf(" %d", &numero2);

    printf("Indique o sinal de operacao ( +, -, x, / ou %%): ");
    scanf(" %c", &operacao);

    if(operacao == '+')
    {
        conta = numero1 + numero2;

        printf("\nO valor e: %d", conta);
    }
    else if(operacao == '-')
    {

        conta = numero1 - numero2;

        printf("\nO Valor e: %d", conta);
    }
    else if(operacao == 'x')
    {
        conta = numero1 * numero2;

        printf("\nO Valor e: %d", conta);
    }
    else if(operacao == '/')
    {
        conta = numero1 / numero2;

        printf("\nO Valor e: %d", conta);
    }
    else if(operacao == '%')
    {
        conta = numero1 % numero2;

        printf("\nO Valor e: %d", conta);
    }
}
