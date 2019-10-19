#include<stdio.h>

int main(void){
  int num;
  printf("Enter a four-digits integer:");
  fflush(stdout);
  scanf("%d", &num);
  int i, j, k, l;
  i = num % 10;
  j = num % 100 / 10;
  k = num % 1000 / 100;
  l = num % 10000 / 1000;
  i = ( i + 7 ) % 10;
  j = ( i + 7 ) % 10;
  k = ( i + 7 ) % 10;
  l = ( i + 7 ) % 10;
  printf("%d%d%d%d", k, i, l, j); 
}
