#include <stdio.h>
#include <math.h>
#define X 5
#define Y 1

int main(void)
{
    double num = 0;
    double m[X + 1] = {0};
    int i = 1;

    while(i <= X)
    {
        scanf("%lf", &num);
        m[i] = num;
        i += 1;
    }

    printf("oringal_data     round-off_result\n");

    for(i = 1; i < X + 1; i++)
    {
        int integer;
        num = m[i];
        integer = floor(num + .5);
        printf("%lf%24d\n", num, integer);
    }

    return 0;
}
//Powered by Deng_Yimo.
