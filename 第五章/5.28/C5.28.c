/*5.28
*This program was written by Yachen Chang
 *Produced date 10/24/2019, Northeastern University,China
 *请编写一个函数，它的功能是：接受一个整数，返回这个整数各个数位被倒过来所对应的数
 *例如，输入整数7631，函数将返回1367
 */



#include <stdio.h>

 int reversion( int num);
int main()

{

	int num, sum;//Declare two integers

	printf("The number is:");
	scanf("%d", &num);
	sum = reversion(num);
	printf("%d\n", sum);
	getchar();
	getchar();
	}

    int  reversion( int  num)

	{

		int rev=0;//Define the variable for the return value. 

      while(num!=0)

		{

		 rev=(rev*10 + num%10);//The minimum number of digits will be added

		 num=num/10;

		}
		
		return rev;

	}

 

