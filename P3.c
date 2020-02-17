#include <stdio.h>
#include "P3.h"

int secuencia()
{
    int ultimo;
    printf("%s", "\nEscriba el número de caracteres que tendra la secuencia: ");
    scanf("%d", &ultimo);
    char secuencia[ultimo];
    char uno = '1';
    char zero = '0';

    for (size_t i = ultimo; i > 0; i--)
    {
        if (i%2==0)
        {
            secuencia[i]=uno;
            printf("\n%s",secuencia);
        }
        else
        {
            secuencia[i]=zero;
            printf("\n%s",secuencia);
        }
        
    }
    return 0;
}