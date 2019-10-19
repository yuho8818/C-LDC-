#include<stdio.h>

int main(void){
  int hours;
  float rate;
  printf("Enter # of hours worked ( -1 to end ):");
  fflush(stdout);
  scanf("%d", &hours);
  while ( hours != -1 ){
    printf("Enter hourly rate of the worker ( $00.00 ):");
    fflush(stdout);
    scanf("%f", &rate);
    if ( hours > 40 ){
      printf("Salary is $%.2f\n", 40 * rate + ( hours - 40 ) * rate * 1.5);
    } else {
      printf("Salary is $%.2f\n", rate * hours);
    }
    printf("Enter # of hours worked ( -1 to end ):");
    fflush(stdout);
    scanf("%d", &hours);
  }
  return 0;
}
