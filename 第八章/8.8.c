//8.8 键入四个表示浮点数的字符串，将它们转化成双精度浮点数并输出它们的和
//2020.10.27          20206696李正文

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[100];
	double sum = 0.0;
	int i;
	
	for (i = 1; i <= 4; i++)
	{
		printf("请输入一个代表浮点数的字符串：");
		scanf("%s", s);
		sum += atof(s);
	}

	printf("它们的和为：%f", sum);

	return 0;
	
}