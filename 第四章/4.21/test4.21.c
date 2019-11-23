#include<stdio.h>

int main(void){
  unsigned int counter = 1;

  for ( ; counter <= 10; ++counter);

  printf("%u", counter);

  return 0;
}
