#include<stdio.h>

int main(void){
  unsigned int counter = 0;
  for ( unsigned int a = 1; a <= 500; a++ ){
    for ( unsigned int b = 1; b <= 500; b++ ){
      for ( unsigned int c = 1; c <= b; c++ ){
	if ( a * a == b * b + c * c ){
	  printf("%d %d %d\n", b, c, a);
	  counter++;
	}
      }
    }
  }
  printf("%d", counter);

  return 0;
}
