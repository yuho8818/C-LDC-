#include<stdio.h>

int main(void){
  for ( int i = 2;; i *= 2 ){
    printf("%d\n", i);
  }
}
//output:2 4 8 until INT_MAX, then 0.
