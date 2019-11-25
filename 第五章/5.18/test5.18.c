#include <stdio.h>

void isEven(int number[][2], int arrayLength);

int main(void){
  int arrayLength;

  puts("1 stands for Odd and 0 stands for Even.");
  printf("%s", "How many number will you enter?");
  fflush(stdout);
  scanf("%d", &arrayLength);
  
  int number[arrayLength][2];

  for (int i = 0;i < arrayLength; ++i){
    scanf("%d", &number[i][0]);
  }
  
  isEven(number, arrayLength);

  for (int i = 0;i < arrayLength; ++i){
    printf("%d  ", number[i][1]);
    if ((i + 1) % 10 == 0)
      puts("");
  }
  return 0;
}

void isEven(int number[][2], int arrayLength){
  for (int i = 0;i < arrayLength; ++i){
    if (number[i][0] % 2 == 0)
      number[i][1] = 1;
    else
      number[i][1] = 0;
  }
  
  return;
}
