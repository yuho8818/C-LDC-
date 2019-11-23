#include<stdio.h>
int main()
{
    int count, num;
    scanf("%d", &count);
    scanf("%d", &num);
    for (int i = 1; i < count;i++)
    {
        int x;
        scanf("%d", &x);
        if(x<num)
            num = x;
    }
    printf("%d", num);
}
