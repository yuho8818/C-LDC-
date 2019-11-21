#include<stdio.h>

int main(void){
  int i = 2;
  int sum = 0;
  
  do {
    sum += i;
    i += 2;
  } while ( i <= 30 );

  printf("%d", sum);
  
  return 0;
}
