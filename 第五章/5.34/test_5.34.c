/* test 5.34
 * This program was written by Fawei Liang.
 * Produced date 7/10/2020 , Northeastern University,China
 * 题目:(递归求幂)请编写一个递归函数power(base, exponent)来返回如下表达式的值:
 * base^exponent
 * 例如，power(3, 4)=3*3*3*3。假设exponent是一个大于或者等于1的整数，base也是
 * 整数。提示:递归步可利用关系
 * base^exponent = base * base^(exponent - 1)
 * 同时终止条件为“exponent等于1”，因为
 * base^1 = base。
 */

#include <stdio.h>
#include <stdlib.h>

// function prototype
long int power(int base , int exponent);

// function main begins program execution
int main(void)
{
    printf( "%ld\n", power(3,4) );  // display result
}

long int power(int base , int exponent)
{
    //  base case
    if ( 1 == exponent ) {
        return base;
    }
    else {  // recursive step
        return base * power(base, exponent - 1);
    }
}
