/* test 5.30
 * This program was written by Fawei Liang .
 * Produced date 7/10/2020 , Northeastern University,China
 * 题目:(投掷硬币)请编写一个程序来模拟投掷硬币。对于每一次投掷，程序将打出“Heads”(正面)
 * 或“Tails”(反面)。让程序模拟投掷硬币100次，并统计硬币每一面出现的次数，并打印出结果。
 * 该程序将调用一个独立的函数flip，这个函数不需要输入实参，返回0表示反面，1表示正面（注：
 * 如果程序能够真实模拟硬币投掷，那么每一面出现的次数都近似等于投掷总数的一半，对于本例
 * 而言，大概是50次正面，50次反面）。
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int flip();  // function prototype

// function main begins program execution
int main(void)
{
   int counter = 1, heads = 0, tails = 0;

   // randomize random number generator using current time
   srand( time(NULL) );

   for (;counter <= 100;counter++ ) {
      if ( flip() == 1 ) {
         Sleep(20);  // wait for 0.02s
         puts( "Heads" );
         heads++;  // increment heads
      }  // end if
      else {
         Sleep(20);  // wait for 0.02s
         puts( "Tails" );
         tails++;  // increment tails
      }  // end else
   }  // end for

   // display result
   system( "cls" );  // clean up output window
   printf( "%4s%13s\n", "Face", "Frequency" );
   printf( "%5s%12d\n", "heads", heads );
   printf( "%5s%12d\n", "tails", tails );

}

int flip()
{
   int n;
   n = rand() % 2;
   return n;
}
