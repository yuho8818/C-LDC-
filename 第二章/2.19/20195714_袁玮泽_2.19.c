/*
  2.19

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  题目:请编写一个程序：从键盘输入三个不同的整数，然后打印他们的和、平均值、乘积、
  最小数和最大数。只使用本章中学到的if语句的单分支选择形式。
 */
#include <stdio.h>

int main()
{
    int a,b,c,sum,product,minimum,maximum;
    float average;
    printf("enter 3 different integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    sum = a + b + c;
    product = a * b * c;
    average = sum / 3;
    if (a > b)
    {
        maximum = a;
        minimum = b;
    }
    else
    {
        maximum = b;
        minimum = a;
    }
    if (c > maximum)
        maximum = c;
    if (c < minimum)
        minimum = c;
    printf("sum is %d\n",sum);
    printf("product4 is %d\n",product);
    printf("minimum is %d\n",minimum);
    printf("maximum is %d\n",maximum);
    printf("average is %f\n",average);
    return 0;
}
