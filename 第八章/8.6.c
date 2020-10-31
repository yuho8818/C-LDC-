//8.6 键入一行文本，分别用大小写输出
//2020.10.27          20206696李正文

#include<stdio.h>
#include<ctype.h>
int main()
{
	char s[100];
	int n;
	scanf("%s", s);

	printf("大写：\n");
	for (n = 0; s[n] != '\0'; n++)
		printf("%c", toupper(s[n]));

	printf("\n小写：\n");
	for (n = 0; s[n] != '\0'; n++)
		printf("%c", tolower(s[n]));

	return 0;

}