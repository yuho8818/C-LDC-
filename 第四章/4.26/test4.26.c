#include<stdio.h>

int main(void){
  for ( int range = 1; range <= 1000000; range += 2 ){
    double pi = 0;
    for ( int i = 1; i <= range; i += 4){
      pi += 4.0 / i;
    }

    for ( int j = 3; j <= range; j += 4){
      pi -= 4.0 / j;
    }

    printf("%f\n", pi);
  }
}
