#include<stdio.h>

int main(void){
  unsigned int i = 1, power = 1,x , y;
  printf("Please enter x:\n");
  fflush(stdout);
  scanf("%u", &x);
  printf("please enter y:\n");
  fflush(stdout);
  scanf("%u", &y);
  while ( i <= y ){
    power *= x;
    i++;
  }
  printf("x^y=%u", power);
  return 0;
}
