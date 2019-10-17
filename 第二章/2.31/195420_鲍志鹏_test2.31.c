#include<stdio.h>

int main(void){
  int i = 0;
  printf("number   square   cube\n");
  for ( i; i <= 10; i++){
    printf("%d   %d   %d\n", i, i * i, i * i * i);
  }
}
