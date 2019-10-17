#include<stdio.h>

int main(void){
  printf("Please enter three different integers:\n");
  fflush(stdout);
  int i, j, k;
  scanf("%d%d%d", &i, &j, &k);
  printf("Sum is %d\n", i + j + k);
  int l = ( i + j + k )/ 3;
  printf("Averge is %d\n", l);
  printf("Product is %d\n", i * j * k);
  if ( i > j ){
    if ( i < k ){
      printf("The smallest one is %d\nThe biggest one is %d\n", j, k);
    }
    if ( i > k ){
      if ( j < k ){
	printf("The smallest one is %d\nThe biggest one is %d\n", j, i);
      }
      if ( j > k ){
	printf("The smallest one is %d\nThe biggest one is %d\n", k, i);
      }
    }
  }
  if ( i < j ){
    if ( j < k ){
      printf("The smallest one is %d\nThe biggest one is %d\n", i, k);
    }
    if ( j > k ){
      if ( i < k ){
       printf("The smallest one is %d\nThe biggest one is %d\n", i, j);
      }
      if ( i > k ){
	printf("The smallest one is %d\nThe biggest one is %d\n", k, j);
      }
    }
  }
  return 0;
}
