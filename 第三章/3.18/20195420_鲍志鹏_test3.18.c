#include<stdio.h>

int main(void){
  printf("Enter sales in dollars (-1 to end):\n");
  float sales;
  fflush(stdout);
  scanf("%f", &sales);
  while ( sales != -1 ){
    printf("Salary is:%.2f", 200.00 + sales * 0.09);
    printf("\nEnter sales in dollars (-1 to end):\n");
    fflush(stdout);
    scanf("%f", &sales);
  }
  return 0;
}
