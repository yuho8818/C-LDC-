#include<stdio.h>

int main(void){
  printf("Please enter the radius of the round, must be a integer:\n");
  fflush(stdout);
  int r;
  scanf("%d", &r);
  printf("The diameter is %d\nThe circumference is %f\nThe area is %f", r * 2, 3.14159 * r * 2, 3.14159 * r * r);
  return 0;
}
