#include<stdio.h> 
int main()
{
    int num = 1;
    for (int i = 3; i <= 15;i+=2)
        num *= i;
    printf("%d", num);

} 
