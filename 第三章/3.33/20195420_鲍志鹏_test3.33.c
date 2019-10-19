#include<stdio.h>

int main(void){
  printf("Enter the side length of the square. \n");
  fflush(stdout);
  
  int x = 1;
  int y = 1;
  int a;

  scanf("%d", &a);

  for ( y; y <= a; y++ ){
    for ( x; x <= a; x++ ){
      if (( x == 1 || x == a ) || ( y == 1 || y == a ))
	printf("*");
      else
	printf(" ");
    }
    x = 1;
    puts("");
  }
  return 0;
}
