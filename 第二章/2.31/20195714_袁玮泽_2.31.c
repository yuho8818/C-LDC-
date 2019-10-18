/* 2.31
  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  题目:仅使用本章所学习的技术，请编写一个计算从0~10各个数的平方和立方的程序，并使用
  水平制表符（tab）打印如下数值表：（略）
 */
#include <stdio.h>

int main()
{
    int i,j,k;//数字，平方，立方
    printf("number  square  cube  \n");
    for( i = 0 ; i <= 10 ; i++ )//由于使用10个printf太愚蠢，我决定使用for循环来实现
        {
        j = i * i;//计算平方
        k = j * i;//计算立方
        printf("%d\t%d\t%d\n",i,j,k);//左对齐八位输出
        }
    return 0;
}
