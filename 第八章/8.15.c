//8.15 输入一段文本,用strtok标号化后倒序输出
//2020.11.5          20206696李正文

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char* text);
int main()
{
	char text[101];
	printf("请输入一段文本：\n");
	gets(text);

	reverse(text);

	return 0;
}
void reverse(char* text)
{
	char* temp;
	char* new_text[101];
	int i = 0, j;

	temp = strtok(text, " ");

	while (temp)
	{
		new_text[i++] = temp;
		temp = strtok(NULL, " ");
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%s ", new_text[j]);
	}
}