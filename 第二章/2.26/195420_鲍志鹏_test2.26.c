#include<stdio.h>

int main(void){
  printf("Please enter two integers:");
  fflush(stdout);
  int i, j;
  scanf("%d%d", &i, &j);
  if ( i > j ){
    if ( i % j == 0 ){
      printf("The former is times of the latter.");
    } else {
      printf("The former is not times of the latter.");
    }
  } else {
        printf("The former is smaller than the latter.");
  }
}
