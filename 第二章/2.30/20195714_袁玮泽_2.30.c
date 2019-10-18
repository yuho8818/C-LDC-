/* 2.30
 * This program was written by Weize Yuan
 * Produced date 10/17/2019, Northeastern University,China
 * 题目:（分割一个整数的各个数字）请编写一个这样的程序：读入一个5位数，分割该数各个
 * 数位上的数字并将分割的数字以间隔3个空格的形式依次打印输出（提示：组合使用整数除法和求余运算符）
 */
#include <stdio.h>

int main()
{
    int number,a,b,c,d,e,temp;
    printf("请输入一个五位整数\n");
    scanf("%d",&number);
    a = number / 10000;
    temp = number - a * 10000;
    b = temp / 1000;
    temp -= b * 1000;
    c = temp / 100;
    temp -= c * 100;
    d = temp / 10;
    temp -= d * 10;
    e = temp;
    printf("%d   %d   %d   %d   %d",a,b,c,d,e);
return 0;
}
