//8.15 ����һ���ı�,��strtok��Ż��������
//2020.11.5          20206696������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char* text);
int main()
{
	char text[101];
	printf("������һ���ı���\n");
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