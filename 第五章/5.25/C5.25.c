#include<stdio.h>
float m = 0.000001;
float compare(float a, float b,float c)
{
    float min = a;
    if(min-b>m)
        min = b;
    if(min-c>m)
        min = c;
    return min;
}
int main()
{
    float x, y, z,min;
    printf("Please input 3 numbers:");
    scanf("%f%f%f", &x,&y, &z);
    min=compare(x, y, z);
    printf("%f", min);
}
