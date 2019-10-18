/*
 2.18

 This program was written by Weize Yuan
 Produced date 10/17/2019, Northeastern University,China
 题目:请编写一个程序：请用户输出两个整数，读取用户给的两个整数后打印其中较大的那个，
 并紧跟着打印“is larger”。如果两个数相等，打印消息“These numbers are equal”。
 只使用本章中学到的if语句的单分支选择形式
 */
#include <stdio.h>

int main()
{
int a,b;
printf("please enter two integer\n");
scanf("%d%d",&a,&b);
if ( a == b )
    printf("these numbers are equal");
else if ( a > b )
    printf("%d is larger than %d",a,b);
else
    printf("%d is larger than %d",b,a);
return 0;
}
