#include <stdio.h>
#include <stdlib.h>
#define desconto1 0.04
#define desconto2 0.06
#define desconto3 0.08

int main()
{
    float valorCompra, desconto;

    printf("Indique o valor da compra: ");
    scanf("%f", &valorCompra);

    if(valorCompra <= 500)
    {
        printf("\no valor da compra nao tem desconto");
    }
    else if(valorCompra > 500 && valorCompra <= 1250)
    {
        desconto = valorCompra * desconto1;

        printf("\nO valor da compra apresenta um desconto de %.0f: %.2fEuros",desconto1*100, desconto);
    }
    else if(valorCompra > 1250 && valorCompra <= 2000)
    {
        desconto = valorCompra * desconto2;

        printf("\nO valor da compra apresenta um desconto de %.0f: %.2fEuros",desconto2*100, desconto);
    }
    else if(valorCompra >200)
    {
        desconto = valorCompra * desconto3;

        printf("\nO valor da compra apresenta um desconto de %.0f: %.2fEuros",desconto3 desconto);
    }
}
