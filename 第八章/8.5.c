//8.5 键入一个字符，逐个用字符处理函数库函数测试该字符，并输出返回值
//2020.10.27          20206696李正文
#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("请输入一个字符：");
	c = getchar();
	printf("isdigit(%c) = %d\n", c, isdigit(c));
	printf("isalpha(%c) = %d\n", c, isalpha(c));
	printf("isalnum(%c) = %d\n", c, isalnum(c));
	printf("isxdigit(%c) = %d\n", c, isxdigit(c));
	printf("islower(%c) = %d\n", c, islower(c));
	printf("isupper(%c) = %d\n", c, isupper(c));
	printf("tolower(%c) = %d\n", c, tolower(c));
	printf("isspace(%c) = %d\n", c, isspace(c));
	printf("iscntrl(%c) = %d\n", c, iscntrl(c));
	printf("ispunct(%c) = %d\n", c, ispunct(c));
	printf("isprint(%c) = %d\n", c, isprint(c));
	printf("isgraph(%c) = %d\n", c, isgraph(c));
	return 0;
}