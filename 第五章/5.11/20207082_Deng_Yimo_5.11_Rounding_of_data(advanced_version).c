#include <stdio.h>
#include <math.h>

int roundToInteger(double n);
float roundToTenths(double n);
double roundToHundreths(double n);
double roundToThousandths(double n);

double y = 0;

int main(void)
{
    double n = 0, ten = 0, hun = 0, tho = 0;
    int integer = 0;
    scanf("%lf", &n);
    integer = roundToInteger(n);
    ten = roundToTenths(n);
    hun = roundToHundreths(n);
    tho = roundToThousandths(n);

    printf ("%s", "number     integer     tenths     hundreths     thousandths\n");
    printf ("%.6f%10d%11.1f%14.2f%16.3f", n, integer, ten, hun, tho);

    return 0;
}

int roundToInteger(double n)
{
    int y = floor(n + 0.5);
    return y;
}

float roundToTenths(double n)
{
    y = floor(n * 10 + 0.5) / 10;
    return y;
}

double roundToHundreths(double n)
{
    y = floor(n * 100 + 0.5) / 100;
    return y;
}

double roundToThousandths(double n)
{
    y = floor(n * 1000 + 0.5) / 1000;
    return y;
}

//Powered by Deng_Yimo.
