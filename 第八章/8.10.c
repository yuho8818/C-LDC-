//8.10 用strcmp函数来比较输入的两个字符串的前n个字符，输出第一个字符串和第二个字符串的关系
//2020.10.27          20206696李正文

#include<stdio.h>
#include<string.h>
int main()
{
	char a1[101];
	char a2[101];
	int n;

	printf("请输入第一个字符串：");
	scanf("%s", a1);
	printf("请输入第二个字符串：");
	scanf("%s", a2);
	printf("请输入比较的字符个数：");
	scanf("%d", &n);

	if (strncmp(a1, a2, n) > 0)
		printf("%s大于%s", a1, a2);
	else if (strncmp(a1, a2, n) == 0)
		printf("%s等于%s", a1, a2);
	else
		printf("%s小于%s", a1, a2);

	return 0;


	
}