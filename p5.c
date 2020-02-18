#include <stdio.h>
#include <math.h>


float serie(float x, int n);

int main () {
  int x, n;
  float res; 

  printf("Valor de entrada de x:\t");
  scanf("%d", &x);

  printf("Número de términos:\t");
  scanf("%d", &n);

  res = serie(x,n);
  printf("\nsuma:\t%f", res);
}

float serie(float x, int n) {
  float acum = 0;

  for (int i = 0; i < n; i++) {
    acum += pow(x, i);
  }
  return acum;
}


int factorial(int n){
  int acum = 1;

  for (int i = 1; i <= n; i++){
    acum *= i;
  }
  return acum;
}