#include<stdio.h>

int main(void){
  printf("Please enter an range:\n");
  fflush(stdout);
  int i = 1;
  int range;
  scanf("%d", &range);
  printf("N\t10*N\t100*N\t1000*N\t\n");
  while ( i <= range ){
    printf("%d\t%d\t%d\t%d\t\n", i, 10 * i, 100 * i, 1000 * i);
    i++;
  }
  return 0;
}
