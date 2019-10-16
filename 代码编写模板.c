/* 2.18
 * This program was written by Hailing Su
 * Produced date 10/9/2019, Northeastern University,China
 * 题目：请编写一个程序：请用户输入两个整数，读取用户给出的两个整数后打印
 * 其中较大的那个，并紧跟着打印“is larger”。如果两个数相等，打印消息
 * “These numbers are equal”。只使用本章中学到的if语句的单分支选择形式。
 */

#include <stdio.h>

int main(void){
	int data1, data2; //Declare two integer variables
	printf ("Please input two integers:\n");    //Prompt user to enter data

	scanf("%d%d", &data1, &data2);  //Get input data from keyboard
    //Compare data1 and data2
	if(data1 > data2)
	    printf("%d is larger\n", data1);  //Output data1
	if(data1 < data2)
	    printf("%d is larger\n", data2);  //Output data2
	if(data1 == data2)
	    printf("These numbers are equal\n");
	return 0;
}
