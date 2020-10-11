/* test 3.46
 * This program was written by Fawei Liang.
 * produced data 3/10/2020 , Northeastern University,China
 * 题目：从网络上查询当前的世界总人口数以及每年的世界总人口增长率。写一个
 * 程序，先输入这些数据然后显示估算出的1年、2年、3年、4年、5年后的世界人口。
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    int year;
    long long int worldPopulation;
    float rate;  // annual growth rate of world population

    // get current world population and annual growth rate from user
    printf( "%s", "Please enter the current world population: ");  // prompt for input
    scanf( "%lld", &worldPopulation );  // read world population from user

    printf( "%s", "Please enter annual growth rate of world population( example: 0.1 ): "  );  // prompt for input
    scanf( "%f", &rate );  // read rate from user

    system( "cls" );  // clean up output window

    // population prediction
    printf( "Current world population: %lld\t", worldPopulation );  // display world population
    printf( "Annual growth rate: %f\n\n", rate );  // display annual growth rate

    for ( year = 1;year <= 5;year++ ) {  // loop while year is less than or equal to 5
       worldPopulation = worldPopulation * ( 1.0 + rate );  // calculate the projected world population
       if ( year == 1 ) {
           printf( "The population %d year from now: %lld\n", year, worldPopulation );  // display projected world population
       }  // end if
       else {
           printf( "The population %d years from now: %lld\n", year, worldPopulation );  // display projected world population
       }  // end else
    }  // end for
}  // end function main
