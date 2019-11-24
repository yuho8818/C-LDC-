/*6.31
 This program was written by Zheming Bao
 produced date 11/23/2019,Northeastern University,China
 题目：请编写一个能够测试会问的递归函数testRalindrome。若存储在数组中的字符串是一个回文
 则该函数返回1，否则返回0.这个函数将忽略掉字符串中的空格和标点符号。
*/
#include <windows.h>
#include <stdio.h>
#include <string.h>
int test(char b[99], int size);//define a function
int main()
{
    char a[99];
    scanf("%[^,]c",a);//forbid read punctuation
    int i, j;
    j = strlen(a);//read length
    i = test(a, j);
    if (i == 1)
        printf("1");
    else
        printf("0");
    system("pause");
}
int test(char *b, int size)//define function
{
    if (size <= 1)
        return 1;
    if (b[0]!=b[size-1])
        return 0;
    return test(++b, size - 2);//call the recursive
}