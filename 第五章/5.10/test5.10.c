// y = floor(x + .5);
// 四舍五入
#include <stdio.h>
#include <math.h>

int main(void){
  float num;
  int integer;
  
  puts("四舍五入测试程序，按0退出");

  do {
    fflush(stdout);
    scanf("%f", &num);
    
    integer = floor(num + .5);
    if (integer != 0)
      printf("%d\n", integer);
    
  } while (num != 0);

  return 0;
}
