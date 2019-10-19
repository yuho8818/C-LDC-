#include<stdio.h>

int main(void){
  int counter = 1, passed = 0, failed = 0;
  int i;
  while ( counter <= 10){
    puts("Enter results:(1=passed, 2=failed)");
    fflush(stdout);
    scanf("%d", &i);
    while ( i != 1 && i != 2 ){
      printf("Enter 1 or 2.\n");
      fflush(stdout);
      scanf("%d", &i);
    }
    if ( i == 1 ){
      passed++;
    } else {
      failed++;
    }
      counter++;
  }
  printf("%d students have passed, %d students have failed.\n", passed, failed);
  if ( passed > 8 ){
    puts("Bonus to instructor!");
  }
  return 0;
}
