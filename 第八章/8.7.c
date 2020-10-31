//8.7 键入四个表示整数的字符串，将它们转化成整数并输出它们的和
//2020.10.27          20206696李正文

#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int sum = 0;
	int i;
	
	for (i = 1; i <= 4; i++)
	{
		printf("请输入一个代表整数的字符串：");
		scanf("%s", s);
		sum += atoi(s);
	}

	printf("它们的和为：%d", sum);

	return 0;
	
}