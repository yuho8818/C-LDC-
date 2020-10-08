/* test 5.22
 * This program was written by Fawei Liang.
 * Produced date 4/10/2020 , Northeastern University,China
 * 题目：（分离数字）请分别编写一些程序段来实现下列功能：
 * （a）计算整数a被整数b除所得商的整数部分。
 * （b）计算整数a被整数b除所得余数的整数部分。
 * （c）采用（a）和（b）中开发出来的程序段来编写一个函数，它的功能是：
 * 输入一个大小在1～32767之间的整数，然后逐位打印它的数字，每两个数字
 * 之间空两格。例如，整数4562将被打印成： 4  5  6  2
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void separation(int x);  // function prototype

// function main begins program execution
int main(void)
{
    int integer;  // declare variable

    printf( "Please enter an integer which between 1 and 32767: " );  // prompt for input
    scanf( "%d", &integer );  // read integer from user
    puts( "" );  // line feed
    separation(integer);


    /* (a)

          scanf( "%d %d", &a, &b);  // read a , b
          printf( "%.0f", floor( a / b ) );  // calculate a / b

    */


    /* (b)

         scanf( "%d %d", &a, &b );  // read a ,b
         printf( "%d", a % b );

    */
}  // end function main


void separation(int x)
{
    int firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;  // declare variables

    // when x is single digit
    if ( x >= 1 && x <= 9 ) {
       firstDigit = x;
       printf( "%d\n", firstDigit );
    }

    // when x is double-digit
    if ( x >= 10 && x <= 99 ) {
       firstDigit = x % 10;
       secondDigit = floor( x / 10 );
       printf( "%d  %d\n", secondDigit, firstDigit );
    }

    // when x is three-digit number
    if ( x >= 100 && x <= 999 ) {
       firstDigit = x % 10;
       secondDigit = floor( x % 100 / 10 );
       thirdDigit = floor( x / 100 );
       printf( "%d  %d  %d\n", thirdDigit, secondDigit, firstDigit );
    }

    // when x is four-digit number
    if ( x >= 1000 && x <= 9999 ) {
       firstDigit = x % 10;
       secondDigit = floor( x % 100 / 10 );
       thirdDigit = floor( x %1000 / 100 );
       fourthDigit = floor( x / 1000 );
       printf( "%d  %d  %d  %d\n", fourthDigit, thirdDigit, secondDigit, firstDigit );
    }

    // when x is five-digit number
    if ( x >= 10000 && x <= 32767 ) {
       firstDigit = x % 10;
       secondDigit = floor( x % 100 / 10 );
       thirdDigit = floor( x % 1000 / 100 );
       fourthDigit = floor( x % 10000 / 1000 );
       fifthDigit = floor( x / 10000 );
       printf( "%d  %d  %d  %d  %d\n", fifthDigit, fourthDigit, thirdDigit, secondDigit, firstDigit );
    }
    // when wrong data was entered
    if ( x > 32767 || x <= 0 ) {
        system( "cls" );
        puts( "Error!" );
    }
}
