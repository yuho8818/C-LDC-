/* test 5.29
 * This program was written by Fawei Liang .
 * Produced date 7/10/2020 , Northeastern University,China
 * 题目：(最大公约数)两个整数的最大公约数(Greatest Common Divisor , GCD)是能够
 * 整除这两个数的最大整数。请编写一个能够返回两个整数的最大公约数的函数gcd。
 */

#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);  // function prototype

// function main begins program execution
int main(void)
{
    int integer1, integer2;  // declare variables
    printf( "%s", "Please enter two integer: " );  // prompt for input
    scanf("%d%d", &integer1, &integer2);  // read two integers from user
    printf( "Their greatest common divisor is: %d\n", gcd(integer1, integer2) );  // display result
}


int gcd(int x, int y)
{
    // declare variables
    int counter;
    int minimum , greatest;

    // compare x with y
    if ( x > y ) {
        minimum = y;
    }
    else {
        minimum = x;
    }

    // find the gcd
    for (counter = 1;counter <= minimum;counter++) {  // loop until counter greater than minimum
        if ( x % counter == 0 && y % counter == 0){
            greatest = counter;
        }
    }
    return greatest;  // return the gcd
}
