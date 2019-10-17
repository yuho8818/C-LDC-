/* 2.24
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 * 题目:请编写一个程序：读入一个整数，然后判断其是偶数还是奇数并打印结果
 * （提示：使用求余运算符。偶数是2的倍数，任何2的倍数除以2后得到的余数是0）
 */
#include <stdio.h>

int main()
{
    int a,b=1;
    printf("请输入一个整数\n");
    scanf("%d",&a);
    if( a % 2 == 0)
        b = 0;
    printf("%d是一个",a);
    if (b)
        printf("奇数");
    else
        printf("偶数");
return 0;
}
