/*2.32
 *This program was written by Yachen Chang
 *Produced date 10/16/2019, Northeastern University,China
 *题目：计算BMI的公式如下：BMI=weightInPounds*703/(heightInches*heightInInches)
 *                           =weightInKilograms/(heightInMeters*heightInMeters)
 *  请创立一个BMI计算器应用程序。该程序先读取以磅(pound)为单位的用户和以英寸(inch)为单位的身高
 *(或者，如果你习惯的话，也可以用千克作为用户体重的单位、米作为用户身高的单位）
 *然后计算并显示用户的身体质量指数。此外，此程序还应显示由健康与生活服务部/美国健康研究院提供的以下信息以便用户评估他/她的BMI：
 *BMI VALUES
 *Underweight： less than 18.5
 *Normal：      between 18.5 and 24.8
 *Overweight：  between 25 and 29.9
 *Obese：       30 or greater
 *（注意：在本章中，学会了使用int类型表示整数。当用int值来计算BMI时，将产生整数结果。
 在第四章，将学会使用double类型来表示带小数点的数字。当使用double数来进行BMI时，将产生带小数点的数字--它们被称为浮点数。
 */
 #include<stdio.h>
 int main(void)
   {
       int weight, height , BMI ;//Declare three integer variables
       printf ("Please enter your weight (pounds) and height (inch):");//Prompt user for data
       scanf("%d%d",&weight,&height);//Get input data from keyboard
       BMI = weight * 703 / (height * height);//Calculate and assign BMI
       printf ("\nYour BMI is %d \n",BMI);//Output user's BMI
       printf ("%-15s\t%-15s\n","Underweight","less than 18.5");
       printf ("%-15s\t%-15s\n","Normal：","between 18.5 and 24.8");
       printf ("%-15s\t%-15s\n","Overweight：","between 25 and 29.9");
       printf("%-15s\t%-15s\n","Obese：","30 or greater");
       return 0;


    }
