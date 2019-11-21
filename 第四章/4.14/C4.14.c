#include<stdio.h>
int main() 
{
    int sum = 1;
    unsigned long long int a = 1;
    for (int i = 1; i <= 5;i++)
    {
        sum *= i;
        printf("%d!%20d\n",i, sum);
    }
    printf("If the type is \" int \"\n");
    for (int i = 1; i <= 20;i++)
    {
        sum *= i;
        printf("%d!%20d\n",i, sum);
    }
    printf("If the type is\"unsigned long long int\"\n ");
    for (int i = 1; i <= 20; i++)
    {
        a *= i;
        printf("%d!%20llu\n",i, a);
    }
    

}
