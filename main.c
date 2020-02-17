#include <stdio.h>
#include "P1.h"
#include "P2.h"
#include "P3.h"

int main()
{
    int ejercicio;

    printf("%s", "\nEscriba el número del ejercicio que quiere visualizar: ");
    scanf("%d", &ejercicio);
    switch (ejercicio)
    {
    case 1:
        comisiones(20000);
        comisiones(20001);
        comisiones(30000);
        comisiones(50000);
        comisiones(50001);
        comisiones(75000);
        comisiones(-3);
        break;
    case 2:
        tablas();
        break;
    case 3:
        secuencia();
        break;

    default:
        printf("%s", "\nEjercicio no encontrado\n");
        break;
    }
}