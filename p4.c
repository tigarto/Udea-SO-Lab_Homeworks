#include <stdio.h>
#include <math.h>


int multiplo(int a, int b);

int main () {
  int a, b;
  float res; 

  do
  {
    printf("Ingrese el primer número:\t");
    scanf("%d", &a);

    printf("Ingrese el segundo número:\t");
    scanf("%d", &b);

    if (multiplo(a,b)) {
      printf("%d es múltiplo de %d", b, a);
    } else {
      printf("%d no es múltiplo de %d", b, a);
    }

    printf("\t\t\tPresione CTRL + C para terminar el proceso\n");
  } while (1);
}

int multiplo(int a, int b) {
  if (a % b == 0) {
    return 1;
  } else {
    return 0;
  }
}

