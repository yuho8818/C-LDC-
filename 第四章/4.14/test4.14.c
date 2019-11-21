#include<stdio.h>

int main(void){
  int i;
  unsigned long long int product = 1;
  printf("Enter an integer:");
  fflush(stdout);
  scanf("%d", &i);
  for ( int j = 1; j <= i; j++ ){
    product *= j;
  }
  printf("%d! is %u", i, product);
}
