#include<stdio.h>
int main()
{
    int sum = 0;
    for (int x = 2; x <= 30;x+=2)
    {
        sum += x;
    }
    printf("%d", sum);
}
