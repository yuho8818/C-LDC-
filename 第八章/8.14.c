//8.14 ����һ���绰���룬��strtok�ֱ��ȡ���ţ�����ǰ3λ�ͺ�4λ��Ϊ��ţ����ַ������룬�Գ��������
//2020.11.5          20206696������

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

	printf("������һ���绰���룺\n");
	gets(original_phonenumber);

	area = atoi(strtok(original_phonenumber, "()"));

	temp = strtok(NULL, "-");
	strcpy(phonenumber, temp);
	temp = strtok(NULL, "");
	strcat(phonenumber, temp);

	

	phone = atol(phonenumber);

	printf("�ú����������Ϊ��%d\n", area);
	printf("�ú��볤������ʽΪ��%ld\n", phone);

	return 0;
}