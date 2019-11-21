#include<stdio.h>
#include<math.h>

int main(void){
  int foo;
  
  printf("Enter a integer between 1 and 19.\n");
  fflush(stdout);
  scanf("%d", &foo);

  foo = ( foo + 1 ) / 2;
  
  for ( int y = foo; y >= -foo; y-- ){
    for ( int x = -foo; x <= foo; x++ ){//建立平面直角坐标系
      
      if ( abs(x) + abs(y) <= foo )
	printf("%s", "*");
      else printf("%s", " ");
      
    }
    puts("");
  }

  return 0;
}
