#include <stdio.h>
#include <math.h>

int factorial(int n);
float serie(int x, int n);

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

float serie(int x, int n) {
  float acum = 0;

  for (int i = 0; i < n; i++) {
    acum += pow(-1, i) * pow(x, i*2) / factorial(i*2);
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