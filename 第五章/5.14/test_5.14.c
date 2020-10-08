/* test 5.14
 * This program was written by Fawei Liang.
 * Produced date 4/10/2020 , Northeastern University,China
 * 题目：对于如下每一个整数集合，分别写出
 * 一个能够随机打印出计划中某个数据的语句： （a）2  , 4  , 6  , 8  , 10
 *                                           (b) 3  , 5  , 7  , 9  , 11
 *                                           (c) 6  , 10 ，14 , 18  , 22
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function main begins program execution
int main(void)
{
    int n;  // declare variable
    int counter = 1;  // set counter
    srand(time( NULL ));  // use the clock value to seed the random generator


  //  (a)

    while ( counter <= 1 ){  // loop while counter less than or equal 1
       n = rand() % 11;  // get n value at random
       if ( n % 2 == 0 && n != 0 ) {  // output n when it in the collection
          printf( "%d\n", n );
          counter++;  // increment counter
       }  // end if
    }  // end while





  /* (b)

    while ( counter <= 1 ) {  // loop while counter less than or equal 1
       n = rand() % 11;  // get n value at random
       if ( n % 2 == 0 && n != 0 ) {  // output n when it in the collection
          printf( "%d\n", n + 1 );
          counter++;  // increment counter
       }  // end if
    }  // end while

   */



  /* (c)

    while( counter <= 1 ){  // loop while counter less than or equal 1
       n = rand() % 23;  // get n value at random
       if ( n % 4 == 0 && n != 0 ) {  // output n when it in the collection
          printf( "%d\n", n + 2 );
          counter++;  // increment counter
       }  // end if
    }  // end while

  */

}  // end function main
