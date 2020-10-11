/* test 3.31
 * This program was written by Fawei Liang.
 * Produced date 2/10/2020 , Northeastern University,China
 * 题目：（另外一个悬挂else问题）请修改下面的代码以产生所展示的输出。
 * 请使用适当的缩进技术。除了插入花括号外，不能进行其他更改。编译器会
 * 忽略程序中的缩进。在下面的代码中，为了使问题更具挑战性，在此剔除缩
 * 进（注意：可能不用更改）：
 *   if ( y == 8 )
 *   if ( x == 5 )
 *   puts( "@@@@@" );
 *   else
 *   puts( "#####" );
 *   puts( "$$$$$" );
 *   puts( "&&&&&" );
 *
 *   (a)假设x = 5、y = 8,请产生如下输出:    (b)假设x = 5、y = 8,请产生如下输出:
 *           @@@@@                                     @@@@@
 *           $$$$$
 *           &&&&&
 *
 *
 *   (c)假设x = 5、y = 8,请产生如下输出:    (c)假设x = 5、y = 7,请产生如下输出:
 *           @@@@@                                     #####
 *           &&&&&                                     $$$$$
 *                                                     &&&&&
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
   // (a)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 )
      if ( x == 5 )
         puts( "@@@@@" );
      else
         puts( "#####" );
   puts( "$$$$$" );
   puts( "&&&&&" );

//——————————————————————

  /* (b)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }  // end if
   else {
      puts( "#####" );
      puts( "$$$$$" );
      puts( "&&&&&" );
   }  // end else

   */

//——————————————————————

   /* (c)

   int x = 5, y = 8;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }  // end if
      else{
         puts( "#####" );
         puts( "$$$$$" );
      }  // end else
   puts( "&&&&&" );

   */

//——————————————————————

   /* (d)

   int x = 5, y = 7;  // set x , y

   if ( y == 8 ) {
      if ( x == 5 )
         puts( "@@@@@" );
   }
      else
         puts( "#####" );
   puts( "$$$$$" );
   puts( "&&&&&" );

   */
}  // end function main

