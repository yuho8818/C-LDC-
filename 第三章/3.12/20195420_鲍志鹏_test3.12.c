#include<stdio.h>

int main(void){
  unsigned int x = 1, total = 0, y;
  while ( x <= 10 ){
    y = x * x;
    printf("%d\n",y);
    total += y;
    ++x;
  }
  printf("Total is %d\n", total);
  return 0;
}
