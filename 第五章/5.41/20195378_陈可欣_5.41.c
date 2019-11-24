#include<stdio.h>
#include<math.h>
#include<windows.h>
double distance(double x1,double x2,double y1,double y2);
int main()
{
    double x1,x2,y1,y2;
    printf("input the first pole A(x1,y1)\n");
    scanf("%lf%lf",&x1,&y1);
    printf("input the first pole B(x2,y2)\n");
    scanf("%lf%lf",&x2,&y2);
    printf("The distance of A,B is: %.3f\n",distance(x1,x2,y1,y2));
    system("pause");
    return 0;
}
double distance(double x1,double x2,double y1,double y2)
{
   return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
