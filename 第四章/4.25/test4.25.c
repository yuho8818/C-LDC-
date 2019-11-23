#include<stdio.h>


void bin(void);

int main(void){
  int dec = 0;
  
  puts("DEC");
  for ( ; dec <= 255; dec++ ){
    printf("%3d\t", dec);
    if (( dec + 1 ) % 8 == 0 )
      puts("");
  }//return

  puts("BIN");
  bin();

  puts("OCT");
  dec = 0;
  for ( ; dec <= 255; dec++ ){
    printf("%3o\t", dec);
    if (( dec + 1 ) % 8 == 0 )
      puts("");
  }//return

  puts("HEX");
  dec = 0;
  for ( ; dec <= 255; dec++ ){
    printf("%3X\t", dec);
    if (( dec + 1 ) % 8 == 0 )
      puts("");
  }//return
}

void bin(void){
  int bin[8] = {0};
  
  for ( int dec = 0; dec <= 255; dec++ ){
    int i = 7;
    int DEC = dec;
    
    while ( DEC != 0 ){
      bin[i] = DEC % 2;
      DEC /= 2;
      i--;
    }//divide method

    for ( unsigned int counter = 0; counter <= 7; counter++ ){
      printf("%d", bin[counter]);
    }//output

    printf("\t");
    
    if (( dec + 1 ) % 8 == 0 )
      puts("");//return
  }
}

