#include <stdio.h>

void print(int sideLength, char element);

int main(void){
  int sideLength;
  char element;

  puts("Enter the element and side length of the square:");
  fflush(stdout);
  scanf("%c%d", &element, &sideLength);

  print(sideLength, element);

  return 0;
}

void print(int sideLength, char element){
  for (int y = 1;y <= sideLength; ++y){
    for (int x = 1;x <= sideLength; ++x){
      printf("%c", element);
    }
    puts("");
  }

  return;
}
