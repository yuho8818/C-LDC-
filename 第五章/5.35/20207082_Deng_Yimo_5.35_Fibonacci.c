#include<stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
    unsigned int num = 0;
    unsigned long long int res = 0;
    printf("Please enter the Serial number in the sequence:");
    scanf("%u", &num);
    res = fibonacci(num);
    printf("\nThe element corresponding to the serial number is:%lu", res);

    return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int sum1 = 1, sum2 = 1, sum = 0, i;
    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 1;
    }
    for(i = 3 ;i <= n; i++)
    {
        sum = sum1 + sum2;
        sum1 = sum2;
        sum2 = sum;
    }

    return sum;

}
