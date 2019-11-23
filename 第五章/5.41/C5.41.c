#include<stdio.h>
#include<math.h>
float distance( float x,float y,float j, float z)
 {
     return sqrt(pow(x - j, 2) + pow(y - z, 2));
 }
 int main()
 {
     float x1, y1, x2, y2,dis;
     printf("Please input 1st coordinate:");
     scanf("%f%f", &x1, &y1);

     printf("\nPlease input 2nd coordinate:");
     scanf("%f%f", &x2,& y2);

     dis = distance(x1, y1, x2, y2);

     printf("The first coordinate is (%.2f ,%.2f) ", x1, y1);
     printf("\nThe second coordinate is (%.2f,%.2f??", x2, y2);
     printf("\nThe distance is %.3f.", dis);
 }
 
