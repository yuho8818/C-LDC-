#include<stdio.h>

int main(void){
  unsigned int counterX = 1;
  unsigned int counterY = 1;
  for ( counterY; counterY <= 8; counterY++ ){
    do {
      while ( counterX % 2 == 1 ){
	printf("*");
	counterX++;
      }
      while ( counterX % 2 == 0 ){
	printf(" ");
	counterX++;
      }
    }
    while ( counterX <= 16 );
    printf("\n");
    if ( counterY % 2 == 1 ){
      counterX = 0;
    } else {
      counterX = 1;
    }
  }
  return 0;
}
