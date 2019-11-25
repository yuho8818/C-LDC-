#include <stdio.h>
#include <stdbool.h>

bool multiple(int bigger, int smaller);

int main(void){
  int bigger, smaller;
  
  printf("%s%s", 
       "Please enter two integer and the program will judge\n",
       "if the former is times of the later.\n");
  fflush(stdout);
  scanf("%d%d", &bigger, &smaller);

  if (multiple(bigger, smaller) == true){
    puts("Yes");
  } else {
    puts("No");
  }

  return 0;
}

bool multiple(int bigger, int smaller){
  if (bigger % smaller == 0){
    return true;
  } else {
    return false;
  }
}
