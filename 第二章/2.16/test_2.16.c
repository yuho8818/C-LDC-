/* test 2.16
 * This program was written by Fawei Liang .
 * Produced date 1/10/2020 , Northeastern University,China
 * 题目：（算术运算）请编写一个程序：请用户输入两个数，读取用户给出的两个数
 * 后打印它们的和、乘积、差、商及余数。
 */
#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    int number1, number2; // declare variables

    printf( "Please enter first number: " ); // prompt
    scanf( "%d", &number1 ); // read first number

    printf( "Please enter second number: " ); // prompt
    scanf( "%d", &number2 ); // read second number

    printf( "\nTheir sum is: %d \n", number1 + number2 ); // print their sum
    printf( "Their product is: %d \n", number1 * number2 ); // print their product
    printf( "Their difference value is: %d \n",number1 - number2 ); // print their difference value
    printf( "Their quotient is: %.2f \n", (float)number1 / number2 ); // print their quotient
    printf( "Their remainder is:%d \n", number1 % number2 ); // print their remainder
}//end function main
