//TEST2.18
//Oct 13th, 2019 written by Zhipeng Bao of NEU
//last edited Oct 16th, 2019
//Compare two integers by if statement

#include<stdio.h>

int main(void){
  int i, j;

  puts("Please input two numbers:");
  fflush(stdout);
  scanf("%d%d", &i, &j);//Get input data

  //Compare
  if ( i > j )
    printf("The larger number is: %d", i);
  if ( i < j )
    printf("The larger number is: %d", j);
  if ( i == j )
    puts("The numbers are the same.");

  return 0;
}
