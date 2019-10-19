#include<stdio.h>

  
int main(void){
  int i, j, k, l, m;
  printf("Please enter a five-digit number:");
  fflush(stdout);
  scanf("%d", &i);
  j = i % 10000;
  i = i / 10000;
  k = j % 1000;
  j = j / 1000;
  l = k % 100;
  k = k / 100;
  m = l % 10;
  l = l / 10;
  if ( i == m && j == l ){
    printf("This is a parlindrome number.");
  } else {
    printf("This is not a parlindrome number.");
  }
  return 0;
}
