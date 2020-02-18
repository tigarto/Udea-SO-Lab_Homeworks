#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
#include <stdbool.h>


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
bool pregunta(int a, int b);

int main (void) {
    srand(time(NULL)); //genera la semilla
    int num_pares, min, max, a, b, continuar;
    min = 0;
    max = 10;
    continuar = 1;
    
    a = generar_aleatorios(min, max);
    b = generar_aleatorios(min, max);

    while (continuar) {
        if (pregunta(a,b)) {
            printf("\nMuy bien!\n");
            a = generar_aleatorios(min, max);
            b = generar_aleatorios(min, max);
        } else {
            printf("\nNo. Por favor intenta nuevamente\n");
        }
        printf("\n\t\t... ¿Deseas continuar?\n");
        printf("\n\t\t... 1. Sí\t\t0. No\n");
        scanf("%d", &continuar);
    }
    return 0;
}

bool pregunta(int a, int b) {
    int res;

    printf("\n¿Cuánto es %d veces %d?\n", a, b);
    scanf("%d", &res);

    return a*b == res;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int generar_aleatorios(int num1, int num2) {
    int cnt = 0, num, M, m;

    M = mayor(num1, num2);
    m = menor(num1, num2);

    return rand()%(M - m + 1) + m;
}