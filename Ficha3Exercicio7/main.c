#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroA, numeroB, numeroC;

    printf("Indique o primeiro valor: ");
    scanf("%d", &numeroA);

    printf("\nIndique o segundo valor: ");
    scanf(" %d", &numeroB);

    printf("\nIndique o terceiro valor: ");
    scanf(" %d", numeroC);

    if (numeroA > numeroB)
        {
        if (numeroB > numeroC)
        {
            printf("%4d%4d%4d\n", numeroA, numeroB, numeroC);
        }
            else
            {
                if (numeroA > numeroC)
                {
                    printf("%4d%4d%4d\n", numeroA, numeroC, numeroB);
                }
                    else
                    {
                        printf("%4d%4d%4d\n", numeroC, numeroA, numeroB);
                    }
            }
        }
    else
    {
        if (numeroB > numeroC)
        {
            if (numeroA > numeroC)
                {
                    printf("%4d%4d%4d\n", numeroB, numeroA, numeroC);
                }
                    else
                    {
                        printf("%4d%4d%4d\n", numeroB, numeroC, numeroA);
                    }
        }
            else
            {
                printf("%4d%4d%4d\n", numeroC ,numeroB, numeroA);
            }
    }
}
