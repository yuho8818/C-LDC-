//calculate compound intrest

#include<stdio.h>
#include<math.h>

int main(void){
  double principal = 1000.0;
  double rate = .05;
  unsigned int year = 1;
  
  for ( rate; rate <= .1; rate += .01 ){
    
    for ( year; year <= 10; year++ ){
      double amount = principal * pow( 1.0 + rate, year );
      printf("%4u%21.2f\n", year, amount);
    }

    year = 1;
  }

  return 0;
}
