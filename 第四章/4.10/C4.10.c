#include<stdio.h>
int main()
{
    int sum=0,num=0,x=0;
    while(num!=9999)
    {
        scanf("%d", &num);
        sum += num;
        x++;
        }
        printf("%.2f", (float)(sum-9999) / (x - 1));
}

