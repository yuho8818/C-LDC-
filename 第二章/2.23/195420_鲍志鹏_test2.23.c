#include<stdio.h>

int main(void){
  int i, j, k, l, m, max, min;
  printf("Please enter five integers:\n");
  fflush(stdout);
  scanf("%d%d%d%d%d", &i, &j, &k, &l, &m);
  max = i;
  if ( max < j ){
    max = j;
  }
  if ( max < k ){
    max = k;
  }
  if ( max < l ){
    max = l;
  }
  if ( max < m ){
    max = m;
  }
  min = i;
  if ( min > j ){
    min = j;
  }
  if ( min > k ){
    min = k;
  }
  if ( min > l ){
    min = l;
  }
  if ( min > m ){
    min = m;
  }
  printf("The maximum one is %d\nThe minimum one is %d", max, min);
}
