#include<stdio.h>

int main(void){
  unsigned int row = 10;
  while ( row >= 1 ){
    unsigned int column = 1;
    while ( column <= 10 ){
      printf( "%s", row % 2 ? "<" : ">" );
      ++column;
    }
    --row;
    puts("");
  }
}
