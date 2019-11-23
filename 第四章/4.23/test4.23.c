//calculate compound intrest

#include<stdio.h>
#include<math.h>

/*
int main(void){
  double principal = 1000.0;
  double rate = .05;
  
  for ( unsigned int year = 1; year <= 10; ++year ){
    double amount = principal * pow( 1.0 + rate, year );
    printf("%4u%21.2f\n", year, amount);
  }

  return 0;
}
*/


int main(void){
  int principal = 100000;
  double rate = .05;

  printf("%4s%21s\n", "YEAR", "PRINCIPAL");
  
  for ( unsigned int year = 1; year <= 10; ++year ){
    int amount = principal * pow( 1.0 + rate, year );
    int amountDollar = amount / 100;
    int amountCent = amount % 100;
    printf("%4u%19d.%d\n", year, amountDollar, amountCent);
  }

  return 0;
}
