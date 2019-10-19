#include<stdio.h>

int main(void){
  int number, largest, secondLargest;
  printf("Enter an non-negative integer:");
  fflush(stdout);
  scanf("%d", &number);
  number = largest;
  for ( int counter = 1; counter < 10; counter++){
    printf("Enter an non-negative integer:");
    fflush(stdout);
    scanf("%d", &number);
    while ( number > largest){
      secondLargest = largest;
      largest = number;
    }
  }
  printf("The largest number is %d, the second largest number is %d", largest, secondLargest);
  return 0;
}
