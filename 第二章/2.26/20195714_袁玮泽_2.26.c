/*
  2.26

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  题目:请编写一个这样的程序：读入两个整数，确认第一个数是否是第二个数的倍数并打印结果（提示：使用求余运算符）
 */

 #include <stdio.h>

int main()
{
    int a,b;
    printf("please input two integers\n");
    scanf("%d%d",&a,&b);
    if ( a % b == 0 )
        printf("the first integer is a multiple of the second");
    else
        printf("the first integer is not a multiple of the second");
    return 0;
}
