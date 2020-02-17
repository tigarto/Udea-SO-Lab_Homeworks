#include <stdio.h>
#include <string.h>

void invertir(char cadena[]);
int main() {
    char secuencia[80];
    strcpy (secuencia,"");
    for(int x=0;x<=5;x+=1){
        if( x%2 == 0 ){
            strcat (secuencia,"1");
            // printf("%s\n", secuencia);
        }
        if(x%2 != 0 ){
            strcat (secuencia,"0");
            // printf("%s\n", secuencia);            
        }
    }
    invertir(secuencia);
    return 0;
}

void invertir( char cadena[]){
    int tamano;
    tamano = strlen(cadena);
    char *valor;
    char cadenaN[tamano];
    strcpy (cadenaN,"");
    int j= 0;
    printf("%s\n",cadena);
    for(int i = tamano; i >= 0; i-=1){
        valor = &(cadenaN[i]);
        strcat(cadena,valor);        
        j+=1;
    }
    printf("%s\n",cadenaN);

}