#include<stdio.h>

int main(void){
  int i, j, k;
  printf("Enter three integer:");
  fflush(stdout);
  scanf("%d%d%d", &i, &j, &k);
  if ( i > k ){
    i = i + k;
    k = i - k;
    i = i - k;
  }
  if ( j > k ){
    j = j + k;
    k = j - k;
    j = j - k;
  }
  if ( i > j ){
    i = i + j;
    j = i - j;
    i = i - j;
  }
  if ( i + j > k && i > k - j ){
    if ( i * i + j * j == k * k ){
      puts("Can.");
	} else {
      puts("Can't.");
    }
  } else {
      puts("NO TRIANGLE.");
  }
  return 0;
}
