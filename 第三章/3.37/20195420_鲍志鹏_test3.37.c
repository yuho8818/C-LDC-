#include<stdio.h>

int main(void){
  for ( int i = 1; i <= 100; i++ ){
    printf("*");
    if ( i % 10 == 0 )
      puts("");
  }
  return 0;
}
