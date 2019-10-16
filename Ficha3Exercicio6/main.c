#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, somatorio=0;

    printf("Insira uma numero de 1 ate 10: ");
    scanf("%d", &numero1);

    if(numero1 <=10)
    {
         switch(numero1)
        {
        case 10: somatorio = somatorio + 10;
        case 9: somatorio = somatorio + 9;
        case 8: somatorio = somatorio + 8;
        case 7: somatorio = somatorio + 7;
        case 6: somatorio = somatorio + 6;
        case 5: somatorio = somatorio + 5;
        case 4: somatorio = somatorio + 4;
        case 3: somatorio = somatorio + 3;
        case 2: somatorio = somatorio + 2;
        case 1: somatorio = somatorio + 1;
        }
        printf("\nResultado: %d", somatorio);
    }
   else
   {
       printf("\nNumero Invalido");
   }
}
