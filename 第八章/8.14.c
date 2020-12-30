//8.14 输入一串电话号码，用strtok分别抽取区号，号码前3位和后4位作为标号，以字符串输入，以长整形输出
//2020.11.5          20206696李正文

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char original_phonenumber[101];
	char phonenumber[101];
	char* temp;
	int area;
	long int phone;

	printf("请输入一串电话号码：\n");
	gets(original_phonenumber);

	area = atoi(strtok(original_phonenumber, "()"));

	temp = strtok(NULL, "-");
	strcpy(phonenumber, temp);
	temp = strtok(NULL, "");
	strcat(phonenumber, temp);

	

	phone = atol(phonenumber);

	printf("该号码区域号码为：%d\n", area);
	printf("该号码长整型形式为：%ld\n", phone);

	return 0;
}