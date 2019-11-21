#include<stdio.h>

int main(void){
  int i;
  int counter = 1;
  
  while ( counter <= 5 ){
    scanf("%d", &i);
    
    for ( int j = 1; j <= i; j++ )
      printf("%s", "*");
    
    puts("");
    fflush(stdout);

    counter++;
  }
    
  return 0;
}
