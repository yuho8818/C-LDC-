//8.16 输入一段文本和要查找的字符串，打印其后的内容
//2020.11.5          20206696李正文

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char text[101], target[101];
	char* searchPtr;
	
	printf("请输入一段文本：\n");
	gets(text);
	printf("请输入想搜索的字符串：\n");
	scanf("%s", target);

	searchPtr = strstr(text, target);
	if(searchPtr)
	{
		printf("第一个%s出现于：\n",target);
		printf("%s\n", searchPtr);
		searchPtr = strstr(searchPtr + 1, target);
		if (searchPtr)
		{
			printf("第二个%s出现于：\n", target);
			printf("%s\n", searchPtr);
		}
		else
		{
			printf("只有一个%s\n", target);
		}
	}
	else
	{
		printf("文本中没有该字符串\n");
	}

	return 0;
}