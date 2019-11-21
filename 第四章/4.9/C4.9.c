#include<stdio.h>
int main()
{
    int i,j=0,sum=0;
    scanf("%d", &i);
    while (j<i)
    {
        int num;
        scanf("%d", &num);
        sum += num;
        j++;
    }
    printf("\n%d", sum);
}
