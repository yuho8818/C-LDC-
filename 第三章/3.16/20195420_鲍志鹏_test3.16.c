#include<stdio.h>

int main(void){
  int miles = 0;
  float gallons, ratio, totalGallons, totalMiles = 0;
  printf("Enter the gallons used ( -1 to escape):\n");
  fflush(stdout);
  scanf("%f", &gallons);
  while ( gallons != -1 ){
    puts("Enter the miles driven:");
    fflush(stdout);
    scanf("%d", &miles);
    ratio = ( float ) miles / gallons;
    printf("The miles/gallon for this tank was %f\n", ratio);
    fflush(stdout);
    totalGallons += gallons;
    totalMiles += miles;
    printf("Enter the gallons used ( -1 to escape):\n");
    fflush(stdout);
    scanf("%f", &gallons);
  }
  printf("The overall average miles/gallon was %f\n", totalMiles / totalGallons);
}
