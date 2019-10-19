#include<stdio.h>

int main(void){
  printf("Please enter an range:\n");
  fflush(stdout);
  int i = 3;
  int range;
  scanf("%d", &range);
  printf("A\tA+2\tA+4\tA+6\t\n");
  while ( i <= range ){
    printf("%d\t%d\t%d\t%d\t\n", i, i + 2, i + 4, i + 6);
    i += 3;
  }
  return 0;
}
