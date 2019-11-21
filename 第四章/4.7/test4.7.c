#include<stdio.h>

int main(void){
  for ( int i = 1; i <= 7; i++ ){
    printf("%d\n", i);
  }
  for ( int i = 3; i <= 23; i += 5 ){
    printf("%d\n", i);
  }
  for ( int i = 20; i >= -10; i -= 6 ){
    printf("%d\n", i);
  }
  for ( int i = 19; i <= 51; i += 8 ){
    printf("%d\n", i);
  }

}
