#include<stdio.h>

int main(void){
  int i, j;
  printf("Please enter a five-digit number:");
  fflush(stdout);
  scanf("%d", &i);
  j = i % 10000;
  printf("%d", i / 10000);
  printf("   %d", j / 1000);
  i = j % 1000;
  printf("   %d", i / 100);
  j = i % 100;
  printf("   %d", j / 10);
  printf("   %d", j % 10);
}
