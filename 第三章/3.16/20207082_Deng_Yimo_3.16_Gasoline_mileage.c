#include<stdio.h>

int main(void)
{
    float g = 0, m = 0, n = 0, gs = 0, ms = 0;

    while(g != -1)
    {
        printf("Enter the gallons used(-1 to end):\n");
        scanf ("%f", &g);
        if(g == -1)
        {
            break;
        }
        printf("Enter the miles driven:\n");
        scanf ("%f", &m);
        n = m / g;
        printf("The miles/gallon for this tank was:%.1f\n\n", n);
        gs += g;
        ms += m;
    }
    n = ms / gs;
    printf("The overall average miles/gallon was :%.1f\n", n);

    return 0;
}
//Powered by Deng_Yimo.
