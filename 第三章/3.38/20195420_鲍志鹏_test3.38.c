#include<stdio.h>

int main(void){
  int i, j, k, l, m, num;
  printf("Please enter a integer, five-digit max.");
  fflush(stdout);
  scanf("%d", &num);
  i = num % 10;
  j = num % 100 / 10;
  k = num % 1000 / 100;
  l = num % 10000 / 1000;
  m = num / 10000;
  int counter = 0;
  if ( i == 7 )
    counter++;
  if ( j == 7 )
    counter++;
  if ( k == 7 )
    counter++;
  if ( l == 7 )
    counter++;
  if ( m == 7 )
    counter++;
  printf("%d \"7\" in this number.", counter);
}
