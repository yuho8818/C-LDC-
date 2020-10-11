/* test 3.47
 * This program was written by Fawei Liang.
 * produced data 3/10/2020 , Northeastern University,China
 * 题目：(期望心率计算器)在锻炼时，建议使用一个心率监视器来检查你的心率是否处于你的
 * 教练和医生建议的安全范围内。按照美国心脏联合会(American Heart Association,AHA),
 * 最高心率的计算公式是每分钟220次减去你的年龄，你的期望心率是在你最高心率的50%～85%
 * 之间(注意:这些估算公式是由AHA提供的。对于具体某个人的最高心率和期待心率，会根据其
 * 健康状况、体质和性别而有所变化。在开始或改变你的锻炼计划前，请务必咨询医生或者有资
 * 质的保健顾问)。请编写一个程序，读入用户的生日和当前日期(都详细到年、月、日)，然后
 * 计算和显示用户的年龄（单位：年）、最高心率和期望心率。
 */

#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    int day1, month1, year1;  // declare variables to read the date of user's birth
    int day2, month2, year2;  // declare variables to read the current date
    int age, maximumHeartRate;  // declare variables
    float expectedHeartRate1, expectedHeartRate2;  // declare variables

    printf( "%s", "Please enter the date of your birth( day month year ): " );  // prompt to input
    scanf( "%d %d %d", &day1, &month1, &year1 );  // read the date of user's birth from user

    printf( "%s", "Please enter the current date( day month year ): " );  // prompt to input
    scanf( "%d %d %d", &day2, &month2, &year2 );  // read the current date from user

    system( "cls" );  // clean up output window

    // calculate user's age
    if( month2 - month1 >= 0 && day2 - day1 >= 0 ){
       age = year2 - year1;
    }  // end if
    else{
       age = year2 - year1 - 1;
    }  // end else

    maximumHeartRate = 220 - ( year2 - year1 );  // calculate the maximum heart rate
    expectedHeartRate1 = maximumHeartRate * 0.5;  // calculate maximum expected heart rate
    expectedHeartRate2 = maximumHeartRate * 0.85;  // calculate minimum expected heart rate

    printf( "Your age is: %d\n", age );  // display user's age
    printf( "Your maximum heart rate is: %d\n", maximumHeartRate );  // display user's maximum heart rate
    printf( "Your expected heart rate is: %.0f～%.0f\n", expectedHeartRate1, expectedHeartRate2 );  // display user's expected heart rate
}  // end function main
