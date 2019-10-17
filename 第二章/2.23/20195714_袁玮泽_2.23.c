/*2.23
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 *题目：请编写一个程序：读入5个整数，然后确定其中的最大值和最小值并打印结果
 *要求仅使用本章中学到的编程技术
 */


#include <stdio.h>

int main()
{
    int a,b,c,d,e,maximum,minimum;
    printf("请输入五个整数\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if ( a > b )
    {
        maximum = a;
        minimum = b;
    }
    else
    {
        maximum = b;
        minimum = a;
    }
    if ( c > maximum )
        maximum = c;
    if ( c < minimum )
        minimum = c;
    if ( d > maximum )
        maximum = d;
    if ( d < minimum )
        minimum = d;
    if ( e > maximum )
        maximum = e;
    if ( e < minimum )
        minimum = e;
    printf("最大数为%d\n最小数为%d\n",maximum,minimum);
    return 0;
}
