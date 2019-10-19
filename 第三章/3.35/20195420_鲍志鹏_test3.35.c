#include<stdio.h>

int main(void){
  int i, j, k, l, m, num;
  printf("Please enter a binary number, five-digit max.");
  fflush(stdout);
  scanf("%d", &num);
  i = num % 10;
  j = num % 100 / 10;
  k = num % 1000 / 100;
  l = num % 10000 / 1000;
  m = num / 10000;
  printf("%d", i + 2 * j + 2 * 2 * k + 2 * 2 * 2 * l + 2 * 2 * 2 * 2 * m);
}
