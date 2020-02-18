#include <stdio.h>
#include <stdlib.h> //rand() y srand()
#include <time.h>   //time()
#include <stdbool.h>


int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);
bool pregunta(int a, int b);
void mensaje(bool tipo);

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
            mensaje(true);
            a = generar_aleatorios(min, max);
            b = generar_aleatorios(min, max);
        } else {
            mensaje(false);
        }
        printf("\n\t\t... ¿Deseas continuar?\n");
        printf("\n\t\t... 1. Sí\t\t0. No\n");
        scanf("%d", &continuar);
    }
    return 0;
}

void mensaje(bool tipo){
    int msg = generar_aleatorios(1,4);
    if (tipo) {
        switch (msg)
        {
        case 1:
            printf("\nMuy bien!\n");
            break;

        case 2:
            printf("\nExcelente!\n");
            break;

        case 3:
            printf("\nBuen trabajo!\n");
            break;
            
        case 4:
            printf("\nSigue haciéndolo bien!\n");
            break;
        
        default:
            break;
        }
    } else {
        switch (msg)
        {
        case 1:
            printf("\nNo. Por favor trata de nuevo.\n");
            break;

        case 2:
            printf("\nIncorrecto. Trata una vez más.\n");
            break;

        case 3:
            printf("\nNo te rindas!\n");
            break;
            
        case 4:
            printf("\nNo. Trata de nuevo\n");
            break;
        
        default:
            break;
        }
    }
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