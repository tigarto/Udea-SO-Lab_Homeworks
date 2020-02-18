#include <stdio.h>

int reverse(int n);

int main () {
  int number;
  printf("Digite el número\n");
  scanf("%d", &number);

  number = reverse(number);
  printf("El número al revés es %d\n", number);
}

int reverse(int n){
  int reversed = 0;

  while (n > 0) {
    reversed = reversed*10 + n%10;
    n = n/10; 
  }
  return reversed;
}