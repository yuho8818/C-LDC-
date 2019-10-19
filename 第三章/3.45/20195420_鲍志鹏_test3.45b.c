//calculate e
#include<stdio.h>

int main(void){
  float e = 1;
  int range;
  float product = 1;
  printf("Enter a range:");
  fflush(stdout);
  scanf("%d", &range);
  for ( int i = 1; i <= range; i++ ){
    for ( int j = 1; j <= i; j++ ){
      product *= j;
    }
    e += ( 1 / product );
    product = 1;
  }
  printf("e is %f under this range.", e);
}
