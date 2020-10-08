/* test 3.30
 * This program was written by Fawei Liang.
 * Produced date 2/10/2020 , Northeastern University,China
 * 题目：（悬挂else问题）请分别确认x=9、y=1和x=11、y=9时，下列程序的输出。
 * 注意，编译器会忽略掉C程序中的缩进。编译器通常将else与上一个if关联，除
 * 非通过花括号{}来指定关联关系。由于一眼很难确定哪个if与哪个else匹配，所
 * 以称为称之为“悬挂else”问题。在下面的代码中，为使问题更具挑战性，在此
 * 剔除缩进（提示：使用学习过的缩进惯例）：
 *
 * (a)  if ( x < 10 )          (b) if ( x < 10 ) {
 *      if ( y < 10 )              if ( y < 10 )
 *      puts( "*****" );           puts( "*****" );
 *      else                       }
 *      puts( "#####" );           else {
 *      puts( "$$$$$" );           puts( "#####" );
 *                                 puts( "$$$$$" );
 *                                 }
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
   int x = 9, y = 1;
// int x =11, y = 9;

   // (a) when x = 9, y = 1 output "*****\n$$$$$\n"
   //     when x = 11, y =9 output "$$$$$\n"
   if ( x < 10 )
      if ( y < 10 )
         puts( "*****" );
      else
         puts( "#####" );
   puts( "$$$$$" );

//-------------------------------------------------

   /* (b) when x = 9, y = 1 output "*****\n"
          when x = 11, y =9 output "#####\n$$$$$\n"
   if ( x < 10 ) {
      if ( y < 10 )
         puts( "*****" );
   }
   else {
      puts( "#####" );
      puts( "$$$$$" );
   }
   */
}  // end function main
