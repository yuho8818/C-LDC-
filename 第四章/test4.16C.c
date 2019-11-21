#include<stdio.h>

int main(void){
  int range = 1;
  
  for ( int y = 1; y <= 10; y++ ){
    
    for ( int z = 10; z > 10 - range; z-- )
      printf("%s", " ");
    for ( int x = 10; x >= range; x-- )
      printf("%s", "*");
      
    puts("");
    range++;
  }
  
  return 0;
}
