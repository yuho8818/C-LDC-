#include<stdio.h>

int main(void){
  printf("Please enter the radius of the round:\n");
  fflush(stdout);
  float r;
  scanf("%f", &r);
  printf("The diameter is %f\nThe circumference is %f\nThe area is %f", r * 2, 3.14159 * r * 2, 3.14159 * r * r);
  return 0;
}
