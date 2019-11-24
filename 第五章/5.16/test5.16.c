#include <stdio.h>

unsigned long long int integerPowerLoop(int base, int exponent);

int main(void){
  int base;
  int exponent;
  
  puts("Please enter the base number and the exponent number");
  fflush(stdout);
  scanf("%d%d", &base, &exponent);

  printf("%d", integerPowerLoop(base, exponent));

  return 0;
}

unsigned long long int integerPowerLoop(int base, int exponent){
  int power = 1;
  for (int i = 0;i <= exponent; ++i){
    power *= base;
  }
  return power;
}
