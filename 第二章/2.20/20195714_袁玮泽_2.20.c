/*
  2.20

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  题目:请编写一个程序：读入一个圆的半径，然后打印其直径、周长和面积。π取常数3.14159。
  每个运算都在printf语句内完成，并使用转换说明符%f
 */
#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    float radius;
    printf("please input the radius\n");
    scanf("%f",&radius);
    printf("the length of the circle is %f\n",radius*2);
    printf("the perimeter of the circle is %f\n",radius*PI*2);
    printf("the area of the circle is %f\n",radius*radius*PI);
    return 0;
}
