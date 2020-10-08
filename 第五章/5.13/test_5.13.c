/* test 5.13
 * This program was written by Fawei Liang.
 * Produced date 4/10/2020 , Northeastern University,China
 * 题目：写出能够将如下范围的随机整数赋值给变量n的语句。
 *      (a) 1 <= n <= 2
 *      (b) 1 <= n <= 100
 *      (c) 0 <= n <= 9
 *      (d) 1000 <= n <= 1112
 *      (e) -1 <= n <= 1
 *      (f) -3 <= n <= 11
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function main begins program execution
int main(void)
{
    int n;  // declare variable

    srand(time(NULL));  // use the clock value to seed the random number generator

    printf( "%d\n",  n = 1 + rand() % 2);  // (a)

    //  printf( "%d\n", n = 1 + rand() % 100 );  // (b)

    //  printf( "%d\n", n = rand() % 10 );  // (c)


    /* (d)

         while ( n  < 1000 ) {
         n = rand() % 1113;

         if ( n  >= 1000 ) {
            printf( "%d\n", n );
         }  // end if
    }  // end while

    */


    //  printf( "%d\n", n = -1 + rand() % 3 );  // (e)

    //  printf( "%d\n", n = -3 + rand() % 15 );  // (f)

}   // end function mian
