#include <stdio.h>

double calculateCharges(double h);

int main(void)
{
    double c = 0, h = 0, k = 0, cs = 0, hs = 0, m[4] = {0};
    int n = 1;

    for(n; n < 4; n++)
    {
        scanf("%lf", &k);
        m[n] = k;
    }

    printf("%s", "Car     Hours     Charge\n");

    for(n = 1; n<4; n++)
    {
        h = m[n];
        hs += m[n];
        c = calculateCharges(h);
        cs += c;
        printf("%.d%12.1f%11.2f\n", n, h, c);
    }

    printf ("TOTAL%8.1f%11.2f\n", hs, cs);

    return 0;
}

double calculateCharges(double h)
{
    double c = 0;

    if(h <= 3)
    {
        c = 2;
    }
    else
    {
        c = 2 + (ceil(h - 3)) * 0.5;
    }
    if(c > 10)
    {
        c = 10;
    }
    return c;
}

//Powered by Deng_Yimo.
