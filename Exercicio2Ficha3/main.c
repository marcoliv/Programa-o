#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ladoA, ladoB, ladoC;

    printf("Insira o lado A: ");
    scanf("%d", &ladoA);
    printf("\nInsira o lado B: ");
    scanf(" %d", &ladoB);
    printf("\nInsira o lado C: ");
    scanf(" %d", &ladoC);

    if (ladoA + ladoB >= ladoC && ladoA + ladoC >= ladoB && ladoB + ladoC >= ladoA)
    {
        if(ladoA == ladoB && ladoA == ladoC && ladoB == ladoC)
        {
            printf("\nTriangulo Equilatro");
        }
        else if (ladoA == ladoB || ladoB == ladoC || ladoC == ladoA)
        {
            printf("\nTriangulo Isosceles");
        }
        else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA)
        {
            printf("\nTriangulo Escaleno");
        }
    }
    else
    {
        printf ("Valores invalidos para formar um triangulo");
    }
}
