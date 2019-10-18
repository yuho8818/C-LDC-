/*3.16
 *This program was written by Yachen Chang
 *Produced date 10/17/2019, Northeastern University,China
 *题目：驾驶员都关心自己车辆行驶的里程数。一位驾驶员通过记录每次加油后行驶的公里数
 *和使用的燃料数来了解每次加油的总体情况。请编写一个这样的程序：读入行驶的英里数和每次加油后使用的燃料数（单位：加仑）
 *计算并显示每次加油后的每加仑平均行驶的里程数。
 */
#include<stdio.h>
int main(void)
{
    float gallons, miles,totlemiles=0,totlegallons=0;//Declare four floating point variable
    printf("Enter the gallons used(-1 to end):");//Prompt the user to enter or terminate the program
    scanf("%f",&gallons);
    while (gallons!=-1)//Determine whether to terminate the procedure
     {
         printf("Enter the miles driven:");
         scanf("%f",&miles);
         printf("\nThis miles/gallon for this tank was %f",miles/gallons);
         totlemiles+=miles;//Calculate the total distance
         totlegallons+=gallons;
         printf("\n\nEnter the gallons used(-1 to end):");
         scanf("%f",&gallons);


     }
     if(totlemiles||totlegallons)//Check whether the user has entered data
        printf("\n\nThe overall average miles/gallon was %f",totlemiles/totlegallons);
     else printf("\nPlease enter again");
}

