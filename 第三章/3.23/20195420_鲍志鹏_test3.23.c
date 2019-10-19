#include<stdio.h>

int main(void){
  int number, largest;
  printf("Enter an non-negative integer:");
  fflush(stdout);
  scanf("%d", &number);
  number = largest;
  for ( int counter = 1; counter < 10; counter++){
    printf("Enter an non-negative integer:");
    fflush(stdout);
    scanf("%d", &number);
    while ( number > largest){
      largest = number;
    }
  }
  printf("%d", largest);
  return 0;
}
