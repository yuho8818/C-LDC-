//8.13 输入英语短语，标号化后转换成Pig Latin短语，巴拉巴拉......
//2020.10.28          20206696李正文

#include<stdio.h>
#include<string.h>

void printLatinWord(char*s);

int main()
{
	char sentence[101];
	char* zhizhen;

	printf("请输入一句英语短语：\n");
	gets_s(sentence);
	zhizhen = strtok(sentence, " ");
	printf("这句英语短语转换成Pig Latin短语是：\n");
	while (zhizhen)
	{
		printLatinWord(zhizhen);
		zhizhen = strtok(NULL, " ");
		if (zhizhen)
			printf(" ");
	}
	printf(".");
	return 0;
}

void printLatinWord(char*s)
{
	unsigned int i;
	for (i = 1; i < strlen(s); i++)
		printf("%c", s[i]);
	    printf("%c%s", s[0], "ay");
}