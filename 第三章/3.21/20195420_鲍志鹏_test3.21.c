#include<stdio.h>

int main(void){
  int i = 5;
  printf("%d ", i);
  printf("%d ", i--);
  printf("%d\n", i);
  i = 5;
  printf("%d ", i);
  printf("%d ", --i);
  printf("%d\n", i);
  return 0;
}
