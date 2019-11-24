#include <windows.h>
#include <stdio.h>
#include <string.h>
int main()
{
    void stringReverse(char *a);
    char string[99];
    gets(string);
    stringReverse(string);
    system("pause");
}
void stringReverse(char *a)
{
    if(*a!='\0')
    stringReverse(a+1);
    if(*a!='\0');
    printf("%c",*(a-1));
}