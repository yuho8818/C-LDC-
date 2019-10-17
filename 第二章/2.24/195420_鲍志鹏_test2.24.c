#include<stdio.h>

int main(void){
  int i, j;
  printf("Please enter an integer:");
  fflush(stdout);
  scanf("%d", &i);
  j = i % 2;
  if ( j == 1 ){
    printf("It's an odd.");
  } else {
    printf("It's an even.");
  }
}
