#include<stdio.h>

int main(void){
  int i = 9999;
  int sum = 0;
  int counter = 0;

  scanf("%d", &i);
  while ( i != 9999 ){
    sum += i;
    counter++;
    scanf("%d", &i);
  }
  
  if ( i == 9999 )
    printf("%d", sum / counter);
  
  return 0;
}
