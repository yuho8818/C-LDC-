/*
  I - 1
  V - 5
  X - 10
  L - 50
  C - 100
*/
//output roman numbers from 1 to 100

#include<stdio.h>

int main(void){
  for ( int integer = 1; integer <= 100; integer++ ){
    int ten = integer / 10;
    int dig = integer % 10;

    if ( ten == 10 )
      printf("C\n");//100 as C
    
    else if ( ten == 9 ){
      printf("XC");

      if ( dig == 4 )
	printf("IV");
      else if ( dig == 9 )
	printf("IX");
      else if ( dig >= 5 ){
	printf("V");//puts V when digits number bigger than 5
	for ( int i = 1; i <= dig - 5; i++ )
	  printf("I");
      }
      else//dig is smaller than 5 and not equal to 4
	for ( int i = 1; i <= dig; i++ )
	  printf("I");
      puts("");
    }
    else if ( ten == 4 ){
      printf("XL");
      
      if ( dig == 4 )
	printf("IV");
      else if ( dig == 9 )
	printf("IX");
      else if ( dig >= 5 ){
	printf("V");
	for ( int i = 1; i <= dig - 5; i++ )
	  printf("I");
      }
      else
	for ( int i = 1; i <= dig; i++ )
	  printf("I");
      puts("");
    } else if ( ten >= 5 ){
      printf("L");
      for ( int i = 1; i <= ten - 5; i++ )
	printf("X");
      
      if ( dig == 4 )
	printf("IV");
      else if ( dig == 9 )
	printf("IX");
      else if ( dig >= 5 ){
	printf("V");
	for ( int i = 1; i <= dig - 5; i++ )
	  printf("I");
      }
      else
	for ( int i = 1; i <= dig; i++ )
	  printf("I");
      puts("");
    } else {
      for ( int i = 1; i <= ten; i++ )
	printf("X");
      if ( dig == 4 )
	printf("IV");
      else if ( dig == 9 )
	printf("IX");
      else if ( dig >= 5 ){
	printf("V");
	for ( int i = 1; i <= dig - 5; i++ )
	  printf("I");
      }
      else
	for ( int i = 1; i <= dig; i++ )
	  printf("I");
      puts("");
    }
  }

  return 0;
}
