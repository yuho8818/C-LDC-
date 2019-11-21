#include<stdio.h>

int main(void){
  int i;
  int range, sum = 0;
  scanf("%d", &range);
  
  for ( int counter = 1; counter <= range; counter++ ){
    scanf("%d", &i);
    sum += i;
  }
  printf("%d", sum);
  
  return 0;
}
