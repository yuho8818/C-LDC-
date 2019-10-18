/*
  2.29

  This program was written by Weize Yuan
  Produced date 10/17/2019, Northeastern University,China
  题目:请编写一个打印某些大写字母、小写字母、数字和特殊符号所对应整数的C语言程序
  至少，确定如下符号的整数表示：A，B，C，a，b，c，0，1，2，$，*，+，/，空格
 */
#include <stdio.h>

int main()
{
    int i;
    int a[14] = {'A','B','C','a','b','c','0','1','2','$','*','+','/',' '};
    for (i=0;i<14;i++)
        printf("the ASCLL code of %c is %d\n",a[i],a[i]);
    return 0;
}
