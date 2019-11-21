#include<stdio.h>

int main(void){
  int range;
  int min;

  scanf("%d", &range);
  for ( int counter = 1; counter <= range; counter++ ){
    int i;
    
    puts("Please enter an integer:");
    fflush(stdout);
    scanf("%d", &i);
    
    if ( counter == 1 )
      min = i;
    else if ( min > i )
      min = i;
    
  }
  
  printf("The minimum number is %d", min);

  return 0;
}
