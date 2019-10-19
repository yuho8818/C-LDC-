//calculate e^x
#include<stdio.h>

int main(void){
  double ex = 1;
  int range;
  double product = 1;
  double index = 1;
  printf("Enter a integer:");
  fflush(stdout);
  scanf("%d", &range);
  for ( int i = 1; i <= 100; i++ ){
    for ( int j = 1; j <= i; j++ ){
      product *= j;
    }
    for ( int k = 1; k <= i; k++ ){
      index *= range;
    }
    ex += ( index / product );
    product = 1;
    index = 1;
  }
  printf("e^x is %lf.", ex);
  return 0;
}
