//8.16 ����һ���ı���Ҫ���ҵ��ַ�������ӡ��������
//2020.11.5          20206696������

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	char text[101], target[101];
	char* searchPtr;
	
	printf("������һ���ı���\n");
	gets(text);
	printf("���������������ַ�����\n");
	scanf("%s", target);

	searchPtr = strstr(text, target);
	if(searchPtr)
	{
		printf("��һ��%s�����ڣ�\n",target);
		printf("%s\n", searchPtr);
		searchPtr = strstr(searchPtr + 1, target);
		if (searchPtr)
		{
			printf("�ڶ���%s�����ڣ�\n", target);
			printf("%s\n", searchPtr);
		}
		else
		{
			printf("ֻ��һ��%s\n", target);
		}
	}
	else
	{
		printf("�ı���û�и��ַ���\n");
	}

	return 0;
}