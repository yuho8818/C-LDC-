/* test 5.30
 * This program was written by Fawei Liang .
 * Produced date 7/10/2020 , Northeastern University,China
 * 题目:(学生成绩的级点)请编写toQualityPoints函数，它的功能是:输入学生的平均成绩。
 * 若成绩在90～100之间，返回4；若成绩在80～89之间，返回3；若成绩在70～79之间，
 * 则返回2；若成绩在60～69之间，返回1；若成绩低于60，返回0，
 */


#include <stdio.h>
#include <stdlib.h>

int toQualityPoints(int);  // function prototype

// function main begins program execution
int main(void)
{
    int averageGrade;
    printf( "%s", "Please enter student's average grade: " );
    scanf( "%d", &averageGrade );
    printf( "The student's quality point is: %d\n", toQualityPoints(averageGrade) );
}

int toQualityPoints(int a)
{
    int point;
    if ( a >= 90 && a <= 100 ) {
        point = 4;
    }
    if ( a >= 80 && a <= 89 ) {
        point = 3;
    }
    if ( a >= 70 && a <= 79 ) {
        point = 2;
    }
    if ( a >= 60 && a <= 69 ) {
        point = 1;
    }
    if ( a < 60 ) {
        point = 0;
    }
    return point;
}
