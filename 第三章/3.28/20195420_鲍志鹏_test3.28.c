#include<stdio.h>

int main(void){
  unsigned int count = 1;
  while ( count <= 10 ){
    puts( count % 2 ? "****" : "++++++++");
    ++count;
  }
}
