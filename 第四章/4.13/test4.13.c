#include<stdio.h>

int main(void){
  int i = 1;
  int sum = 0;
  
  do {
    sum += i;
    i += 2;
  } while ( i <= 15 );

  printf("%d", sum);
  
  return 0;
}
