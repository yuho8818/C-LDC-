#include<stdio.h>

int main(void){
  int productNumber;
  int sales;

  puts("Please enter the product number and sales.");
  fflush(stdout);
  scanf("%d%d", &productNumber, &sales);

  switch ( productNumber ){

  case 1:
    printf("The summary price is %d\n", sales * 2.98);
    break;

  case 2:
    printf("The summary price is %d\n", sales * 4.50);
    break;

  case 3:
    printf("The summary price is %d\n", sales * 9.98);
    break;

  case 4:
    printf("The summary price is %d\n", sales * 4.49);
    break;

  case 5:
    printf("The summary price is %d\n", sales * 6.87);
    break;

  default:
    puts("You entered a wrong number.");
    break;
  }

  return 0;
}
