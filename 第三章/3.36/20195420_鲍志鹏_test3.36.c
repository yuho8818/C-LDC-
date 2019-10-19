#include<stdio.h>

int main(void){
  for ( int i = 1; i <= 1000000000; i++ ){
    if ( i % 100000000 == 0 )
      printf("%d\n", i);
  }
}
