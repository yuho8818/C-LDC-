#include<stdio.h>
#include<math.h>

int main(void){
  for ( int y = 4; y >= -4; y-- ){
    for ( int x = -4; x <= 4; x++ ){//建立平面直角坐标系
      
      if ( abs(x) + abs(y) <= 4 )
	printf("%s", "*");
      else printf("%s", " ");
      
    }
    puts("");
  }

  return 0;
}
