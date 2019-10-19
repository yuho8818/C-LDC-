#include<stdio.h>

int main(void){
  printf("Enter the side length of the square:\n");
  fflush(stdout);
  int a;
  int counterA;
  int counterB;
  scanf("%d", &a);
  counterA = a;
  counterB = 0;
  while ( counterA == a ){
    puts("");
    counterA = 0;
    counterB++;
    while ( counterA < a ){
      printf("*");
      counterA++;
      if ( counterA == a ){
	break;
      }
    }
    if ( counterB == a ){
      break;
    }
  }
}
