#include<stdio.h>

int main(void){
  int range = 1;
  
  for ( int y = 1; y <= 10; y++ ){
    
    for ( int x = 10; x >= range; x-- ){
      printf("%s", "*");
    }
    
    puts("");
    range++;
  }
  
  return 0;
}
